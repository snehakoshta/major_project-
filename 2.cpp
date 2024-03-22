





#include <iostream>
#include <ctime>
#include <windows.h>

class Alarm {
public:
    tm alarmTime, presentTime, timeDifference;
    time_t now;

    Alarm() {
        now = time(0);
        presentTime = *localtime(&now);
        alarmTime = presentTime;
        alarmTime.tm_sec = 0;
    }

    void getTime() {
        std::string inputTime;
        std::cout << "Enter Alarm Time in 24-hour format [HH:MM]: ";
        std::getline(std::cin, inputTime);

        int pos = 0;
        while ((pos = inputTime.find(':')) != std::string::npos) {
            std::string token = inputTime.substr(0, pos);
            std::stringstream convert(token);
            convert >> alarmTime.tm_hour;
            inputTime.erase(0, pos + 1);
        }
        std::stringstream convert(inputTime);
        convert >> alarmTime.tm_min;
    }

    void timeDifference() {
        int sec = difftime(mktime(&alarmTime), now);
        timeDifference.tm_min = sec / 60;
        timeDifference.tm_hour = timeDifference.tm_min / 60;
        timeDifference.tm_min = timeDifference.tm_min % 60;
        timeDifference.tm_sec = sec % 60;

        if (sec < 0) {
            timeDifference.tm_hour = 24 + timeDifference.tm_hour - 1;
            timeDifference.tm_min = 0 - timeDifference.tm_min;
            timeDifference.tm_sec = 0 - timeDifference.tm_sec;
        }
    }

    void startAlarm() {
        while (true) {
            system("cls");
            now = time(0);
            presentTime = *localtime(&now);
            timeDifference();

            std::cout << "TIME REMAINING: " << timeDifference.tm_hour << ":"
                      << timeDifference.tm_min << ":" << timeDifference.tm_sec;

            if (timeDifference.tm_hour == 0 && timeDifference.tm_min == 0 && timeDifference.tm_sec == 0) {
                std::cout << std::endl << "Time Ended" << std::endl
                          << ">>> Press CTRL+C or Close the window to stop the alarm <<<" << std::endl;
                break;
            }
        }
    }
};

int main() {
    Alarm myAlarm;
    myAlarm.getTime();
    myAlarm.startAlarm();

    // Beep sound (optional)
    for (int i = 0; ; i += 50)
        Beep(i, 1000);

    return 0;
}
