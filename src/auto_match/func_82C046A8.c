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


typedef struct Vt_82C046A8 {
  void *f0[3];
  void (*fc)(int *);
  void (*f10)(void);
  void (*f14)(int *);
  void *f18[24];
  void (*f78)(int *);
} Vt_82C046A8;

int fn_82C046A8(int *self, unsigned __int64 delta)
{
  Vt_82C046A8 *vt = *(Vt_82C046A8 **)self;
  vt->fc(self);
  self[0x4f] = self[0x4f] + 1;
  { unsigned __int64 *tp = (unsigned __int64 *)(self + 0x4c); *tp = (unsigned)self[0x53] + delta; }
  if ((unsigned)self[0x4f] % 5 == 0) {
    (*(Vt_82C046A8 **)self)->f78(self);
  }
  (*(Vt_82C046A8 **)self)->f14(self);
  return 0;
}
