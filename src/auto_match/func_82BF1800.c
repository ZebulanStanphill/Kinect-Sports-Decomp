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
typedef struct Obj_82BF1800 { void (**vt)(struct Obj_82BF1800 *, int); } Obj_82BF1800;
extern void fn_82BE5340(unsigned *);
extern void fn_82BE5350(unsigned *);
extern Obj_82BF1800 *fn_82BE5378(unsigned *);
extern void fn_82BE5478(unsigned *);
extern void fn_82BE54C0(unsigned *);
extern void fn_82BEB7A8(unsigned *);
extern void fn_82BF0E40(unsigned *, int);
extern void fn_82BF88E8(unsigned *);
extern unsigned lbl_820EB3E4;
extern unsigned lbl_820EB3F4;
extern void (*lbl_831751CC)(unsigned);

void fn_82BF1800(unsigned *param_1)
{
  Obj_82BF1800 *puVar1;
  unsigned *puVar2;
  unsigned *puVar3;

  *param_1 = (unsigned)&lbl_820EB3F4;
  puVar3 = param_1 + 0xb;
  param_1[0xb] = (unsigned)&lbl_820EB3E4;
  if (param_1[0x1b] != 0) {
    lbl_831751CC(param_1[0x1b]);
    param_1[0x1b] = 0;
  }
  puVar2 = param_1 + 0xf;
  fn_82BE5340(puVar2);
  while (*(int *)&param_1[0x11] != 0) {
    puVar1 = fn_82BE5378(puVar2);
    if (puVar1 != 0) {
      (*(void (**)(Obj_82BF1800 *, int))*(unsigned *)puVar1)(puVar1, 1);
    }
    fn_82BE5350(puVar2);
  }
  fn_82BE5478(puVar2);
  fn_82BF0E40(param_1, 1);
  fn_82BE54C0(puVar2);
  fn_82BF88E8(puVar3);
  fn_82BEB7A8(param_1);
}
