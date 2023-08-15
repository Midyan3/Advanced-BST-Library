# Binary Search Tree (BST) Template Class in C++

The Binary Search Tree (BST) is a popular data structure that organizes your data (e.g., numbers, employee records) in a hierarchical manner. In this particular project, we provide a versatile BST template class, allowing you to work with any type of data that supports basic comparison operations.

## Features

- **Custom Data Types Support**: This BST supports not only primitive types like integers but also custom data types like Employee.
- **Easy Navigation**: Perform various standard operations like finding the height, checking if the tree is balanced, and much more.
- **Traversal Options**: Traverse the tree using different orders, including preorder.
- **Modification**: Add, remove, or search for entries with ease.

## How to Use

### Initialization

You can create a BST in multiple ways:
- Default constructor: Creates an empty tree.
- Parameterized constructor: Initializes the tree with a root item.
- Copy constructor: Makes a copy of another tree.
- Constructor with a vector: Builds the tree from a given vector of items.

### Basic Operations

- `add`: Add an item to the tree.
- `remove`: Remove a specific item from the tree.
- `contains`: Check if a specific item is present in the tree.
- `getHeight`: Get the height of the tree.
- `getNumberOfNodes`: Get the number of nodes in the tree.
- `isEmpty`: Check if the tree is empty.
- `displayPreorder`: Show the preorder traversal of the tree.

### Special Features

- `isBalanced`: Check if the tree is balanced.
- `isComplete`: Check if the tree is complete.
- `isFull`: Check if the tree is full.
- `getDirectSupervisor`: Get the direct supervisor for employees, assuming the tree contains Employee objects.

## Usage Example

```cpp
#include "BinarySearchTree.hpp"
#include "Employee.hpp"

int main() {
    BinarySearchTree<int> myTree;
    myTree.add(42);
    myTree.add(17);
    myTree.add(65);

    if (myTree.contains(42)) {
        std::cout << "Found 42!" << std::endl;
    }

    myTree.displayPreorder();
}

Requirements
C++ compiler with support for C++11 or later.
Employee class, if you wish to utilize the getDirectSupervisor method.
Contributors
Feel free to contribute to this project. Open an issue or pull request.

License
This project is licensed under the MIT License - see the LICENSE.md file for details.

