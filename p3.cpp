#include <iostream>
#include <cstdlib>  // For system()
#include <string>

using namespace std;

class MusicPlayer {
private:
    string currentSong;

public:
    void play(const string& song) {
        cout << "Playing: " << song << endl;
        string command = "xdg-open \"" + song + "\" &"; // assuming xdg-open to open file in default player
        system(command.c_str());
        currentSong = song;
    }

    void stop() {
        cout << "Stopping: " << currentSong << endl;
        // If you have a more sophisticated way of stopping the audio, implement it here
    }

    void pause() {
        cout << "Pausing: " << currentSong << endl;
        // If you have a more sophisticated way of pausing the audio, implement it here
    }
};

int main() {
    MusicPlayer player;

    // Example usage
    player.play("song1.mp3"); // Replace "song1.mp3" with your actual file path
    // Add more play calls to create a playlist

    // You can add functionality for pause, stop, skip, etc., as needed

    return 0;
}
