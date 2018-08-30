#include "header.h"
#include "macro.h"
extern ofstream myfile;
extern string home;
extern stack<string> backstack,frontstack;

void gotoDirectory(string dir){
    string fullpath=home;
    if(dir.compare("/")!=0) fullpath.append("/"+dir);
    myfile<<endl<<"fp: "<<fullpath<<endl;
    backstack.push(fullpath);
    listContent(fullpath);
    handleCommands();
}
