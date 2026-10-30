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
extern unsigned int fn_8236D750(unsigned int);
extern unsigned int fn_8251F718();
extern void fn_8251FA58(unsigned int);
extern int fn_82526B90(unsigned int, unsigned int);
extern unsigned int fn_8255AF78(unsigned int);
extern unsigned int fn_8255AF80(unsigned int);
extern unsigned int fn_82674630(unsigned int, unsigned int, unsigned int);
extern void fn_82BA02A8(unsigned int);

unsigned int fn_82674698(unsigned int param_1, unsigned int param_2)
{
  unsigned int cur = *(unsigned int *)(param_1 + 0xc);
  unsigned int n = 0;
  unsigned int cnt;
  unsigned int r;
  cnt = fn_8255AF80(cur);
  if (cnt != 0) {
    do {
      if (fn_82526B90(fn_8236D750(cur), param_2) == 0) {
        if (*(unsigned int *)(param_1 + 0x24) != 0) {
          fn_8251FA58(*(unsigned int *)(param_1 + 0x24));
          *(unsigned int *)(param_1 + 0x24) = 0;
        }
        fn_82BA02A8(cur);
        r = fn_8251F718();
        *(unsigned int *)(param_1 + 0x24) = r;
        return fn_82674630(param_1, param_2, r);
      }
      n++;
      cur = fn_8255AF78(cur);
    } while (n < fn_8255AF80(*(unsigned int *)(param_1 + 0xc)));
  }
  return 0;
}
