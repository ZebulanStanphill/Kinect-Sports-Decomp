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
extern void *fn_8265C9E0(int);
extern int fn_8236D8F8(void *, int, int);
extern char lbl_821B3A90[];
extern char lbl_821B3AE0[];
void *fn_823762F0(int param_1, int param_2)
{
  unsigned *p = (unsigned *)fn_8265C9E0(0x98);
  if (p != 0) {
    unsigned *z = p + 0x22;
    fn_8236D8F8(p, param_2, param_1);
    p[0] = (unsigned)lbl_821B3A90;
    p[0x1a] = (unsigned)lbl_821B3AE0;
    z[0] = 0; z[1] = 0; z[2] = 0;
    return p;
  }
  return 0;
}
