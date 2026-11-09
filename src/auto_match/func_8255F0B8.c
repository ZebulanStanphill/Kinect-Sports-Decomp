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
typedef struct {
  void *vt;
  int pad0[0x44 - 1];
  int m110, m114, m118;
  int pad1[0x57 - 0x47];
  int m15c, m160, m164, m168, m16c, m170, m174, m178;
  int m17c;
  int m180;
  float m184, m188;
  int m18c;
  int pad2[0x68 - 0x64];
  int m1a0;
  int pad3;
  int m1a8;
} S_8255F0B8;
extern void fn_827F2F90(void *, int, int, int, int, int);
extern char lbl_821C5284[];
extern float lbl_821917A8[];

S_8255F0B8 *fn_8255F0B8(S_8255F0B8 *p, int a, int b)
{
  float f2, f1;
  fn_827F2F90(p, a, 0, 0, 0, 0);
  p->m17c = b;
  f1 = lbl_821917A8[3];
  f2 = 0.0f;
  p->m110 = 0;
  p->m184 = f1;
  p->vt = lbl_821C5284;
  p->m188 = f2;
  p->m114 = 0;
  p->m118 = 0;
  p->m164 = 0;
  p->m168 = 0;
  p->m16c = 1;
  p->m170 = 0;
  p->m174 = 0;
  p->m178 = 0;
  p->m180 = 0;
  p->m18c = 0;
  p->m1a0 = 0;
  p->m1a8 = 0;
  p->m15c = 0;
  p->m160 = 0;
  return p;
}
