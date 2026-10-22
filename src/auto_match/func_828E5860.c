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
extern void *fn_8265C9E0(unsigned);
extern void fn_828BDDA0(void *);
extern unsigned lbl_82027360, lbl_82027368;
typedef struct { void *v; char pad[76]; void *v2; char pad2[44]; unsigned a,b,c,d; } Obj;
typedef struct { unsigned a,b,c,d; } Tail;
static void clear(Tail *p) { p->a=0;p->b=0;p->c=0;p->d=0; }
Obj *fn_828E5860(void) {
 Obj *p=fn_8265C9E0(0x90);
 if(p) { fn_828BDDA0(p); p->v=&lbl_82027368; p->v2=&lbl_82027360; clear((Tail *)&p->a); return p; }
 return 0;
}
