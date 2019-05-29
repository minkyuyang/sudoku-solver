
#include <fstream>
#include <iostream>
#include <string>


#include "SudokuSolver.h"

int main()
{
    char keepGoing = 'y';
    int insertOption=1;
    while(keepGoing == 'y'){
        SudokuSolver solve;
        std::cout<<"How would you like to input your sudoku?"<<std::endl;
        std::cout<<"1. Use SudokuFile.txt (Default)"<<std::endl;
        std::cout<<"2. Insert each row"<<std::endl;
        std::cin>>insertOption;
        while(insertOption!=1 && insertOption!=2)
        {
            std::cout<<"Please input 1 or 2"<<std::endl;
            std::cin>>insertOption;
        }
        if(insertOption==1)
        {
            std::ifstream infile("SudokuFile.txt");
            solve.getPuzzle(infile);
        }
        else{
            solve.getPuzzleByInput();
        }
        solve.displayUnSolved();
        std::cout<<"\n\nSolving";
        solve.solve();
        std::cout<<"\n\nCompleted..."<<std::endl;
        solve.displaySolved();
        std::cout<<"Would like you to keep going? (y or n)";
        std::cin>>keepGoing;
    }
    std::cout<<"Thanks, Bye"<<std::endl;

}

