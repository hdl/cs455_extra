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
	int index;
	int i=0;
	int flag=0;
	for(current_node = list; current_node!=NULL;current_node=current_node->next)
	{
		if (current_node->data == val){
			index = i;
			flag = 1; // indicate that the val appers in the list
		}
		i++;
	}
	if(flag == 0)
		return -1;
	else
		return index;  // stub code to get it to compile
}



void removeAdjacentEvens(ListType &list) {

}



void mirror(ListType & list) {

}



void rotateLeft(ListType &list, int k) {

}
