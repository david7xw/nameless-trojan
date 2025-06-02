#include <iostream>
#include <limits>
#include <chrono>
#include <thread>

using namespace std;

void pressAnyKeyToContinue() {
    cout << "\nPress Enter to begin nameless trojan generator...";
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    cin.get();
}

int main()
{
    long long t;
    cout << "How much time between prompts (in seconds)?" << " ";
    cin >> t;

    pressAnyKeyToContinue();

    while (true)
    {
        cout << "Hello sir your computer has been infected by nameless trojan" << endl;
        this_thread::sleep_for(chrono::seconds(t));
    }

    return 0;
}
