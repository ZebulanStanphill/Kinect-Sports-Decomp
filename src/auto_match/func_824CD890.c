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
extern int fn_8224F2B8();
extern int fn_82897600();
extern int fn_82897B18();
extern int fn_82898220();


static __forceinline void init(int o,int d,int s){int n=fn_82897B18(s);fn_82897600(o,d,n);*(unsigned *)(d+0x28)=*(unsigned *)(o+0xc);fn_82898220(d,o,s,*(unsigned *)(o+4));}
void fn_824CD890(int o){int s=*(int *)(o+0x10);init(o,o+0x48,s+0x34);init(o,o+0x9c,s+0x8c);{int d=o+0xf0;int src=s+0xe4;int n=20;do{init(o,d,src);--n;src+=0x58;d+=0x54;}while(n);}fn_8224F2B8(o+0x828,o,s+0x874);fn_8224F2B8(o+0x87c,o,s+0x8dc);fn_8224F2B8(o+0x780,o,s+0x7c4);fn_8224F2B8(o+0x7d4,o,s+0x81c);init(o,o+0x8d0,s+0x944);}