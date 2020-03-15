/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

struct {
    bool Color;
    int Top;
    bool Right;
} Box;

void CaptureValues(Box& param)
{
    cin >> param.Top;
    cin >> param.Color;
    cin >> param.Right;
}

void Process(Box& Input, Box& Head, bool Condition, Box& CompareTo)
{
    if( Condition) // 1 for Compare
    {
        if ( Input.Top)
        {
            cout << (CompareTo.Top == Head.Top) ? "True" : "False" ;
        }
        if( Input.Color)
        {
            cout << (CompareTo.Color == Head.Color) ? "True" : "False" ;
        }
        if( Input.Right)
        {
            cout << (CompareTo.Right == Head.Right) ? "True" : "False" ;
        }
        cout << endl;
    }
    else    // 0 for altering the Head Box
    {  
        if ( Input.Top)
        {
           Head.Top = (!Head.Top);
        }
        if( Input.Color)
        {
            Head.Color = (!Head.Color);
        }
        if( Input.Bottom)
        {
            Head.Right = (!Head.Right);
        }
        
    }
}

int main()
{
    Box Head, CompareTo, Input;
    bool Condition;
     
    CaptureValues(Head);
    CaptureValues(CompareTo); 
    CaptureValues(Input);

    While(Input.Top != 99){
        cin >> Condition;
        Process(Input, Head, Condition);
        
        std::cout <<  Head.Top << Head.Color << Head.Right; << std::endl;
        cout << (Head.Top) ? "Top:" : "Bottom: " ;
        cout << (Head.Color) ? "White:" : "Black: " ;
        cout << (Head.Right) ? "Right:" : "Left: " << endl;
        CaptureValues(Input);
    }
     
    return 0;
}
