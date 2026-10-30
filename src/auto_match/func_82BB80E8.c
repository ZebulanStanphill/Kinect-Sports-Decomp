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
typedef struct Node_82BB80E8 { int f0, f4; struct Node_82BB80E8 *next; int fc, f10; int key; } Node_82BB80E8;
struct VT_82BB80E8;
typedef struct If_82BB80E8 { struct VT_82BB80E8 *vt; } If_82BB80E8;
typedef struct VT_82BB80E8 { void *s0, *s4, *s8; void (*fc)(If_82BB80E8 *); } VT_82BB80E8;
typedef struct Sz_82BB80E8 { int f0; int f4; } Sz_82BB80E8;
typedef struct Obj_82BB80E8 {
  int f0, f4;
  If_82BB80E8 *f8;
  char pad0[0x18 - 0xc];
  Sz_82BB80E8 *f18;
  int f1c;
  char pad1[0x2c - 0x20];
  Node_82BB80E8 *f2c;
  char pad2[0x44 - 0x30];
  Node_82BB80E8 *f44;
  char pad3[0x5c - 0x48];
  Node_82BB80E8 *f5c;
  char pad4[0x6c - 0x60];
  int f6c;
} Obj_82BB80E8;

extern int fn_82AB15D0(int, const char *, const char *, const char *, int);
extern int fn_82BB5A58(void *, void *);
extern unsigned char fn_82BB5AC0(void *, void *);
extern int fn_82BBFDD0(void *);

void fn_82BB80E8(Obj_82BB80E8 *o)
{
  Node_82BB80E8 *p;
  Node_82BB80E8 *nx;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar1;

  o->f8->vt->fc(o->f8);
  iVar3 = o->f1c + 1;
  o->f1c = iVar3;
  if (iVar3 > o->f18->f4 << 1) {
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "cur_cycle <= (int)(2 * local_nodes->Size())",
                "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\opt\\sched.cpp", 0x6cb);
  }
  if (o->f1c > o->f18->f4 << 1) {
    *(unsigned char *)0 = 0xd;
  }
  iVar4 = 0;
  iVar5 = *(int *)((char *)o + 0x2c);
  iVar1 = *(int *)(iVar5 + 8);
  while (iVar1 != 0) {
    if (iVar4 < *(int *)(iVar5 + 0x14)) {
      iVar4 = *(int *)(iVar5 + 0x14);
    }
    iVar5 = iVar1;
    iVar1 = *(int *)(iVar1 + 8);
  }
  p = o->f5c;
  nx = p->next;
  while (nx != 0) {
    if (iVar4 < p->key) {
      iVar4 = p->key;
    }
    fn_82BBFDD0(p);
    fn_82BB5A58(o, p);
    p = nx;
    nx = nx->next;
  }
  o->f6c = iVar4;
  p = o->f44;
  nx = p->next;
  while (nx != 0) {
    if (iVar4 < p->key) {
      iVar4 = p->key;
    }
    if (fn_82BB5AC0(o, p)) {
      fn_82BBFDD0(p);
      fn_82BB5A58(o, p);
    }
    p = nx;
    nx = nx->next;
  }
  o->f6c = iVar4;
}
