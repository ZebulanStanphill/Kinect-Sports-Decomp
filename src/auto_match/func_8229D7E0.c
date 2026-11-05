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
extern int fn_822315A0(unsigned);
extern unsigned *fn_82555A88(unsigned, unsigned);
extern int fn_8266F6B8();
extern int fn_82671A40(unsigned, void *);
extern int fn_826728E8(unsigned, const char *, int);
extern unsigned lbl_821938C8[];
extern int lbl_821AB494;
extern unsigned lbl_8326B370[];
void fn_8229D7E0(unsigned *param_1)
{
  unsigned a = param_1[1];
  unsigned *t;
  *param_1 = (unsigned)&lbl_821AB494;
  fn_826728E8(a, "cameraview", fn_8266F6B8());
  {
    unsigned *pp = lbl_821938C8;
    int n = 0x10;
    do {
      t = fn_82555A88(param_1[3] + 0x98, *pp);
      if (t != 0 && *t != 0) {
        *(unsigned *)(*t + 0x19c) = lbl_8326B370[9];
      }
      n--;
      pp++;
    } while (n != 0);
  }
  *(unsigned *)(param_1[3] + 0x19c) = lbl_8326B370[9];
  fn_82671A40(param_1[1], param_1);
  if (param_1[2] != 0) {
    fn_822315A0(param_1[2]);
  }
}
