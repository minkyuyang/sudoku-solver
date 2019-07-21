
#include <fstream>
#include <iostream>
#include <string>


#include "../include/SudokuSolver.h"

int main()
{
    char keepGoing = 'y';                                   //toggle to keep the solver running/stop
    int insertOption=1;                                     //option to use txt file or writing each row
    while(keepGoing == 'y'){
        SudokuSolver solve;                                 //solver obj initiated
        std::cout<<"How would you like to input your sudoku?"<<std::endl;
        std::cout<<"1. Use SudokuFile.txt (Default)"<<std::endl;
        std::cout<<"2. Insert each row"<<std::endl;
        std::cin>>insertOption;                              //option choosen
        while(insertOption!=1 && insertOption!=2)            //illegal choice
        {
            std::cout<<"Please input 1 or 2"<<std::endl;
            std::cin>>insertOption;
        }
        if(insertOption==1)                                  //use txt file
        {
            std::ifstream infile("SudokuFile.txt");
            solve.getPuzzle(infile);
        }
        else{
            solve.getPuzzleByInput();                        //get puzzle by individual line
        }
        solve.displayUnSolved();                             //display unsolved puzzle
        std::cout<<"\n\nSolving";
        solve.solve();                                       //solving....
        std::cout<<"\n\nCompleted..."<<std::endl;
        solve.displaySolved();                               //display solved puzzle
        std::cout<<"Would like you to keep going? (y or n)";
        std::cin>>keepGoing;                                 //toggle to keep going or stop
    }
    std::cout<<"Thanks, Bye"<<std::endl;

}

