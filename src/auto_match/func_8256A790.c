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
extern int fn_8251FA58(void *);
extern int fn_82549610(void *, unsigned);
extern unsigned fn_82569B10();
extern int fn_8256BA58(void *);
extern int *fn_8256BD38(void *, unsigned, void *);
extern int fn_8259C738(unsigned);
extern int fn_82A1BB18();

typedef struct Node_8256A790 { int f0, rc; void *f8; int fc; } Node_8256A790;

void fn_8256A790(unsigned *param_1,unsigned *param_2)
{
  unsigned uVar1;
  int *piVar3;
  Node_8256A790 *p, *q;
  struct { unsigned key; unsigned cnt; unsigned it; } l;
  
  uVar1 = fn_82569B10();
  fn_82549610(&l.cnt,uVar1);
  if (param_1 != 0) {
    l.key = *param_1;
    piVar3 = fn_8256BD38(&l.it, fn_82569B10() + 0x10, &l.key);
    q = (Node_8256A790 *)*piVar3;
    p = (q != *(Node_8256A790 **)(fn_82569B10() + 0x14)) ? (Node_8256A790 *)q->fc : 0;
    if (--p->rc == 0) {
      fn_8256BA58(p);
    }
    else if (p->f8 != 0) {
      fn_8251FA58(p->f8);
    }
  }
  *param_2 = 0;
  fn_82A1BB18();
  fn_8259C738(l.cnt);
}
