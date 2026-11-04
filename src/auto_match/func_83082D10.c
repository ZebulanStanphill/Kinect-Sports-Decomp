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
typedef struct { int a; int b; int c; } Ctx;
typedef struct { char pad[0x10]; void *heap; } Glob;
extern void fn_82BA02A8(Ctx *);
extern Glob *fn_82CE5410(void);
extern void fn_82CEA4B8(Ctx *, void *);
extern void fn_82CEAB00(Ctx *, void *, int);
extern void fn_83082980(void *, Ctx *, int, void *);
extern void fn_83082A80(void *, Ctx *);
extern void fn_83082BF0(void *, Ctx *);
extern int fn_83082890();
extern int fn_830828C0();

void fn_83082D10(void **list, int mode)
{
  int i = 0;
  Ctx c;
  void *o;
  Glob *g;
  c.a = 0;
  c.b = 0;
  c.c = -1;
  g = fn_82CE5410();
  fn_82CEAB00(&c, g->heap, 0);
  while (list[i] != 0) {
    o = list[i];
    if (mode == 1) {
      fn_83082A80(o, &c);
      fn_83082BF0(o, &c);
      goto L2;
    } else if (mode < 4) {
L2:
      fn_83082980(o, &c, 2, (void *)fn_83082890);
    }
    if (mode < 5) {
      fn_83082980(o, &c, 8, (void *)fn_830828C0);
    }
    i++;
  }
  g = fn_82CE5410();
  fn_82CEA4B8(&c, g->heap);
  fn_82BA02A8(&c);
}
