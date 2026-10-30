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
extern unsigned int *fn_82FA5060(unsigned int, int);
extern int fn_82FA6B68(unsigned int *, int);
extern void fn_82FA7778(unsigned int *);
extern unsigned int lbl_8216CB84;
extern unsigned int lbl_831BC768;
extern unsigned int *lbl_83264230;

unsigned int *fn_82FA79C0(int param_1)
{
  unsigned int *p;

  if (lbl_83264230 == 0) {
    p = fn_82FA5060(lbl_831BC768, 4);
    if (p != 0) {
      *p = (unsigned int)&lbl_8216CB84;
      lbl_83264230 = p;
      if (fn_82FA6B68(p, param_1) != 1) {
        fn_82FA7778(lbl_83264230);
        lbl_83264230 = 0;
      }
    } else {
      lbl_83264230 = 0;
    }
  }
  return lbl_83264230;
}
