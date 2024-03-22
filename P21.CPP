#include <SFML/Graphics.hpp>
#include <iostream>

const int WINDOW_WIDTH = 800;
const int WINDOW_HEIGHT = 600;
const float HELICOPTER_SPEED = 5.0f;
const float OBSTACLE_SPEED = 3.0f;
const int NUM_OBSTACLES = 5;
const float OBSTACLE_GAP = 300.0f;

class HelicopterGame {
private:
    sf::RenderWindow window;
    sf::RectangleShape helicopter;
    sf::RectangleShape obstacles[NUM_OBSTACLES];
    bool isFlyingUp;
    bool isGameOver;
    float obstacleOffset;

public:
    HelicopterGame() : window(sf::VideoMode(WINDOW_WIDTH, WINDOW_HEIGHT), "Helicopter Game") {
        window.setFramerateLimit(60);
        helicopter.setSize(sf::Vector2f(50, 20));
        helicopter.setPosition(100, WINDOW_HEIGHT / 2);
        helicopter.setFillColor(sf::Color::Red);
        isFlyingUp = false;
        isGameOver = false;
        obstacleOffset = 0;

        for (int i = 0; i < NUM_OBSTACLES; ++i) {
            obstacles[i].setSize(sf::Vector2f(50, WINDOW_HEIGHT));
            obstacles[i].setPosition(WINDOW_WIDTH + i * OBSTACLE_GAP, 0);
            obstacles[i].setFillColor(sf::Color::Green);
        }
    }

    void run() {
        while (window.isOpen()) {
            sf::Event event;
            while (window.pollEvent(event)) {
                if (event.type == sf::Event::Closed)
                    window.close();
                else if (event.type == sf::Event::KeyPressed) {
                    if (event.key.code == sf::Keyboard::Space)
                        isFlyingUp = true;
                } else if (event.type == sf::Event::KeyReleased) {
                    if (event.key.code == sf::Keyboard::Space)
                        isFlyingUp = false;
                }
            }

            if (!isGameOver) {
                update();
                render();
            }
        }
    }

    void update() {
        if (isFlyingUp)
            helicopter.move(0, -HELICOPTER_SPEED);
        else
            helicopter.move(0, HELICOPTER_SPEED);

        for (int i = 0; i < NUM_OBSTACLES; ++i) {
            obstacles[i].move(-OBSTACLE_SPEED, 0);
            if (obstacles[i].getPosition().x < -obstacles[i].getSize().x) {
                obstacles[i].setPosition(WINDOW_WIDTH, 0);
                obstacleOffset += OBSTACLE_GAP;
            }

            if (helicopter.getGlobalBounds().intersects(obstacles[i].getGlobalBounds())) {
                std::cout << "Game Over!" << std::endl;
                isGameOver = true;
                return;
            }
        }
    }

    void render() {
        window.clear();
        window.draw(helicopter);
        for (int i = 0; i < NUM_OBSTACLES; ++i) {
            window.draw(obstacles[i]);
        }
        window.display();
    }
};

int main() {
    HelicopterGame game;
    game.run();
    return 0;
}
