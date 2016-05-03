#include <iostream>
#include "Queue.h"
#include <sstream>

using namespace std;

int main()
{
    string start;
    cout<<"Welcome! This program takes user input to preform variations on queue operands."<<endl;
    int qsize;
    cout<<"Set queue size: ";
    cin>>qsize;//user input to set the size of the queue
    Queue q(qsize);
    int n=0;
    while (n==0)
    {
        cout<<"======Main Menu====="<<endl;
        cout<<"1. Enqueue word"<<endl;
        cout<<"2. Dequeue word"<<endl;
        cout<<"3. Print queue"<<endl;
        cout<<"4. Enqueue sentence"<<endl;
        cout<<"5. Alphabetize queue"<<endl;
        cout<<"6. Reverse alphabetical order"<<endl;
        cout<<"7. Dequeue word and shift gaps"<<endl;
        cout<<"8: Assign head"<<endl;
        cout<<"9. Empty queue"<<endl;
        cout<<"10. Quit"<<endl;
        cin>>n;//get user input for main menu
        if (n==1)
        {
            n=0;
            string en;
            cout<<"word: ";
            cin>>en;//user input for single word
            q.enqueue(en);//add single word to queue
        }
        else if (n==2)
        {
            q.dequeue();//remove first element of queue
            n=0;
        }
        else if (n==3)
        {
            q.printQueue();//print contents of queue
            n=0;
        }
        else if (n==4)
        {

            string en;
            cout<<"sentence: ";
            getline(cin, en);
            getline(cin, en);
            {
                stringstream ss(en);
                while (ss>>en)//for each word entered
                {
                    q.enqueue(en);//add one word at a time
                }
            }
            n=0;
        }
        else if (n==5)
        {
            n=0;
            q.alphabetize();//rearrange queue in alphabetical order
        }
        else if (n==6)
        {
            n=0;
            q.reverseAlphabetize();//rearrange queue in reverse alphabetical order
        }
        else if (n==7)
        {
            n=0;
            string word;
            cout<<"Enter a word to dequeue: ";
            cin>>word;
            q.dequeueword(word);
        }
        else if (n==8)
        {
            n=0;
            string word;
            bool save;
            cout<<"Enter new head of queue: ";
            cin>>word;
            q.assignHead(word);
        }
        else if (n==9)
        {
            n=0;
            q.emptyit();
        }
        else
        {
            cout<<"Goodbye!"<<endl;//quit
            return 0;
        }
    }
}
