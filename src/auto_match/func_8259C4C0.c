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
extern int fn_82522838();
extern int fn_82A277E0();

extern char *lbl_832767CC;

int fn_8259C4C0(unsigned char *param_1)
{
  int i;
  int r;
  unsigned char c;
  void **p;

  if (lbl_832767CC == 0) {
    fn_82522838();
  }
  for (i = 0, p = (void **)(lbl_832767CC + 0x3c); i < 4; i++, p += 14) {
    if (*p != 0) {
      r = fn_82A277E0(*p, 0, param_1);
      if (r == -1) {
        c = 0xff;
      } else {
        c = param_1[r - 2];
      }
      if (c == ((int *)p)[-1]) {
        return i;
      }
    }
  }
  return -1;
}
