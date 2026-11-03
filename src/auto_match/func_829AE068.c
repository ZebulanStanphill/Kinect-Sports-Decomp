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
extern void fn_829ADE20(void);
extern void fn_829ADE70(void);
extern void fn_829ADEA0(void);
extern void fn_829ADF30(void);
extern void fn_829AE050(void);
extern char lbl_82052100[];

typedef struct S { void *f0, *f4, *f8, *fc, *f10; int f14; char pad[0x68 - 0x18]; int f68, f6c; void *f70; int f74, f78, f7c, f80; } S;

void fn_829AE068(S *p)
{
  p->f0 = (void *)fn_829ADE20;
  p->f4 = (void *)fn_829ADEA0;
  p->f8 = (void *)fn_829ADE70;
  p->fc = (void *)fn_829ADF30;
  p->f10 = (void *)fn_829AE050;
  p->f68 = 0;
  p->f70 = lbl_82052100;
  p->f6c = 0;
  p->f14 = 0;
  p->f74 = 0x7b;
  p->f78 = 0;
  p->f7c = 0;
  p->f80 = 0;
}
