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
extern int fn_82FA9208(void *);
extern int fn_82FA9480(void *, int);
extern int fn_82FA9508(void *, int);
extern int fn_82FA99C8(void *, int);
extern void *fn_82FAD1F0(int, int, void *);
extern int fn_82FAD5B0(int);
extern void *fn_82FADD68(int, int, int, int);
extern int fn_82FAE150(int);
extern int fn_82FAE168(int);
unsigned char fn_82FB3AE8(int param_1, int param_2, int param_3, int param_4, void **param_5)
{
  int iVar5, iVar6, lVar2, lVar3, iVar7;
  void *uVar1;
  if (param_4 >= fn_82FAE168(*(int *)(param_1 + 0x58)) + fn_82FAE150(*(int *)(param_1 + 0x58))) return 2;
  uVar1 = fn_82FADD68(*(int *)(param_1 + 0x58), param_1, param_2, param_3);
  if (uVar1 == 0) return 2;
  iVar6 = param_1 + 0x40;
  *param_5 = fn_82FAD1F0(iVar6, 0, uVar1);
  fn_82FA9208(uVar1);
  if (*param_5 == 0) return 2;
  *(void **)(param_1 + 0x50) = *param_5;
  fn_82FA9480(*param_5, 0);
  fn_82FA99C8(*param_5, param_4);
  lVar2 = fn_82FAE168(*(int *)(param_1 + 0x58)) + fn_82FAE150(*(int *)(param_1 + 0x58));
  if (param_4 >= 0) lVar2 = lVar2 - param_4;
  fn_82FA9508(*param_5, lVar2);
  if (*(unsigned *)(param_1 + 0xc) != 0 || fn_82FAD5B0(iVar6) == 1) {
    return (fn_82FAD1F0(iVar6, fn_82FAE168(*(int *)(param_1 + 0x58)), 0) == 0) + 1;
  }
  return 2;
}
