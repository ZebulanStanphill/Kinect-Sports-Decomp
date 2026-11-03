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
extern int fn_82CE08B8(int, int, int);
extern int fn_82CE08F0(int, int, void *);
extern int fn_82CE0908(int, unsigned int, int, void *, int);

int fn_830B3780(int param_1, int *param_2)
{
  int s;
  int one;

  s = fn_82CE08B8(2, 1, 6);
  *param_2 = s;
  if (s == -1) {
    return 0x8004000b;
  }
  if (fn_82CE0908(s, 0xffff, 0x1006, (void *)(param_1 + 8), 4) != 0) {
    return 0x8004000b;
  }
  if (fn_82CE0908(*param_2, 0xffff, 0x1005, (void *)(param_1 + 8), 4) != 0) {
    return 0x8004000b;
  }
  if (*(char *)(param_1 + 0xc) != 0) {
    one = 1;
    if (fn_82CE08F0(*param_2, 0x8004667e, &one) != 0) {
      return 0x8004000b;
    }
  }
  return 0;
}
