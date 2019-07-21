//
// Created by hocke on 5/6/2019.
//



#ifndef SUDOKUSOLVER_CPP
#define SUDOKUSOLVER_CPP

#include "../include/SudokuSolver.h"

#include <iostream>
#include <fstream>

void SudokuSolver::getPuzzle(std::ifstream &infile)
{
    std::cout<<"Processing File..."<<std::endl;
    uint32_t i = 1;
    std::string line;
    while(infile>>line)
    {
        if (i < 10) {
            populateOrigBoardRow(i - 1, line);
            populateSolvedBoardRow(i - 1, line);
        }
        ++i;
        std::cout<<"Row ";
        std::cout<<i;
        std::cout<<" processed..."<<std::endl;
    }
    std::cout<<"Finished Processing..."<<std::endl;
}

void SudokuSolver::getPuzzleByInput()
{
    std::string input;
    std::cout<<"Please enter each row of Sudoku as a 9 digit integer with 0's representing empty spaces"<<std::endl;
    for(int i = 1; i < 10;++i)
    {
        std::cout<<"Row ";
        std::cout<<i;
        std::cout<<": ";
        std::cin>>input;
        while(input.length()!=9)
        {
            std::cout<<"Please enter each row of Sudoku as a 9 digit integer with 0's representing"
                       " empty spaces"<<std::endl;
            std::cin>>input;
        }
        populateOrigBoardRow(i - 1, input);
        populateSolvedBoardRow(i - 1, input);
    }
}

void SudokuSolver::populateOrigBoardRow(int row,std::string digits)
{
    for(uint32_t i = 9; i>0 ; --i)
    {
        if(digits[i-1]=='0'){
            origBoard[row][i-1]= 0;
        }
        if(digits[i-1]=='1'){
            origBoard[row][i-1]= 1;
        }
        if(digits[i-1]=='2'){
            origBoard[row][i-1]= 2;
        }
        if(digits[i-1]=='3'){
            origBoard[row][i-1]= 3;
        }
        if(digits[i-1]=='4'){
            origBoard[row][i-1]= 4;
        }
        if(digits[i-1]=='5'){
            origBoard[row][i-1]= 5;
        }
        if(digits[i-1]=='6'){
            origBoard[row][i-1]= 6;
        }
        if(digits[i-1]=='7'){
            origBoard[row][i-1]= 7;
        }
        if(digits[i-1]=='8'){
            origBoard[row][i-1]=8;
        }
        if(digits[i-1]=='9'){
            origBoard[row][i-1]= 9;
        }
    }
}

void SudokuSolver::populateSolvedBoardRow(int row,std::string digits)
{
    for(uint32_t i = 9; i>0 ; --i)
    {
        if(digits[i-1]=='0'){
            solvedBoard[row][i-1]= 0;
        }
        if(digits[i-1]=='1'){
            solvedBoard[row][i-1]= 1;
        }
        if(digits[i-1]=='2'){
            solvedBoard[row][i-1]= 2;
        }
        if(digits[i-1]=='3'){
            solvedBoard[row][i-1]= 3;
        }
        if(digits[i-1]=='4'){
            solvedBoard[row][i-1]= 4;
        }
        if(digits[i-1]=='5'){
            solvedBoard[row][i-1]= 5;
        }
        if(digits[i-1]=='6'){
            solvedBoard[row][i-1]= 6;
        }
        if(digits[i-1]=='7'){
            solvedBoard[row][i-1]= 7;
        }
        if(digits[i-1]=='8'){
            solvedBoard[row][i-1]=8;
        }
        if(digits[i-1]=='9'){
            solvedBoard[row][i-1]= 9;
        }
    }
}

void SudokuSolver::displaySolved()
{
    std::cout<<"Solved Board"<<std::endl;
    std::cout<<"---------------------------------------"<<std::endl;
    for(int row = 0;row<9;++row)
    {
        for(int col =0;col<9;++col)
        {
            if(col==0)
            {
                std::cout<<"| ";
            }
            else if(col == 3 || col == 6)
            {
                std::cout<<" || ";
            }
            else{
                std::cout<<" | ";
            }
            std::cout<<solvedBoard[row][col];
            if(col ==8)
            {
                std::cout<<" |";
            }
        }
        std::cout<<"\n";
        if(row ==2 ||row ==5)
        {
            std::cout<<"======================================="<<std::endl;
        }
        else{
            std::cout<<"---------------------------------------"<<std::endl;
        }

    }
}

void SudokuSolver::displayUnSolved()
{
    std::cout<<"Original Board"<<std::endl;
    std::cout<<"---------------------------------------"<<std::endl;
    for(int row = 0;row<9;++row)
    {
        for(int col =0;col<9;++col)
        {
            if(col==0)
            {
                std::cout<<"| ";
            }
            else if(col == 3 || col == 6)
            {
                std::cout<<" || ";
            }
            else{
                std::cout<<" | ";
            }
            std::cout<<origBoard[row][col];
            if(col ==8)
            {
                std::cout<<" |";
            }
        }
        std::cout<<"\n";
        if(row ==2 ||row ==5)
        {
            std::cout<<"======================================="<<std::endl;
        }
        else{
            std::cout<<"---------------------------------------"<<std::endl;
        }

    }
}

bool SudokuSolver::legalMove(int elem, int row, int col)
{
    return checkCol(elem,col)&&checkRow(elem,row)&&checkSameSquare(elem,row,col);
}

int count=0;
bool SudokuSolver::solve()
{
    int row,col;
    if(!findUnassigned(row,col))
    {
        return true;
    }
     for(int num = 1;num<=9;++num)
    {
        if(legalMove(num,row,col)) {
            solvedBoard[row][col] = num;

            if(solve())
            {
                return true;
            }
            solvedBoard[row][col]=0;
            ++count;
            if(count%100000==0)
            {
                std::cout<<".";
            }
        }
    }
    return false;
}

bool SudokuSolver::checkCol(int elem, int col)
{
    for(uint32_t row = 0;row<9;++row)
    {
        if(solvedBoard[row][col]==elem)
        {
            return false;
        }
    }
    return true;
}

bool SudokuSolver::checkRow(int elem, int row)
{
    for(uint32_t col = 0;col<9;++col)
    {
        if(solvedBoard[row][col]==elem)
        {
            return false;
        }
    }
    return true;
}

bool SudokuSolver::checkSameSquare(int elem, int row, int col) {
    if (row < 3) {
        if (col < 3) {
            return checkBox(elem,0,0);
        } else if (col < 6) {
            return checkBox(elem,0,3);
        } else {
            return checkBox(elem,0,6);
        }
    } else if (row < 6) {
        if (col < 3) {
            return checkBox(elem,3,0);
        } else if (col < 6) {
            return checkBox(elem,3,3);
        } else {
            return checkBox(elem,3,6);
        }
    } else {
        if (col < 3) {
            return checkBox(elem,6,0);
        } else if (col < 6) {
            return checkBox(elem,6,3);
        } else {
            return checkBox(elem,6,6);
        }
    }
}

bool SudokuSolver::checkBox(int elem, int rowStart, int colStart)
{
    for(int i = rowStart;i<rowStart+3;++i)
    {
        for(int j = colStart;j<colStart+3;++j)
        {
            if(solvedBoard[i][j]==elem)
            {
                return false;
            }
        }
    }
    return true;
}

bool SudokuSolver::findUnassigned(int &row, int &col)
{
    for(uint32_t i = 0 ; i < 9 ; ++i)
    {
        for (uint32_t j =0;j<9;++j)
        {
            if(solvedBoard[i][j]==0)
            {
                row = i;
                col = j;
                return true;
            }
        }
    }
    return false;
}


#endif //SUDOKUSOLVER_CPP