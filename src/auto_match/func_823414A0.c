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
extern int fn_82230110();
extern int fn_82230300();
extern int fn_8234C258();
extern int fn_8234C320();
extern char lbl_821AC494[];

typedef struct { char pad[0x18]; int f18; char pad2[0x10]; } Sub_823414A0;
typedef struct { char pad[0x268]; Sub_823414A0 a; Sub_823414A0 b; } Own_823414A0;

void fn_823414A0(int param_1)
{
  Own_823414A0 *o;
  int iVar1;
  undefined1 auStack_30 [32];

  Sub_823414A0 *s;
  o = (Own_823414A0 *)*(int *)(**(int **)(param_1 + 0xc) + 0x118);
  s = &o->a;
  if (s->f18 != 0) {
    fn_8234C320(0, s);
  }
  o = (Own_823414A0 *)*(int *)(**(int **)(param_1 + 0xc) + 0x118);
  s = &o->b;
  if (s->f18 != 0) {
    fn_8234C320(0, s);
  }
  fn_82230110(auStack_30,lbl_821AC494);
  iVar1 = **(int **)(param_1 + 0xc);
  fn_8234C258((ulonglong)*(uint *)(iVar1 + 0x118) + 0x150,0,auStack_30);
  fn_8234C258((ulonglong)*(uint *)(iVar1 + 0x118) + 0x150,1,auStack_30);
  fn_82230300(auStack_30,1,0);
  return;
}
