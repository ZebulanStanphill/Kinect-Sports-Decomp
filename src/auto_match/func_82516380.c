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
extern void fn_825165E0(void *);
extern void *fn_8265C9E0(unsigned);
extern void fn_828A8C50(void *, int, int);
extern unsigned int lbl_821969CC;

int *fn_82516380(int param_1)
{
  int *p = fn_8265C9E0(0x88);
  if (p != 0) {
    fn_828A8C50(p, param_1, 0);
    *p = (int)&lbl_821969CC;
    { int *v = p + 0x1a; v[0] = 0; v[1] = 0; v[2] = 0; }
    { int *v = p + 0x1e; v[0] = 0; v[1] = 0; v[2] = 0; }
    fn_825165E0(p);
    return p;
  }
  return 0;
}
