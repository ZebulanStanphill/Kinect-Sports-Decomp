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
typedef struct { int m0; int m4; int m8; int mc; int m10; unsigned m14; } S_824E3D48;
typedef struct { int pad[0x28]; int ma0; } T_824E3D48;
extern int fn_8226FDB8(unsigned, int);
extern T_824E3D48 *fn_82270B70(void);
extern S_824E3D48 *fn_824E3740(void);
extern void fn_8251D888(void);
extern int lbl_8327F644[];

void fn_824E3D48(void)
{
  S_824E3D48 *s;
  s = fn_824E3740();
  if (s->m14 != 0) {
    if (fn_8226FDB8(s->m14, 0) == 0 || fn_82270B70()->ma0 == 4) {
      s->m14 = 0;
    }
  }
  if (s->m4 != 0 && s->m14 == 0) {
    if (lbl_8327F644[10] > 0) {
      if (--lbl_8327F644[10] == 0) fn_8251D888();
    }
    s->m4 = 0;
  }
}
