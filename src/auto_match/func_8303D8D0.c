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
extern int fn_82FA5060();
extern int fn_8302B7D0();
extern int fn_8302BB20();
extern unsigned int lbl_8217D630;
extern unsigned int lbl_831BC768;


unsigned int *fn_8303D8D0(void *param_1, void *param_2)
{
  unsigned int *p = (unsigned int *)fn_82FA5060(lbl_831BC768, 0x20);
  if (p != 0) {
    fn_8302B7D0(p, param_1, param_2);
    p[7] = 0xffffffff;
    *p = (unsigned int)&lbl_8217D630;
    fn_8302BB20(p);
    return p;
  }
  return 0;
}
