//**************************************
// Title:   Program3.cpp
// Purpose: hold the main function 
//          serving as the driver
//**************************************

#include "Pokemon.h"
#include "BinaryTree.h"
#include <string>
#include <fstream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
    //variables
    ifstream infile;
    string name;
    int indexNum;
    Pokemon temp;
    
    //create the binary tree
    BinaryTree<Pokemon> pokedex;

    //open .txt file
    infile.open("pokedex.txt");

    //read in pokemon from .txt file
    if (infile.is_open())
    {
        while(!infile.eof())
        {
            infile.getline(indexNum, '#');
            temp.setID(indexNum);
            infile.getline(name, '#');
            temp.setName(name);
            pokedex.insertNode(temp);    
        }
    }
    else
    {
        cout << "Sorry, file could not be opened.";
    }

    //close .txt file
    infile.close();

    //display pokedex
    pokedex.displayInOrder();

    return 0;
}