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
extern int fn_82BE5240(int, int, const char *, ...);
extern int fn_82BEE7D0(int, void *, void *, int);
extern int fn_82BF2D50(int);


extern char lbl_82196582[];
/* fn_82BE5240 is a variadic (ctx, code, fmt, ...) status setter. The two field
   resets are written in each arm: MSVC hoists them into one block but keeps the
   zero register live, which is why the original builds the string in r10. */
unsigned int fn_82BE7AE0(int param_1)
{
  int t[4];
  char buf[16];
  if (*(int *)(param_1 + 0x9c) == 0) return 0;
  t[0] = *(int *)(param_1 + 0x90);
  fn_82BEE7D0(2, t, buf, 0x10);
  if (fn_82BF2D50(param_1 + 0xa0) != 0) {
    *(int *)(param_1 + 0x9c) = 0;
    *(int *)(param_1 + 0x90) = 0;
    return 0;
  }
  *(int *)(param_1 + 0x9c) = 0;
  *(int *)(param_1 + 0x90) = 0;
  return fn_82BE5240(param_1, 800, lbl_82196582);
}
