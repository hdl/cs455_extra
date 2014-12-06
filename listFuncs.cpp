/*  Name:
 *  loginid:
 *  CS 455 Fall 2014
 *
 *  See listFuncs.h for specification of each function.
 */

#include <iostream>
#include <stack>
#include <queue>
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
	Node * current_node=list; 
	Node * previous_node=NULL;
	Node * temp=NULL;
	while(current_node!=NULL){
		if(previous_node == NULL){
			previous_node=current_node;
	   		current_node=current_node->next;
			continue;
		}
		while(current_node->data%2==0 && previous_node->data%2==0){
			temp = current_node->next;
			delete current_node;
			//cout << "remove:" << current_node->data <<endl;
			current_node = temp;	
			previous_node->next = current_node;
			if(current_node == NULL)
				return;
		}

		previous_node=current_node;
	   	current_node=current_node->next;
	}

}



void mirror(ListType & list) {
	Node * current_node;
	Node * tail;
	Node * next;
	std::queue<int>q;
	int i=0;
	if(list == NULL)
		return;
	for(current_node = list; current_node!=NULL;current_node=current_node->next){
		q.push(current_node->data);
		tail=current_node;	
		i++;
	}

	next = new Node(q.front(), NULL);
	//cout << "front:" <<q.front()<<endl;
	q.pop();
	while(--i){
		next = new Node(q.front(), next);
		q.pop();
		//cout << "front:" <<q.front()<<endl;
	}
	tail->next = next;
}



void rotateLeft(ListType &list, int k) {
	Node * current_node;
	int len=0;	
	int i=0;	
	Node * old_tail;
	Node * head;
	for(current_node = list; current_node!=NULL;current_node=current_node->next){
		len++;
		old_tail = current_node;
	}
	//cout<<"length:"<<len<<endl;
	if(k<=0 || k>=len)
		return;

	old_tail->next = list;

	i=k;
	current_node = list;
	while(i--){
		current_node = current_node->next;
	}
	head = current_node;
	
	i=k;
	current_node = list;
	while(--i){
		current_node = current_node->next;
	}
	current_node->next=NULL;
	
	list=head;

}
