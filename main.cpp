//AAM project - Anti Afk Machine for Roblox - ENJOY

//TODO make it loop every 10 minutes since games usually kick you for being afk for 20 minutes-done
//also figure out how to do a nested vector -done
#include <iostream>
#include <windows.h>
#include <chrono>
#include <thread>

using std::cout, std::endl, std::string, std::cin;

class AntiAfk{
public:
    void welcome_message(){
        cout << "Welcome to the anti afk plugin\nThis program will run every 10 minutes so that you can be Away From the Keyboard!\n";
    }

    void posAndClick(){
        char userAnswer = 'q';
        int z=21;
        printf("Press y and enter to start -- %d\n", z);


        while(userAnswer!='y'){
            cin >> userAnswer;
            if(userAnswer=='y'){
                while(1){
                    printf("Press numpad 0 to begin the exit process!\n");
                    std::this_thread::sleep_for(std::chrono::minutes(10));
                    SetCursorPos(958,800);
                    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    SetCursorPos(767,439);
                    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    SetCursorPos(814,387);
                    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

                    SetCursorPos(763,342);
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

                    SetCursorPos(958,800);
                    std::this_thread::sleep_for(std::chrono::seconds(1));
                    mouse_event(MOUSEEVENTF_LEFTDOWN | MOUSEEVENTF_LEFTUP, 0, 0, 0, 0);

                    if(GetKeyState(VK_NUMPAD0) & 0x8000){
                        printf("Ending in 10 seconds unless you press numpad 1!\n");
                        for(int i = 10;i>0;i--){
                            std::this_thread::sleep_for(std::chrono::seconds(1));
                            printf("%d\n", i);

                            if(GetKeyState(VK_NUMPAD1 & 0x8000)){
                                printf("You chose to continue the program!");
                                break;
                            }
                            if(i==1){
                                printf("Thanks for using the AAM\n      -Management");
                                std::this_thread::sleep_for(std::chrono::seconds(10));
                                exit(EXIT_SUCCESS);
                            }
                        }
                   }
                }
            }
            else{
                printf("Didnt get that...try again!\n");
            }
        }
    }
};

int main(){
    AntiAfk antiafk1;
    antiafk1.posAndClick();
    /*
    antiafk1.welcome_message();
    antiafk1.posAndClick();
    */
}


    //to find size of vector do (vector name).size();
    //GetKeyState num & 0x8000 checks if the key is pressed right now
    //exit(FAILURE) indicátes that the system was exitted unsuccessfully while exit(0) or exit(EXIT_SUCCESS) means that the exit was succesful

/*
positions

open roblox
958 - 740

double click
767 439
814,387
763,342

close roblox
958 - 740
*/
