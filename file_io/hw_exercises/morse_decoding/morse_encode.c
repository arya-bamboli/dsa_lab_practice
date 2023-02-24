#include <stdlib.h>
#include <string.h>

typedef keyVal keyVal;
struct keyVal{
    char ch;
    char st[10];
};

keyVal kv(char ch, char st[10]){
    keyVal k;
    k->ch=ch;
    k->st=st;
    return k;
};
int main(){
    struct keyVal encodings[36];
    encodings[0]=kv('A',".-");
    encodings[1]=kv('B',"-...");
    encodings[2]=kv('C',"-.-.");
    encodings[3]=kv('D',"-..");
    encodings[4]=kv('E',".");
    encodings[5]=kv('F',"..-.");
    encodings[6]=kv('G',"-..");
    encodings[7]=kv('H',"....");
    encodings[8]=kv('I',"..");
    encodings[9]=kv('J',".---");
    encodings[10]=kv('K',"-.-");
    encodings[11]=kv('L',".-..");
    encodings[12]=kv('M',"--");
    encodings[13]=kv('N',"-.");
    encodings[14]=kv('P',".--.");
    encodings[15]=kv('Q',"--.-");
    encodings[16]=kv('R',".-.");
    encodings[17]=kv('S',"...");
    encodings[18]=kv('T',"-");
    encodings[19]=kv('U',"..-");
    encodings[20]=kv('V',"...-");
    encodings[21]=kv('W',".--");
    encodings[22]=kv('X',"-..-");
    encodings[23]=kv('Y',"-.--");
    encodings[24]=kv('Z',"--..");
    encodings[25]=kv('1',".----");
    encodings[26]=kv('2',"..---");
    encodings[27]=kv('3',"...--");
    encodings[28]=kv('4',"....-");
    encodings[29]=kv('5',".....");
    encodings[30]=kv('6',"-....");
    encodings[31]=kv('7',"--...");
    encodings[32]=kv('8',"---..");
    encodings[33]=kv('9',"----.");
    encodings[34]=kv('0',"-----");
    encodings[35]=kv('O',"---");
}