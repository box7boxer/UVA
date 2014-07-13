#include <iostream>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
using namespace std;

char txt[1000][5000];
char ch[1000][5000];

char List[5000][52];
int iList = 0;

//int FindiList(char* pch)
//{
//    for(int i =1 ;i <= iList;i++)
//    {
//        if(!strcmp(iList[i], pch))
//            return i;
//    }
//    return 0;
//}

void showList()
{
    int i;
    for(i =1 ;i<iList;i++)
    {
        cout << List[i] << "-->";
    }
        cout << List[i] << endl;
}

void SetaheadList(int index)
{

    for(int i=1;i <index ;i++)
    {

    }
}

int main()
{
    int line = 0;
    while(1)
    {
        cin.getline(txt[line],5000);
        if(txt[line][0] == '0' && strlen(txt[0])==1)
            break;
        strcpy(ch[line],txt[line]);
        char *pch;

        pch = strtok(ch[line]," ,.-'");
        while(pch)
        {

            if(!isdigit(pch[0]))
            {
                strcpy(List[++iList],pch);
                showList();

            }else
            {
                cout << List[iList - atoi(pch) + 1] << " " << endl;
                SetaheadList(atoi(pch));
            }

            pch = strtok(NULL," ,.-'");
        }
        line++;
    }
    return 0;
}
//1 2 3 4 5
//a b c d e
//5 4 3 2 1
//
//want 2
//5 -2 + 1 = 4
