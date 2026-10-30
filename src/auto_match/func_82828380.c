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
extern unsigned *fn_82829530(void *out, int map, char **key);
extern int strncpy(char *, char *, int);
int fn_82828380(int param_1, char *param_2)
{
  unsigned *piVar1;
  struct { char *p; unsigned it[3]; } L;
  char buf[264];
  strncpy(buf, param_2, 0xff);
  L.p = buf;
  piVar1 = fn_82829530(L.it, *(int *)(param_1 + 0x2f0), &L.p);
  if (*piVar1 != *(unsigned *)(*(int *)(param_1 + 0x2f0) + 4)) {
    return *(int *)(*(int *)(*piVar1 + 0xc) + 0x100);
  }
  return 0;
}
