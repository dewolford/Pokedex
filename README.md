# Pokedex
****** Pokedex ******
A file based program that reads in Pokemon from a given file and sorts them using a Binary Tree. It then Displays them in numerical order based on their index number.

This program contains:
    The driver - Program3.cpp

    and

    2 class files - Pokemon.h and BinaryTree.h



Descriptions:
    Program3.cpp
    - opens file
    - reads in pokemon from file
    - calculates total number of pokemon
    - calls the display function
    - closes file

    Pokemon.h
    - creates the Pokemon class
    - also defines all functions in this class including overloaded operators

    BinaryTree.h
    - creates the BinaryTree class
        - including an embedded struct
    - defines all functions required for this class including a displayInOrder function while does the following:
        - sorts the Pokemone into numerical order
        - displays them in said order

