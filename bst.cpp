/*-----------------------------------------------------------------------------
 *				HTBLA-Leonding / Class: <your class name here>
 *-----------------------------------------------------------------------------
 * Exercise Number: #exercise_number#
 * File:			bst.cpp
 * Author(s):		Peter Bauer
 * Due Date:		May 31, 2017
 *-----------------------------------------------------------------------------
 * Description:
 * <your description here>
 *-----------------------------------------------------------------------------
*/
#include "bst.h"
#include "general.h"
#include <stdlib.h>

struct Node{
  int value;
  struct Node* left;
  struct Node* right;
};

Bst new_bst(){
  return 0;
}

void delete_bst(Bst bst){
  if (bst != 0) {
    delete_bst(bst->left);
    delete_bst(bst->right);
    sfree(bst);
  }

}


int get_depth(Bst bst){
  if (bst != 0) {
    return 1;
  }
  return 0;
}


void add(Bst* bst, int value){
  Node* new_Node = (struct Node*)malloc(sizeof(struct Node));
  new_Node->value = value;
  new_Node->left = 0;
  new_Node->right = 0;

  if ((*bst) == 0) {
    (*bst) = new_Node;
  }else{
    if (value <= (*bst)->value) {
      (*bst)->left = new_Node;
    }
    if (value > (*bst)->value) {
      (*bst)->right = new_Node;
    }
  }
}


int root_value(Bst bst){
  if (bst == 0) {
    return 0;
  }
  return bst->value;
}


Bst left_subtree(Bst root){
  return root->left;
}


Bst right_subtree(Bst root){
  return root->right;
}


int traverse_pre_order(Bst bst, int *elements, int start){
  return 0;
}


int traverse_in_order(Bst bst, int *elements, int start){
  return 0;
}


int traverse_post_order(Bst bst, int *elements, int start){
  return 0;
}


bool are_equal(Bst bst1, Bst bst2){
  return false;
}


void most_left_longest_branch(Bst bst, Bst* branch){

}


int get_number_of_subtrees(Bst bst){
  return 0;
}
