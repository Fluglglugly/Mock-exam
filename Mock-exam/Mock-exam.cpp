

#include <iostream>
#include <conio.h>
#include <string>
#include <stdlib.h>
#include <time.h>


//was planning on making more functions that do some of the tasks inside these ones, but focused on making them work first. Right now I'm too lazy too doo it
//and wouldn't have had the time on an actual exam, and, honestly, most of those functions would only be used once, and so writing them would only
//lead to me writing (slightly) more (and more readable, but let's ignore that part). There's also a crap load of warnings, but it works, so I don't really care.
void func_Task4() {


        int x = 1;
        int y = 1;
        int a;
        int points = 0;
        char grid[10][10] = {//The character is X
     {'+','#','#','#','#','#','#','#','#','|'},
     {'|','X',' ',' ',' ','`','`','`','`','|'},
     {'|','#','#',' ','#','#','#','#','#','|'},
     {'|',' ',' ','`',' ','`','`','`',' ','|'},
     {'|',' ','|','`','|','#','#','#','|','|'},
     {'|',' ','|','`','|','`','`','`','|','|'},
     {'|','`','|','`',' ',' ',' ',' ',' ','|'},
     {'|','`',' ',' ',' ',' ',' ',' ','`','|'},
     {'|','`','`','#','#','#','#','#','`','|'},
     {'|','#','#','#','#','#','#','#','#','|'},
        };
        for (int ever = 0; 0 < 1;) {


            for (int i = 0; i < 10;) {
                for (int l = 0; l < 10;) {
                    if (l == 9) {
                        if (i == 0) {
                            std::cout << grid[i][l] <<"Points: " <<points<<"\n";
                        }
                        else {
                            std::cout << grid[i][l] << "\n";
                        }
                    }
                    else {
                        std::cout << grid[i][l];
                    };
                    l++;
                };
                i++;
            };
            for (int some_stupid_reason = 0; some_stupid_reason < 1; some_stupid_reason++) {
                a = _getch(); //YOU'RE THE WORST FUNCTION IN EXISTENCE, FUCKING ASSHOLE!
            };
            //I'm not sure, but I think my pc has different ascII values. internet says always =65, but when I write a code to check, I get 97. If wasd doesn't work on your computer
            //I'll have to add the code I used to find the ascII value of wasd before this, assign that value to a variable, and use that here
            
            if (a == 72 | a == 119) {//up
                if (x - 1 == 0 | grid[x - 1][y] == '#' | grid[x - 1][y] == '|') { 

                }
                else {
                    if (grid[x - 1][y] == '`') {
                        grid[x - 1][y] = ' ';
                        points += 5;
                    };
                    std::swap(grid[x][y], grid[x - 1][y]);
                    x--;
                };

            }
            else if (a == 80 | a == 115) { //down
                if (x + 1 == 10 | grid[x + 1][y] == '#' | grid[x + 1][y] == '|') { 

                }
                else {
                    if (grid[x + 1][y] == '`') {
                        grid[x + 1][y] = ' ';
                        points += 5;
                    };
                    std::swap(grid[x][y], grid[x + 1][y]);
                    x++;
                };
            }
            else if (a == 75 | a == 97) { //left
                if (y - 1 == 0 | grid[x][y - 1] == '#' | grid[x][y - 1] == '|') { 

                }
                else {
                    if (grid[x ][y-1] == '`') {
                        grid[x][y-1] = ' ';
                        points += 5;
                    };
                    std::swap(grid[x][y], grid[x][y - 1]);
                    y--;
                };
            }
            else if (a == 77 | a == 100) { //right
                if (y + 1 == 9 | grid[x][y + 1] == '#' | grid[x][y + 1] == '|') { 

                }
                else {
                    if (grid[x][y + 1] == '`') {
                        grid[x][y + 1] = ' ';
                        points += 5;
                    };
                    std::swap(grid[x][y], grid[x][y + 1]);
                    y++;
                };

            };
            system("CLS");
        };
};
void func_Task3() {
    int x= 1;
    int y = 1;
    int a;

    char grid[10][10] = {//The character is X
 {'+','#','#','#','#','#','#','#','#','|'},
 {'|','X',' ',' ',' ',' ',' ',' ',' ','|'},
 {'|','#','#',' ','#','#','#','#','#','|'},
 {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
 {'|',' ','|',' ','|','#','#','#','|','|'},
 {'|',' ','|',' ','|',' ',' ',' ','|','|'},
 {'|',' ','|',' ',' ',' ',' ',' ',' ','|'},
 {'|',' ',' ',' ',' ',' ',' ',' ',' ','|'},
 {'|',' ',' ','#','#','#','#','#',' ','|'},
 {'|','#','#','#','#','#','#','#','#','|'},
    };
    for (int ever = 0; 0 < 1;) {


        for (int i = 0; i < 10;) {
            for (int l = 0; l < 10;) {
                if (l == 9) {
                    std::cout << grid[i][l] << "\n";
                }
                else {
                    std::cout << grid[i][l];
                };
                l++;
            };
            i++;
        };
        for (int some_stupid_reason = 0; some_stupid_reason < 1; some_stupid_reason++) {
            a = _getch(); //YOU'RE THE WORST FUNCTION IN EXISTENCE, FUCKING ASSHOLE!
        };
        if (a == 72 | a==119) {//up

            if (x - 1 == 0 | grid[x - 1][y] == '#' | grid[x - 1][y] == '|') { //up

            }
            else {
                std::swap(grid[x][y], grid[x - 1][y]);
                x--;
            };

        }
        //I'm not sure, but I think my pc has different ascII values. internet says a=65, but when I write a code to check, I get 97. If it doesn't work on your computer
        //I'll have to add the code I used to find the ascII value of aswd before this, assign that value to a variable, and use that here
        else if (a == 80 | a == 115) { //down

            if (x + 1 == 10 | grid[x + 1][y] == '#' | grid[x + 1][y] == '|') { //up

            }
            else {
                std::swap(grid[x][y], grid[x + 1][y]);
                x++;
            };
        }
        else if (a == 75 | a==97) { //left
            if (y - 1 == 0 | grid[x][y - 1] == '#' | grid[x][y - 1] == '|') { //up

            }
            else {
                std::swap(grid[x][y], grid[x][y - 1]);
                y--;
            };
        }
        else if (a == 77 | a==100) { //right


            if (y + 1 == 9 | grid[x][y + 1] == '#' | grid[x][y + 1] == '|') { //up

            }
            else {
                std::swap(grid[x][y], grid[x][y + 1]);
                y++;
            };

        };
        system("CLS");
    };

};
void func_Task2() {
    int random;
     int value[10];
     char name[10] = { 'A','B','C','D','E','F','G','H','I','J' };
     int number[10] = { 0,1,2,3,4,5,6,7,8,9 };

    srand(time(0));
    for (int ill_defined = 0; ill_defined < 10; ++ill_defined) 
    {

        random = rand() % 20;
        value[ill_defined] = random;        
    };
    for (int Pepsi_Max = 0; Pepsi_Max < 10; ++Pepsi_Max) {
        for (int i = 0; i < 9;) {

            if (value[i] > value[i + 1]) {
                std::swap(name[i], name[i + 1]);
                std::swap(value[i], value[i + 1]);
                std::swap(number[i], number[i + 1]);
                
            };
            i++;
        };
    };
    std::cout << "No          Name          Value         Health Bar"
               "\n----------------------------------------------------------------\n";
    for (int k = 0; k < 10;) {
        std::cout << number[k] << "            " << name[k] << "             " << value[k];
        if (value[k] > 9) {
            std::cout << "           ";
        }
        else {
            std::cout << "            ";
        };
        for (int j = 0; j < value[k];) {
            std::cout << "*";
            j++;
        };
        std::cout<<"\n";
        k++;
    };

};
void func_Task1() {

    int one=0;
    int two=0;
    int three=0;
    int four=0;
    int five=0;
    int six=0;
    int dice;

    srand(time(0));
    for (int i = 0; i < 2000; i++) {
        dice = rand()%6;
        if (dice == 1) {
            one++;
        }
        else if (dice == 2) {
            two++;
        }
        else if (dice == 3) {
            three++;
        }
        else if (dice == 4) {
            four++;
        }
        else if (dice == 5) {
            five++;
        }
        else{
            six++;
        };
    };
    std::cout << "A dice was thrown 2000 times. These are the results:\n"
        "One: " << one <<
        "\nTwo: " << two <<
        "\nThree: " << three <<
        "\nFour: " << four <<
        "\nFive: " << five <<
        "\nSix: " << six << "\n";
};
void func_Menu()
{
    for (int i = 0; i < 1;) {
        int choice;
        std::string Menu = "\n1. Task1\n"
            "2. Task2\n"
            "3. Task3\n"
            "4. Task4\n"
            "5. Quit\n";
        std::cout << Menu;
        std::cin >> choice;
        switch (choice) {
        case 1:
            system("CLS");
            func_Task1();
            break;
        case 2:
            system("CLS");
            func_Task2();
            break;
        case 3:
            system("CLS");
            func_Task3();
            break;
        case 4:
            system("CLS");
            func_Task4();
            break;
        case 5:
            std::cout << "Exiting the program";
            i = 1;
            break;
        default:
            std::cout << "Number not valid, try again.";

        };
    };

};
void func_login()
{
    std::string one = "|1|";
    std::string two = "|2|";
    std::string three = "|3|";
    std::string four = "|4|";
    std::string five = "|5|";
    std::string six = "|6|";
    std::string seven = "|7|";
    std::string eight = "|8|";
    std::string nine = "|9|";
    std::string star = "|*|";
    std::string board[3][4] = { star, two, three,one,
                     four, five, six,"nothing",
                     seven, eight, nine,"nothing"
    };
    std::string code[4];
    std::string password[4] = { four, five, two, three } ;

    int x = 0;
    int y = 0;
    int counter = 0;

    unsigned char a;
    std::cout << "Use the arrow keys to move. You have four moves, and three attemps.\n";
    for (int Im_Stupid = 0; Im_Stupid < 3; ++Im_Stupid) {
        counter = 0;
        std::swap(board[x][y], board[0][3]);
        std::swap(board[0][3], board[0][0]);
        x = 0;
        y = 0;
        for (int i = 0; i < 4; i++) { //I could use i instead of counter later on, made counter cause of FUCKING GETCH!, but i'm too lazy to edit it out




            std::cout << board[0][0] << board[0][1] << board[0][2] << "\n"
                << board[1][0] << board[1][1] << board[1][2] << "\n"
                << board[2][0] << board[2][1] << board[2][2] << "\n";
            for (int some_stupid_reason = 0; some_stupid_reason < 2; some_stupid_reason++) {
                a = _getch(); //YOU'RE THE WORST FUNCTION IN EXISTENCE, FUCKING ASSHOLE!
            };
            //for some reason _getch() makes each round in the loop count as two?, as in it rund the entire loop, but skips everything other than counting variables
           //, that's why i have <9 in the loop, doesn't really makes sense to me, but with 9 in the loop, I get the correct result. Does however fuck up all other counting variables :(
           //doesn't work to put it in it's own loop either, WAIT. IT DOES. WOOOO! :)

            if (a == 72) {

                if (x - 1 < 0) { //up
                    code[counter] = board[2][y];
                    std::swap(board[x][y], board[2][y]);
                    std::swap(board[x][y], board[0][3]);
                    x = 2;
                }
                else {
                    code[counter] = board[x - 1][y];
                    std::swap(board[x][y], board[x - 1][y]);
                    std::swap(board[x][y], board[0][3]);
                    x -= 1;
                };

            }
            else if (a == 80) { //down

                if (x + 1 > 2) {
                    std::cout << "\n" << counter << "\n";
                    code[counter] = board[0][y];
                    std::swap(board[x][y], board[0][y]);
                    std::swap(board[x][y], board[0][3]);
                    x = 0;
                }
                else {
                    code[counter] = board[x + 1][y];
                    std::swap(board[x][y], board[x + 1][y]);
                    std::swap(board[x][y], board[0][3]);
                    x += 1;
                };
            }
            else if (a == 75) { //left

                if (y - 1 < 0) {
                    code[counter] = board[x][2];
                    std::swap(board[x][y], board[x][2]);
                    std::swap(board[x][y], board[0][3]);
                    y = 2;
                }
                else {
                    code[counter] = board[x][y - 1];
                    std::swap(board[x][y], board[x][y - 1]);
                    std::swap(board[x][y], board[0][3]);
                    y -= 1;
                };
            }
            else if (a == 77) { //right

                if (y + 1 > 2) {
                    code[counter] = board[x][0];
                    std::swap(board[x][y], board[x][0]);
                    std::swap(board[x][y], board[0][3]);
                    y = 0;
                }
                else {
                    code[counter] = board[x][y + 1];
                    std::swap(board[x][y], board[x][y + 1]);
                    std::swap(board[x][y], board[0][3]);
                    y += 1;
                };

            };
            counter += 1;
            system("CLS"); //You're way better than that stupid getch-guy!
        };
        //std::cout <<code[0]<< password[0]<<code[1]<< password[1]<<code[2]<< password[2]<<code[3]<<password[3];
        if ((code[0] == password[0]) && (code[1] == password[1]) && (code[2] == password[2]) && (code[3] == password[3])) {
            std::cout << "Correct password!";
            Im_Stupid = 3;
            func_Menu();


        }
        else {
            std::cout << "WRONG!\n";
        };
    };
};


int main()
{
    func_login();
}

