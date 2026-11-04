typedef unsigned char undefined1;
typedef unsigned char byte;
typedef unsigned char undefined;
typedef unsigned char bool;
#define true 1
#define false 0
typedef unsigned short undefined2;
typedef unsigned short ushort;
typedef unsigned short word;
typedef unsigned int undefined4;
typedef unsigned int uint;
typedef unsigned int dword;
typedef unsigned int ulong;
typedef unsigned __int64 undefined8;
typedef unsigned __int64 ulonglong;
typedef unsigned __int64 qword;
typedef __int64 longlong;
typedef int (*code)();
typedef unsigned char U8;
typedef unsigned short U16;
typedef unsigned int U32;
typedef unsigned __int64 U64;
typedef signed char S8;
typedef signed short S16;
typedef signed int S32;
typedef __int64 S64;
typedef struct { U64 lo, hi; } V16;
extern int fn_82AA0840();
extern int fn_82AB71F0();


void fn_82B69658(unsigned int self,unsigned int key) {
 unsigned a,b;
 a=fn_82AB71F0(self,82,key); b=fn_82AB71F0(self,29,key);
 if(a==6 || a==4 || a==5 || a==7) {
  if(b!=a) fn_82AA0840(self,29,key,a);
 } else if(b!=0) fn_82AA0840(self,29,key,0);
 a=fn_82AB71F0(self,83,key); b=fn_82AB71F0(self,30,key);
 if(a==6 || a==4 || a==5 || a==7) {
  if(b!=a) fn_82AA0840(self,30,key,a);
 } else if(b!=0) fn_82AA0840(self,30,key,0);
 a=fn_82AB71F0(self,84,key); b=fn_82AB71F0(self,31,key);
 if(a==6 || a==4 || a==5 || a==7) {
  if(b!=a) fn_82AA0840(self,31,key,a);
 } else if(b!=0) fn_82AA0840(self,31,key,0);
}
