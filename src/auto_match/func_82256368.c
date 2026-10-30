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
extern int fn_82517DC8(int *, int);
extern int *fn_8265C9E0(unsigned int);
extern unsigned int lbl_821B7C00;
extern unsigned int lbl_821B7C50;

int * fn_82256368(int param_1)
{
  int *p;

  p = fn_8265C9E0(0xa0);
  if (p != 0) {
    fn_82517DC8(p, param_1);
    p[0x20] = 0;
    *p = (int)&lbl_821B7C00;
    p[0x1a] = (int)&lbl_821B7C50;
    p[0x26] = 0;
    return p;
  }
  return 0;
}
