#include <iostream>

using namespace std;

struct Box{
    bool Color;
    int Top;
    bool Right;
} ;

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
            cout << ((CompareTo.Top == Head.Top) ? "True" : "False" );
        }
        if( Input.Color)
        {
            cout << ((CompareTo.Color == Head.Color) ? "True" : "False" );
        }
        if( Input.Right)
        {
            cout << ((CompareTo.Right == Head.Right) ? "True" : "False") ;
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
        if( Input.Right)
        {
            Head.Right = (!Head.Right);
        }
        
    }
}

int main()
{
    Box Head, CompareTo, Input;
    bool Condition, IsNext = false;
     
    CaptureValues(Head);
    CaptureValues(CompareTo); 
    CaptureValues(Input);

    while(!IsNext){
        cin >> Condition;
        Process(Input, Head, Condition, CompareTo);
        
        //std::cout <<  Head.Top << Head.Color << Head.Right; << std::endl;
        cout << ((Head.Top) ? "Top:" : "Bottom: " );
        cout << ((Head.Color) ? "White:" : "Black: ") ;
        cout << ((Head.Right) ? "Right:" : "Left: ") << endl;
        CaptureValues(Input);
    }
     
    return 0;
}
