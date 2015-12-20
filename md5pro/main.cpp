#include <iostream>
#include "md5.h"
#include<string>
#include <iomanip>
#include <locale>
#include <sstream>
#include <stdlib.h>


using std::cout; using std::endl;using std::string;using std::cin;
int main(int argc, char *argv[])
{int i;
char buffer [33];
string code,data;
string data2;
int n;
data="01b98032d36d1359370887a276f305c2";
data2="95d6727d1ef86deb129d3df6c22b8154";
//66666666
//final digit 71840000
for(i=90000000;i<99999999;i++)
{ int number = 123;
code=itoa(i,buffer,500);
//string text =to_string(number);
    cout << "md5 of  "<< i<< "="<<md5(md5(code)) << endl;
    if(md5(md5(code))==data2)
    {cout<< i<<"find......................";
    return 0;

    }
	}

	  return 0;
}
