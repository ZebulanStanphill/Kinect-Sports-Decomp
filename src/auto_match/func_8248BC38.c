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
extern int fn_82231540();
extern int fn_8248D360();
extern int fn_8265CA20();


typedef struct Vec { unsigned int data,count,end; } Vec;
static void cleanup1(Vec *p) {
 if(p->data) {fn_82231540(p->data,p->count);fn_8265CA20(p->data);}
 p->data=0;p->count=0;p->end=0;
}
static void cleanup2(Vec *p) {
 if(p->data) {fn_8248D360(p->data,p->count);fn_8265CA20(p->data);}
 p->data=0;p->count=0;p->end=0;
}
int fn_8248BC38(int self,unsigned int flags) {
 cleanup1((Vec*)(self+0x4c));
 cleanup2((Vec*)(self+8));
 if(flags&1) fn_8265CA20(self);
 return self;
}
