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
typedef struct W7_829F6448 { int v[7]; } W7_829F6448;
typedef struct Itf_829F6448 { int pad[0x1d]; void (*f74)(void *, int); } Itf_829F6448;
typedef struct Src_829F6448 { int f0; int f4; int f8; int fc; int f10; int f14; int *f18; } Src_829F6448;
typedef struct Obj_829F6448 { int f0; int pad[0x4190 - 1]; int f4190; int f4191; } Obj_829F6448;
extern int fn_82647308(int, int, int, int, int, void *);
extern void fn_82647578(int);
extern void fn_82648AF0(int, void *);
extern void fn_8264B7E0(int, int, int, int, int, int, int);
extern int fn_829F5478(void *);
extern void fn_829F5C40(int, int);
extern void fn_829F62C8(void *, int);
extern int fn_82A0D598(void *, int, int, int);
extern void fn_82A0D628(void *, int, int, int, int);
extern int fn_82D7E470(void *);
extern struct { Itf_829F6448 *vt; } *lbl_83218C34;

unsigned fn_829F6448(int *param_1, Src_829F6448 *param_2)
{
  int auStack_40;
  int r;
  unsigned hr;
  int *puVar4;
  int u;

  *(W7_829F6448 *)(param_1 + 0x41a8) = *(W7_829F6448 *)param_2;
  auStack_40 = 0;
  *param_1 = param_2->f0;
  u = param_2->f4;
  param_1[0x4190] = u;
  fn_82648AF0(u, &auStack_40);
  puVar4 = param_1 + 0x4191;
  r = fn_82647308(0, 2, 0, 0, 0, puVar4);
  if (r < 0) return r;
  hr = fn_829F5478(param_1 + 4);
  if (hr == 0) {
    hr = fn_82A0D598(param_1 + 0x2c, *puVar4, param_2->f8, *param_1 - 2);
    if (hr == 0) {
      hr = fn_82D7E470(param_1 + 0x34);
      if (hr == 0) {
        if (lbl_83218C34 != 0) {
          lbl_83218C34->vt->f74(lbl_83218C34, param_2->f4);
        }
        fn_8264B7E0(*puVar4, *param_2->f18, 0, 0, 0, 0, 0);
        fn_829F5C40(*puVar4, 1);
        fn_829F62C8(param_1, *puVar4);
        fn_82A0D628(param_1 + 0x2c, (int)param_2->f18, param_2->f10, param_2->f14, *param_1 - 2);
        fn_82647578(*puVar4);
      }
    }
  }
  return hr;
}
