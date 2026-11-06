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
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 { float vector4_f32[4]; } __vector4;
extern int fn_822315A0();
extern int fn_82252510();
extern int fn_822D79D8();
extern int fn_822D7FE0();
extern int fn_8265C9E0();
extern int fn_828E2B28();
extern int fn_828E9D40();
extern int fn_828E9D90();

typedef struct Param_823F2230 {
  void (**vt)(struct Param_823F2230 *, int, void *);
} Param_823F2230;

typedef struct Obj_823F2230 {
  char pad0[0x38];
  char sub[0x10];
  unsigned int enabled;
  char pad1[0x1c];
  struct { Param_823F2230 *p; int pad; } slot[7];
} Obj_823F2230;

typedef struct Pair_823F2230 { int first; unsigned int second; } Pair_823F2230;

void fn_823F2230(Obj_823F2230 *param_1,__vector4 va,void *p,__vector4 vb,float f,int e,void *q,int g)

{
  unsigned int mem;
  int h;
  Pair_823F2230 pair;

  mem = fn_8265C9E0(0x28);
  if (mem != 0) {
    h = fn_822D7FE0();
  }
  else {
    h = 0;
  }
  pair.first = 0;
  pair.second = 0;
  fn_822D79D8(&pair,h);
  param_1->slot[0].p->vt[4](param_1->slot[0].p,pair.first,&va);
  param_1->slot[1].p->vt[4](param_1->slot[1].p,pair.first,p);
  param_1->slot[2].p->vt[4](param_1->slot[2].p,pair.first,&vb);
  param_1->slot[3].p->vt[4](param_1->slot[3].p,pair.first,&f);
  param_1->slot[4].p->vt[4](param_1->slot[4].p,pair.first,&e);
  param_1->slot[5].p->vt[4](param_1->slot[5].p,pair.first,q);
  param_1->slot[6].p->vt[4](param_1->slot[6].p,pair.first,&g);
  if (param_1->enabled != 0) {
    fn_828E9D90(pair.first);
    fn_828E9D40(pair.first);
    fn_82252510(param_1,pair.first,param_1->sub);
  }
  fn_828E2B28(param_1,&pair);
  if (pair.second != 0) {
    fn_822315A0(pair.second);
  }
}
