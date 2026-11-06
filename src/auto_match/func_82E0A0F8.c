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


void fn_82E0A0F8(int *param_1)
{
  int *sub;
  int uVar2;
  int iVar3;
  int vt;

  sub = (int *)param_1[7];
  uVar2 = sub[6];
  iVar3 = sub[7];
  if (uVar2 < 0 || iVar3 < 0) {
    vt = *param_1;
    uVar2 = (*(code *)(vt + 0x38))(param_1, "__data__");
    (*(code *)(vt + 0x3c))(param_1, uVar2, 0);
  } else {
    (*(code *)(*param_1 + 0x3c))(param_1, uVar2, iVar3);
  }
  return;
}
