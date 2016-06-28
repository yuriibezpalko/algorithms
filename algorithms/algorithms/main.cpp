//
//  main.cpp
//  algorithms
//
//  Created by alifar on 6/24/16.
//  Copyright © 2016 alifar. All rights reserved.
//

#include <iostream>

/* In order to run one of the tests including of appropriate .hpp file is required 
   ex. : #include "factorial_fibonacci.hpp" then comment out section marked TEST: Fibonacci and Factorial DP */


int main(int argc, const char * argv[]) {
    
// TEST: ways to calculate amount with give list of debominations: amountWithCoins.hpp
//    int *denominations = new int[3];
//    denominations[0] = 1;
//    denominations[1] = 2;
//    denominations[2] = 3;
//    std::cout <<waysToGetAmount(6, denominations) << std::endl;
    
// TEST: Jump Stairs tasks DP: hopSomeStairs.hpp
//    std::cout << walkThoughStairs(10) << std::endl;
    
// TEST: Fibonacci and Factorial DP: factorial_fibonacci.hpp
//    std::cout << fibonacci(45) << std::endl;
//    std::cout << factorial(15) << std::endl;
    
// TEST: Binomial coefficients calculation: binomialCoefficient.hpp
//    std::cout << bimonialCoefficient(5,4) << std::endl;
    
//    BinaryTree *tree = new BinaryTree(4);
//    tree->root->left = new Tnode(3);
//    tree->root->right = new Tnode(5);
//    tree->inOrderTraversal();
    
// TEST: Stack using Queue: stackFromQueue.hpp
//    {
//        using namespace stackFromQueue;
//        Stack *stack = new Stack();
//        
//        stack->push(1);
//        stack->push(2);
//        stack->push(3);
//        
//        std::cout << stack->pop() << std::endl;
//        std::cout << stack->pop() << std::endl;
//        std::cout << stack->pop() << std::endl;
//    }
    
// TEST: Queue using stack: QueueFromStack.hpp
//    Queue *q = new Queue();
//    q->enqueue2(1);
//    q->enqueue2(3);
//    q->enqueue2(5);
//    q->enqueue2(9);
//    std::cout << q->dequeue2() << std::endl;
//    std::cout << q->dequeue2() << std::endl;
//    q->enqueue2(15);
//    std::cout << q->dequeue2() << std::endl;
//    std::cout << q->dequeue2() << std::endl;
    
// TEST: stack using class: QueueFromStack.hpp
//    Stack *stack = new Stack();
//    stack->push(3);
//    stack->push(5);
//    stack->push(6);
//    
//    std::cout << stack->pop() << std::endl;
//    std::cout << stack->pop() << std::endl;
//    
//    stack->push(9);
//    
//    std::cout << stack->pop() << std::endl;
//    std::cout << stack->pop() << std::endl;
//    
//    std::cout << stack->pop() << std::endl;
//    std::cout << stack->pop() << std::endl;
    
// TEST: stack using linked list: stackUsingLinkedList.hpp
//    stackNode *head = newNode(1);
//    push(&head, 2);
//    push(&head, 3);
//    push(&head, 4);
//    std::cout << pop(&head) << std::endl;
//    std::cout << peek(head) << std::endl;
//    std::cout << " ================== " << std::endl;

// TEST: queue using linked list: queueUsingLinkedList.hpp
//    Queue *q = createQueue();
//    enqueue(q, 2);
//    enqueue(q, 4);
//    enqueue(q, 5);
//    std::cout << dequeue(q)->data << std::endl;
//    std::cout << dequeue(q)->data << std::endl;
    return 0;
}
