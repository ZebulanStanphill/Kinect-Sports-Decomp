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
extern void *fn_8265C9E0(unsigned int);
extern unsigned int lbl_82196C88;
extern unsigned int lbl_821AD588;
typedef struct Sub_82391C08 { void *vt; int f4; unsigned int g0; unsigned int g1; unsigned int g2; unsigned int g3; unsigned int g4; unsigned int g5; } Sub_82391C08;
typedef struct Blk_82391C08 { void *vt; int f4; int f8; Sub_82391C08 sub; } Blk_82391C08;
typedef struct Pr_82391C08 { Sub_82391C08 *obj; Blk_82391C08 *blk; } Pr_82391C08;

Pr_82391C08 *fn_82391C08(Pr_82391C08 *param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,
             unsigned int *param_5,unsigned int *param_6,unsigned int *param_7)
{
  Blk_82391C08 *p;
  Sub_82391C08 *s;
  unsigned int uVar1, uVar2, uVar3, uVar4, uVar5, uVar6;

  p = (Blk_82391C08 *)fn_8265C9E0(0x2c);
  if (p != 0) {
    p->f4 = 1;
    p->vt = &lbl_821AD588;
    p->f8 = 1;
    s = &p->sub;
    if (s != 0) {
      uVar1 = *param_7;
      uVar2 = *param_6;
      uVar3 = *param_5;
      uVar4 = *param_4;
      uVar5 = *param_3;
      uVar6 = *param_2;
      s->f4 = 0;
      s->vt = &lbl_82196C88;
      s->g2 = uVar4;
      s->g1 = uVar5;
      s->g0 = uVar6;
      s->g3 = uVar3;
      s->g4 = uVar2;
      s->g5 = uVar1;
    }
  }
  else {
    p = 0;
  }
  param_1->blk = p;
  param_1->obj = &p->sub;
  return param_1;
}
