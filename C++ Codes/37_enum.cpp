// enum Level {
//   LOW,
//   MEDIUM,
//   HIGH
// };

// BY DEFAULT,
    // LOW = 0; MEDIUM = 1; HIGH = 2;

// EXAMPLE1
#include <iostream>
using namespace std;
enum Level {
  LOW = 25,
  MEDIUM = 50,
  HIGH = 75
}; 
int main() {
  enum Level myVar = MEDIUM;
  cout << myVar;
  return 0;
}


// EXAMPLE2
    #include <iostream>
    using namespace std;

    enum TrafficLight {
        RED,
        YELLOW,
        GREEN
    };
    int main() {
        enum TrafficLight currentLight = YELLOW;
        // Directly use a switch statement in main
        switch (currentLight) {
            case RED:
                cout << "Stop! The light is Red.\n";
                break;
            case YELLOW:
                cout << "Caution! The light is Yellow.\n";
                break;
            case GREEN:
                cout << "Go! The light is Green.\n";
                break;
            default:
                cout << "Invalid traffic light state.\n";
                break;
        }
        return 0;
    }
