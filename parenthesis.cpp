#include <iostream>
#include <map>
#include <stack> 
using namespace std;

bool isValid(string s) {
        stack<char>resultstack; 
        map<char,char>symb;
        symb[')']='(';
        symb[']']='[';
        symb['}']='{';

        for (char ch: s){
            if (symb.count(ch)){
                if (resultstack.empty() || symb[ch] != resultstack.top()){
                    return false;
                }
                resultstack.pop(); //removes if complete 
            }
            else{
            resultstack.push(ch);
        }

        } 
        return resultstack.empty(); 
    }