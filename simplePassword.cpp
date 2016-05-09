#include <iostream>
#include <string>
using namespace std;

void simplePassword(string &input)
{
    int len = input.length();
    
    int i;
    for (i = 0; i < len;i++)
    {
        //处理小写字母
        if (input[i] >= 'a' && input[i] <= 'z')
        {
            switch (input[i])
            {
           //abc--2, def--3, ghi--4, jkl--5, mno--6, pqrs--7, tuv--8 wxyz--9
            case 'a':
            case 'b':
            case 'c':
                input[i] = '2';
                break;
            case 'd':
            case 'e':
            case 'f':
                input[i] = '3';
                break;
            case 'g':
            case 'h':
            case 'i':
                input[i] = '4';
                break;
            case 'j':
            case 'k':
            case 'l':
                input[i] = '5';
                break;
            case 'm':
            case 'n':
            case 'o':
                input[i] = '6';
                break;
            case 'p':
            case 'q':
            case 'r':
            case 's':
                input[i] = '7';
                break;
            case 't':
            case 'u':
            case 'v':
                input[i] = '8';
                break;
            default:
                input[i] = '9';
                break;
            }
        }
        //处理大写字母
        else if (input[i] >= 'A' && input[i] <= 'Z')
        {
            input[i] = (char)(input[i] + 33);
            if (input[i] > 'z')
            {
                input[i] = 'a';
            }
        }
        //处理数字及其他字符
        else
            //input[i] = input[i];
            ;
    }
   
}
int main()
{
    string input;
    
    while (cin>>input)
    {
        simplePassword(input);
        cout << input << endl;
    }
    system("pause");
    return 0;
}