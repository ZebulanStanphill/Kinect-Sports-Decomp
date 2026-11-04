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
extern char *fn_82D6F590(char *, int, int, int, float);
extern float lbl_83182A98;
int fn_82D4A660(int *param_1)
{
  int lVar1;
  char *pcVar3;
  char auStack_220[1];
  char auStack_210[512];
  if (param_1[10] == 0) return -1;
  lVar1 = (*(int (**)(int *, int, char *))(*param_1 + 0x14))(param_1, 0, auStack_210);
  pcVar3 = fn_82D6F590(auStack_220, lVar1 + 0x20, lVar1 + 0x30, lVar1 + 0x40, lbl_83182A98);
  if (*pcVar3 == 0) return 0;
  return (*(int (**)(int *, int))(*param_1 + 0xc))(param_1, 0);
}
