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
extern int fn_82DB0430(char *, char *, int *);
typedef struct Tbl_82DBA0E8 { int base; } Tbl_82DBA0E8;

void fn_82DBA0E8(int param_1,int *param_2)
{
  char cVar1;
  int *piVar2;
  int iVar3;
  char *a;
  char *b;

  piVar2 = *(int **)(*(int *)(param_1 + 4) + 0x78);
  iVar3 = *piVar2;
  a = (char *)(*(char *)(*param_2 + 5) + *param_2);
  b = (char *)(*(char *)(param_2[1] + 5) + param_2[1]);
  cVar1 = *(char *)(a[0x1a] * 10 + b[0x1a] + iVar3 + 0x1bb0);
  if (cVar1 == '\0') {
    return;
  }
  piVar2[5] = *(int *)(cVar1 * 0x40 + iVar3 + 0x1c30);
  fn_82DB0430(a, b, piVar2);
}
