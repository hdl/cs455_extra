/*  Name:
 *  loginid:
 *  CS 455 Fall 2014
 *
 *  See listFuncs.h for specification of each function.
 */

#include <iostream>

#include <cassert>

#include "listFuncs.h"

using namespace std;


int lastIndexOf(ListType list, int val) {
	Node * current_node;
	for(current_node = list; current_node!=NULL;current_node=current_node->node)
	{
		cout<<"here:"<<current_node->data<<endl;	
	}
	return 0;  // stub code to get it to compile
}



void removeAdjacentEvens(ListType &list) {

}



void mirror(ListType & list) {

}



void rotateLeft(ListType &list, int k) {

}
