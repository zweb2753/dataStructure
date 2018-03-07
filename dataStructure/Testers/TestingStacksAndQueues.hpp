//
//  TestingStacksAndQueues.hpp
//  dataStructure
//
//  Created by Weber, Zane on 2/28/18.
//  Copyright © 2018 CTEC. All rights reserved.
//

#ifndef TestingStacksAndQueues_hpp
#define TestingStacksAndQueues_hpp

#include <stdio.h>
#include "iostream"


template <class Type>
class TestingStacksAndQueues
{
public:
    
    
    
private:
    
    
}

Stack<int> numberStack;
LinkedList<int> numberList;
Timer stackTimer, listTimer;

for (int index = 0; index < 10; index++)
{
    numberStack.add(index);
    numberList.add(index);
}
    
cout << "Get the third from the last item from the structure" << endl;

int index = 0;
int value = -99;
stackTimer.startTimer();

while (index < 7)
{
    cout << numberStack.pop() << endl;
    
    index++;
}

stackTimer.stopTimer();
index = 0;
listTimer.startTimer();
value = numberList.getFromIndex(7);
listTimer.stopTimer();

cout << "the time it took to work with stack"<< endl;
stackTimer.displayInformation();
cout << "the time it took to work with list" << endl;
listTimer.displayInformation();

cout << "what is left in the stack" << endl;
LinkedList<int> * listVersion = &numberStack;
int stackSize = listVersion->getSize();
cout << "Stack size is: " << stackSize << endl;
for (int index = 0; index < listSize; index++)
{
    cout << numberList.getFromIndex(index) << "\t";
}

void TestStacksAndQueues:: stackVersusQueue()
{
    vector<CrimeData> crimeStack;
    Queue<CrimeData> CrimeQueue;
    
    
    for (int index = 0; index < 10; index++)
    {
        queue.enqueue(index);
        stack.push(index);
    }
    
    for (int index = 0; index < 10; index++)
    {
        cout << index << endl;
        cout << "Queue result: " << queue.dequeue() << endl;
        cout << "Stack result: " << stack.pop() << endl;
    }
    
    for (int index = 0; index < 10; index++)
    {
        queue/enqueue(index);
        stack.push(index);
    }
    
}





#endif /* TestingStacksAndQueues_hpp */
