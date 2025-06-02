#include <iostream>
#include <windows.h>
#include <unistd.h>
#include <chrono>
#include <thread>

using namespace std;

int main()
{
    int s;
    long long t;
    cout << "How much time between prompts?" << " "; cin >> t;
    cout << "Type 1 to begin nameless trojan generator" << " "; cin >> s;
    if (s==1)
    {
        while (s=1)
        {
            cout << "Hello sir your computer has been infected by nameless trojan" << endl;
            this_thread::sleep_for(chrono::seconds(t));
        }
    }
    return 0;
}
