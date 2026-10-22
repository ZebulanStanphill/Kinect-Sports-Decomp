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
extern int fn_82518FF0();
extern int fn_828223C8();
extern unsigned unsigned int iStack_40;

static unsigned int next(unsigned int p) { unsigned int n; fn_828223C8(p,&n); return n; }

void fn_82827308(int param_1,int *param_2)

{
  undefined4 *puVar1;
  bool bVar2;
  int iVar3;
  unsigned int iStack_40;
  undefined4 * apuStack_3c;
  
  iVar3 = *(int *)(param_1 + 0x28);
  param_1 = param_1 + 0x2f4;
  while (param_1 = next(param_1), (unsigned int)param_1 != 0) {
    bVar2 = false;
    puVar1 = *(undefined4 **)(*(int *)(param_1 + 0x28) + 4);
    apuStack_3c = (undefined4 *)*puVar1;
    while (apuStack_3c != puVar1) {
      if ((void *)apuStack_3c[5] != 0) {
        bVar2 = true;
      }
      fn_82518FF0(&apuStack_3c);
    }
    if (!bVar2) {
      iVar3 = iVar3 + -1;
    }
  }
  *param_2 = iVar3;
  return;
}

