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
extern void fn_82682D30(int, int, void *, int);
extern void fn_826944C8(void *);
extern void *fn_82694700(char *, int);
extern void fn_82696330(void *);

struct Obj;
typedef struct OVT { char pad[0x5c]; int (*f5c)(struct Obj *); } OVT;
typedef struct Obj { OVT *vt; } Obj;
typedef struct Rc { int a; int b; int count; } Rc;
typedef struct Var { unsigned char tag; Rc *rc; int pad[2]; } Var;

void fn_82683020(int param_1, int param_2, int param_3)
{
  int iVar1;
  Rc *rc;
  Var v;
  Obj *o = *(Obj **)(param_1 + 0x68);
  int n;
  iVar1 = o->vt->f5c(o);
  { char *q = (char *)*(int *)(iVar1 + 0x78); char *sub = q + 8; rc = (Rc *)fn_82694700(sub + 0x24c, param_3); }
  rc->count = rc->count + 1;
  v.tag = 5;
  v.rc = rc;
  rc->count = rc->count + 1;
  fn_82682D30(param_1, iVar1, &v, param_2);
  fn_82696330(&v);
  n = rc->count - 1;
  rc->count = n;
  if (n == 0) fn_826944C8(rc);
}
