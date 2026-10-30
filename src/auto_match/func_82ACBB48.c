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
extern void *memcpy(void *, const void *, unsigned int);
extern void fn_82AA6648(unsigned int *, unsigned int *, unsigned int);
extern unsigned int *fn_82ABE940(unsigned int *, unsigned int);

void fn_82ACBB48(unsigned int *param_1, unsigned int param_2)
{
  unsigned int *puVar2;
  unsigned int *piVar1;
  unsigned int uVar3;
  unsigned int cap;

  if ((~*param_1 & 1) == 0) {
    cap = 0x1f;
  } else {
    cap = *(unsigned int *)*param_1 * 0x20 - 1;
  }
  if (param_2 > cap) {
    uVar3 = (param_2 + 0x20) >> 5;
    puVar2 = fn_82ABE940(param_1, (uVar3 + 1) * 4);
    *puVar2 = uVar3;
    piVar1 = (unsigned int *)*param_1;
    if ((~(unsigned int)piVar1 & 1) != 0) {
      memcpy(puVar2 + 1, piVar1 + 1, *piVar1 << 2);
      fn_82AA6648(param_1, (unsigned int *)*param_1, (*(unsigned int *)*param_1 + 1) << 2);
    } else {
      puVar2[1] = (unsigned int)piVar1 & 0xfffffffe;
    }
    *param_1 = (unsigned int)puVar2;
  }
}
