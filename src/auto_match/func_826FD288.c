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
extern int fn_8267C498();
extern int fn_8269CEE0();


void fn_826FD288(int self) {
 int *pair[2];
 if ((*(ushort *)(self+0xb00)&1)!=0) {
  fn_8269CEE0(pair,self+0xad8);
  { int *obj=pair[0];
   if(obj) {
    obj[1]++;
    fn_8267C498(obj);
    if(obj[8] && !(*(unsigned char (**)(int *,int,int))(*obj+0xd0))(obj,0,2)) {
     fn_8267C498(obj); return;
    }
    fn_8267C498(obj);
   }
  }
 }
 *(uint *)(self+0xb00)&=0xfffeffff;
}
