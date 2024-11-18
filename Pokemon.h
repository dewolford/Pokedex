//****************************************************
// Title:   Pokemon.h
// Purpose: hold the pokemon class and functions
//****************************************************

#ifndef POKEMON_H
#define POKEMON_H

#include <iostream>
#include <string>
#include <iomanip>
#include "BinaryTree.h"

using namespace std;

class Pokemon
{
    private:
        int indexNum;
        string Name;
        
    public:
    //constructors
        //default
        Pokemon()
        {
            indexNum = 0;
            Name = " ";
        };
        //overloaded   
        Pokemon(int i, string n)
        {
            indexNum = i;
            Name = n;
        };

    //setters
        void setID(int i)
        {
            indexNum = i;
        };
        void setName(string n)
        {
            Name = n;
        };

    //getters
        int getID()
        {
            return indexNum;
        };
        string getName()
        {
            return Name;
        };

    //operators
        /*   < operator     */
        bool operator < (const Pokemon& item)
        {
            return this->indexNum < item.indexNum;
        };
        /*   == operator    */
        bool operator == (const Pokemon& item)
        {
            return this->indexNum == item.indexNum;
        };
        /*   << operator    */
        bool operator << (const Pokemon& item)
        {
            return this->indexNum << item.indexNum;
        }
};

#endif