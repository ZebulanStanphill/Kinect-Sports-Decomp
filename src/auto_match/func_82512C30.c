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
extern void fn_825269D0(int, int);
extern void *fn_8265C9E0(int);
extern unsigned int *lbl_832767A4;

unsigned int *fn_82512C30(void)
{
  unsigned int *mem;
  unsigned int *p;

  if (lbl_832767A4 == 0) {
    mem = (unsigned int *)fn_8265C9E0(0x34);
    if (mem != 0) {
      mem[0] = 0;
      mem[1] = 0;
      mem[2] = 0;
      mem[3] = 0;
      mem[4] = 0;
      mem[5] = 0;
      mem[6] = 0;
      mem[7] = 0;
      mem[9] = 0;
      mem[10] = 0;
      mem[11] = 0;
      fn_825269D0(0x36, 0);
      p = mem;
    } else {
      p = 0;
    }
    lbl_832767A4 = p;
    return p;
  }
  return lbl_832767A4;
}
