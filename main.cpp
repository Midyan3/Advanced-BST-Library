#include "BinarySearchTree.hpp"
#include "BinaryNode.hpp"
#include "Employee.hpp"
#include <iostream>

int main(){
    BinarySearchTree<Employee> tree;
    Employee e1("A", 1);
    Employee e2("B", 2);
    Employee e3("C", 3);
    Employee e4("D", 4);
    tree.add(e1);
    tree.add(e2);
    tree.add(e3);
    tree.add(e4);
    tree.getDirectSupervisor(e1, e2);
    // if(tree.isBalanced()){
    //     std::cout << "Tree is balanced" << std::endl;
    // }
    // else{
    //     std::cout << "Tree is not balanced" << std::endl;
    // }
    // if(tree.isComplete()){
    //     std::cout << "Tree is complete" << std::endl;
    // }
    // else{
    //     std::cout << "Tree is not complete" << std::endl;
    // }
    // if(tree.isFull()){
    //     std::cout << "Tree is full" << std::endl;
    // }
    // else{
    //     std::cout << "Tree is not full" << std::endl;
    // }
    

}