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
extern void fn_82AB15D0(int, const char *, const char *, const char *, int);
extern unsigned int *fn_82B7BD28(unsigned int, int);
extern int fn_82BBC1A8(unsigned int, int, int, void *, int);
extern void fn_82BC0928(void *, int, int, int);
extern void fn_82BC0A30(void *, void *);
extern void fn_82BC2958(void *, int, void *);
extern void *fn_82BC3A98(void *, void *);
extern char lbl_820E348C[];

typedef struct Ctx_82BC1540 {
  char pad0[0x564];
  char in_vertex_shader;
  char pad565[0x47];
  unsigned int heap;
  char pad5b0[0x500];
  char pad_aB0;
} Ctx_82BC1540;

typedef struct Obj_82BC1540 {
  void *vtbl;
  char pad4;
  char f5;
  char pad6[6];
  int fc;
  int f10;
  char pad14[0x1c];
  int f30;
  int f34;
  int f38;
  int f3c;
} Obj_82BC1540;

Obj_82BC1540 *fn_82BC1540(Obj_82BC1540 *param_1, int param_2, int param_3, int param_4, int param_5)
{
  unsigned int *blk;
  void *obj;
  void *ctx = (void *)param_5;
  unsigned int heap;
  int *iface;

  fn_82BC0928(param_1, param_2, param_3, param_5);
  param_1->f30 = 0;
  param_1->vtbl = lbl_820E348C;
  param_1->f34 = 0;
  param_1->f38 = 0;
  param_1->f3c = 0;
  param_1->f10 = fn_82BBC1A8(*(unsigned int *)(param_5 + 0xab0) + 0xb8, param_3, ((int *)param_1)[3], param_1, param_4);
  param_1->f5 = 1;
  if (*(char *)(param_5 + 0x564) != 0) {
    fn_82AB15D0(0, "Assertion failed: %s (%s:%u)", "!context->in_vertex_shader", "e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\vreginfo.cpp", 0x1f1);
  }
  heap = *(unsigned int *)(param_5 + 0x5ac);
  blk = fn_82B7BD28(heap, 0x3c4);
  *blk = heap;
  obj = 0;
  if (blk + 1 != 0) {
    obj = fn_82BC3A98(blk + 1, ctx);
  }
  iface = *(int **)(*(int *)(param_5 + 0xab0) + 0xa4);
  (*(void (*)(int *, void *))(*(int *)((int)*iface + 0x28)))(iface, obj);
  fn_82BC2958(obj, 0, param_1);
  fn_82BC0A30(param_1, obj);
  return param_1;
}
