#include<iostream>
#include"LinkedBST.h"
#include"binarytree.h"
using namespace std;


int main(){
	LinkedBST tree1;
	int number;
	char character;
	
	top:
	cout<<"Enter any number"<<endl;
	cin>>number;
	tree1.add(&tree1.root,number);
	cout<<"Do you want to enter again(Y/N)??"<<endl;
	cin>>character;
	if((character=='y') || (character=='Y')) goto top;
	
	
	cout<<"preorderTraversal of the tree is"<<endl;
	tree1.preorderTraversal(&tree1.root);
	cout<<endl;
	
	search:
	cout<<"Enter any number you wanna search"<<endl;
	cin>>number;
	tree1.search(&tree1.root,number);
	cout<<"Do you want to search again(Y/N)??"<<endl;
	cin>>character;
	if((character=='y') || (character=='Y')) goto search;
	

}