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
extern void *fn_82FA5060(unsigned int, int);
extern int fn_82FAF408(void *, int);
extern int fn_83008600(void *);
extern int fn_830087C8(void *, int, int, int, int);
extern void **fn_83029968(void *, unsigned int);
extern unsigned int lbl_8216D2CC;
extern unsigned int lbl_831BC768;

int fn_82FB11B8(char *self, int p2, int p3, int p4, int p5)
{
  void **slot;
  unsigned int *obj;
  unsigned int *mem;

  slot = fn_83029968(self + 0x88, p2);
  if (slot != 0) {
    mem = (unsigned int *)fn_82FA5060(lbl_831BC768, 0x2c);
    if (mem != 0) {
      fn_83008600(mem);
      mem[10] = 0;
      mem[0] = (unsigned int)&lbl_8216D2CC;
      obj = mem;
    } else {
      obj = 0;
    }
    *slot = obj;
    if (obj != 0) {
      fn_830087C8(obj, p2, p3, p4, p5);
    } else {
      fn_82FAF408(self + 0x88, p2);
    }
    if (*slot != 0) {
      return 1;
    }
  }
  return 2;
}
