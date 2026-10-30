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
extern void *memcpy(void *, const void *, unsigned int);
typedef struct B_8281C620 { char pad[0x4]; unsigned int f4; } B_8281C620;
void fn_8281C620(int param_1,int *param_2,uint *param_3)
{
  unsigned int iVar1;
  unsigned int base;
  uint n;

  if (*(unsigned int *)(param_1 + 0x20) == 0) {
    base = *(uint *)(*(int *)(param_1 + 0xc) + 0x1c);
  }
  else {
    iVar1 = *(int *)(param_1 + 0x1c);
    if (iVar1 == 0) {
      base = *(uint *)(*(int *)(param_1 + 0x20) + 4);
    }
    else {
      base = *(uint *)(iVar1 + 0x11) + *(uint *)(iVar1 + 0xd);
    }
  }
  n = *(uint *)(param_1 + 0x24) < *param_3 ? *(uint *)(param_1 + 0x24) : *param_3;
  memcpy((void *)(base + *(uint *)(param_1 + 0x10)), (void *)*param_2, n);
  *(uint *)(param_1 + 0x10) = n + *(int *)(param_1 + 0x10);
  *(uint *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) - n;
  *param_2 = *param_2 + n;
  *param_3 = *param_3 - n;
}
