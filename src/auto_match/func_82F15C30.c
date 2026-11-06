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
extern int fn_82F02410();
extern int fn_82F02700();


void fn_82F15C30(int p,int a,int b) {unsigned val,n;
 if(a!=0){if(b==0)return;n=1;val=1;}else{if(b==0)return;
 fn_82F02410(*(int*)(p+0x1ebc),0,1);fn_82F02700(*(int*)(p+0x1ebc));
 fn_82F02410(*(int*)(p+0x1ebc),0xab,0x18);
 fn_82F02410(*(int*)(p+0x1ebc),0x1b,0x18);
 fn_82F02410(*(int*)(p+0x1ebc),0x1b,0x18);
 fn_82F02410(*(int*)(p+0x1ebc),0x1b,0x18);n=0x10;val=0x1b;}
 fn_82F02410(*(int*)(p+0x1ebc),val,n);
}