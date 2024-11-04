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
        Pokemon();              //default
        Pokemon(int, string);   //overloaded

        //setters
        void setID(int);
        void setName(string);

        //getters
        int getID();
        string getName();

        //operators
        /*   < operator     */
        /*   == operator    */
        /*   << operator    */
};

#endif