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
typedef struct Rec_82E4B450 { unsigned short f0; unsigned short pad[3]; double f8; } Rec_82E4B450;
extern int fn_82E50F00(void *, int);
extern int fn_82E51028(void *, int);
extern Rec_82E4B450 *fn_82E63500(void *, int);

int fn_82E4B450(char *param_2, int param_3, double param_1)
{
  Rec_82E4B450 *p;
  int r;

  fn_82E50F00(param_2 + 4, 1);
  p = fn_82E63500(param_2, param_3);
  r = 0;
  if (p == 0) {
    r = 0x8007000e;
  }
  else {
    p->f8 = param_1;
    p->f0 = 5;
  }
  fn_82E51028(param_2 + 4, 1);
  return r;
}
