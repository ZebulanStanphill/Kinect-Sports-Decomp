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
extern int fn_830AA0D0();
typedef struct {
  int f0; int f4; int f8; int fc; char pad10[0x10];
  int f20; int f24; unsigned f28; unsigned f2c; int f30; int f34; unsigned f38; unsigned f3c;
  int f40; char pad44[4]; float *f48; float *f4c;
} Obj_82DBFF08;

void fn_82DBFF08(Obj_82DBFF08 *p, int param_2)
{
  float *q;
  if (param_2 == 0) {
    p->f2c = p->f20;
    p->f3c = p->f30;
  }
  for (q = p->f4c; q < p->f48; q++) {
    *q = 0.0f;
  }
  p->f4c = p->f48;
  if (p->f2c != p->f28) {
    fn_830AA0D0(p->f4, p->f2c, p->fc, p->f40);
  }
  if (p->f3c != p->f38) {
    fn_830AA0D0(p->f4, p->f3c, p->fc, p->f40);
  }
  p->f2c = p->f28;
  p->f3c = p->f38;
}
