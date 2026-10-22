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
extern int fn_8265C9E0();
extern unsigned int lbl_821AD588;
extern unsigned int lbl_821B0440;


static void inner(unsigned int *p) { p[1] = 0; p[0] = (unsigned int)&lbl_821B0440; }
static unsigned int *ctor(unsigned int *p) {
 p[1]=1; p[0]=(unsigned int)&lbl_821AD588; p[2]=1;
 if (p+3) inner(p+3);
 return p;
}
unsigned int *fn_823297C8(unsigned int *out) {
 unsigned int *p=(unsigned int*)fn_8265C9E0(0x14);
 p=p?ctor(p):0;
 out[1]=(unsigned int)p;out[0]=(unsigned int)(p+3);return out;
}
