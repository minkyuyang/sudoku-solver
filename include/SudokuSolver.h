/**
 * @brief   SudokuSolver.h
 * @details Basic functions needed to solve a sudoku puzzle
 * @author  Minkyu Yang, Vanderbilt University, Sophomore
 * @date    7/16/2019
 */

#ifndef SUDOKUSOLVER_H
#define SUDOKUSOLVER_H

#include <iostream>

class SudokuSolver{
public:

    /**
    * Default constructor to create Sudoku Solver object
    */
    SudokuSolver() = default;

    /**
    * Sudoku solver obj populates the board with txt file
    *
    */
    void getPuzzle(std::ifstream &infile);

    /**
    * Populates the board through user input
    *
    */
    void getPuzzleByInput();

    /**
    * Called on by getPuzzle and getPuzzleByInput
    * to populate the original unsolved board
    *
    */
    void populateOrigBoardRow(int row,std::string digits);

    /**
    * Called on by solve
    * to populate the new solved board
    *
    */
    void populateSolvedBoardRow(int row,std::string digits);

    /**
    * Displays solved board
    *
    */
    void displaySolved();

    /**
    * Displays unsolved board
    *
    */
    void displayUnSolved();

    /**
    * Checks if elem in row and col is a legal move
    *
    * @param int elem (to check) int row (row number) int col (col number)
    * @return boolean to see if legal (true) or not (false)
    */
    bool legalMove(int elem, int row, int col);

    /**
    * Uses backtracking by calling upon itself after checking every square
    *
    * @return boolean to see if board is solved (true) or not (false)
    */
    bool solve();

    /**
    * Checks if elem can be legally played in its 3 by 3 square
    *
    * @param int elem (to check) int row (row number) int col (col number)
    * @return boolean to see if legal (true) or not (false)
    */
    bool checkSameSquare(int elem, int row, int col);

    /**
    * Checks if elem is already in the given row and
    * check the legality of the move
    *
    * @param int elem (to check) int row (row number)
    * @return boolean to see if legal (true) or not (false)
    */
    bool checkRow(int elem, int row);

    /**
    * Checks if elem is already in the given column and
    * check the legality of the move
    *
    * @param int elem (to check) int col (col number)
    * @return boolean to see if legal (true) or not (false)
    */
    bool checkCol(int elem, int col);

    /**
    * Checks if elem is already in the given box - called by checkSameSquare
    * This method is called by checkSameSquare after the method decides which box
    * the element belongs to and assigns rowstart and colstart accordingly
    *
    * @param int elem (to check) int rowstart (start of box row number) int colstart (start of box col number)
    * @return boolean to see if legal (true) or not (false)
    */
    bool checkBox(int elem,int rowStart, int colStart);

    /**
    * Checks if elem is already in the given column and
    * check the legality of the move
    *
    * @param int row (row number to check) int col (col number to check)
    * @return boolean to see if the given row and col element is unassigned (0)
    */
    bool findUnassigned(int &row, int &col);



private:
    int origBoard[9][9];
    int solvedBoard[9][9];

};



#endif //SUDOKUSOLVER_H
