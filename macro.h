using namespace std;

#define esc 27

#define cls printf("%c[2J",esc)
#define cls1 printf("%c[3J%c[1;1H",esc,esc)
#define pos(row,col) printf("%c[%d;%dH",esc,row,col)

#define up printf("%c[%dA",esc,1);
#define down printf("%c[%dB",esc,1);
#define clearline printf("%c[%dK",esc,2);

#define scroll(start,end) printf("%c[%d;%dr",esc,start,end);
#define scrollup printf("%c[%dT",esc,1);
#define scrolldown printf("%c[%dS",esc,1);
//"\e[1;47r"

int listContent(string);
void displayContent(const char *);
void handleCommands();
string getPath(string);
string getpwd();
void commands();
void runCommand(string);
void changeName(string, string);
void createDirectory(string, string);
string createPath(string , string);
void createFile(string, string);
void gotoDirectory(string);
void deleteFile(string, string);
void deleteDirectory(string, string);
