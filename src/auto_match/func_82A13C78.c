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
extern int fn_8263C620();
extern int fn_829F5000(int, void *, int);

typedef struct L_82A13C78 { int a; int b; } L_82A13C78;
extern void *memset(void *, int, unsigned);

void fn_82A13C78(char *o)
{
  unsigned i, j;
  L_82A13C78 l;
  memset(&l, 0, 8);
  l.a = 0;
  l.b = *(int *)(o + 0x1ab4);
  fn_829F5000(3, &l, 8);
  i = 0;
  do {
    if (i == 0) {
      fn_8263C620(*(int *)(o + 0x1ab4) * 0x38 + o + 0xc28, 0);
    } else {
      j = 0;
      do {
        fn_8263C620((*(int *)(o + 0x1ab4) * 8 + i) * 0x38 + o + 0xcd0, j, 0);
        j++;
      } while (j < 4);
    }
    fn_8263C620((*(int *)(o + 0x1ab4) * 8 + i) * 0x38 + o + 0x1290, 0);
    i++;
  } while (i < 8);
  *(int *)(o + 0x1ab4) = -1;
}
