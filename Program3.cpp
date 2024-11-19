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
    string name, tempID;
    int indexNum;
    Pokemon temp;
    int totalNum = 0;
    
    //create the binary tree
    BinaryTree<Pokemon> pokedex;

    //open .txt file
    infile.open("pokedex.txt");

    //read in pokemon from .txt file
    if (infile.is_open())
    {
        while(getline(infile, tempID, '#'))
        {
            indexNum = stoi(tempID);
            temp.setID(indexNum);
            getline(infile, name, '#');
            temp.setName(name);
            cout << "\nInserting Pokemon with index " << indexNum << " into the Pokedex.";
            pokedex.insertNode(temp);  
            totalNum++;
        }

        //display number of pokemon added
        cout << "\n\n" << indexNum << " Pokemon have been added to the Pokedex!";
    
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