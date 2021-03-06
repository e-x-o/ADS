#ifndef PROTOTYPES_H_INCLUDED
#define PROTOTYPES_H_INCLUDED

//Libraries definitions
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <limits.h>
//Defining the maximum value for our random generator
#define G_values_limit 9999





//Structure definition
typedef struct _Node {
    // Structure member containing the data ( the integers)
    int data;
    // Structure pointers to left and right children
    struct _Node *left;
    struct _Node *right;
} Node;


//Prototypes definitions


//CORE BST FUNCTIONS

//A function which adds a new node to the BST
Node *Add_Node ( Node *node, int data );
//A function which deletes a node from the BST
Node *Delete ( Node *node, int data );
//A function which determines the successor value of a node ( used when deleting the root )
Node *FindMin ( Node *node );
//A function which is used to search for a value in the BST
bool search ( Node *node, int target );


//BST TRAVERSALS AND DISPLAYING

//Pre-order traversal of the BST ( it will print current node, left, right )
void preorder ( Node *node );
//In-order traversal of the BST ( it will print left, current node,  right )
void inorder ( Node *node );
//In-order traversal of the BST ( it will print left, right, current node, )
void postorder ( Node *node );
//A function to display the BST in a tree-like manner ( from root to branches )
void Display ( Node *node, int level );



//PROJECT-RELATED FUNCTIONS

//A function to retrieve the minimum value of the BST
int getMin ( Node *node );
//A function to retrieve the maximum value of the BST
int getMax ( Node *node );
//A function which checks if our BST is bounded by two values
bool checkValues ( Node *node, int minimum, int maximum );


//UTILITY FUNCTIONS

//A function to delete the entire BST
void deleteBST ( Node **node );
//A function which checks if the BST is empty
bool isEmpty ( Node *node );
//A functions which returns random numbers
int randomNumberGenerator();


//TESTING FUNCTIONS

//A function used to build a test file with random data
void buildFile ( FILE *f, int numberOfItems );
//A function used to read instructions from a file
void readFile ( FILE *f, Node *node );



#endif // PROTOTYPES_H_INCLUDED
