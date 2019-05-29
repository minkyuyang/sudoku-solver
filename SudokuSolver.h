/**
 * @brief   SudokuSolver.h
 * @details Basic functions needed to solve a sudoku puzzle
 * @author  Minkyu Yang, Vanderbilt University, Sophomore
 * @date    5/22/2019
 */

#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H

#include <iostream>

class SudokuSolver{
public:

    SudokuSolver() = default;

    void getPuzzle(std::ifstream &infile);

    void getPuzzleByInput();

    void populateOrigBoardRow(int row,std::string digits);

    void populateSolvedBoardRow(int row,std::string digits);

    void displaySolved();

    void displayUnSolved();

    bool legalMove(int elem, int row, int col);

    bool solve();

    bool checkSameSquare(int elem, int row, int col);

    bool checkRow(int elem, int row);

    bool checkCol(int elem, int col);

    bool checkBox(int elem,int rowStart, int colStart);

    bool findUnassigned(int &row, int &col);



private:
    int origBoard[9][9];
    int solvedBoard[9][9];

};



#endif //SUDOKUSOLVER_H
