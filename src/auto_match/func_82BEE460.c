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
extern int fn_82BE54C8();
extern int fn_82BE6720(int, unsigned char, int);
extern int fn_82BE6A00();
extern int fn_82BE6C60();
extern int fn_82BE6E28();
extern unsigned int fn_82BE8E38();
extern int fn_82D7E470();
extern int fn_82D7EA10();

unsigned int fn_82BEE460(int param_1, int param_2, int param_3, int param_4)
{
  int iVar2;
  int uVar3;
  unsigned int uVar1;
  char buf[32];

  if (fn_82BE6720(param_1, 0x3d, 0) != 0 && fn_82BE6E28(param_1, param_2, 0) != 0 &&
      fn_82BE6720(param_1, 0x3e, 0) != 0 && fn_82BE6E28(param_1, param_3, 0) != 0 &&
      fn_82BE6720(param_1, 0x3c, 0) != 0 && fn_82BE6720(param_1, 1, 0) != 0 &&
      fn_82BE6720(param_1, 0x18, 0) != 0) {
    fn_82BE8E38();
    if (fn_82BE6720(param_1, fn_82D7E470(), 0) != 0 && fn_82BE6720(param_1, 0x1b, 0) != 0) {
      fn_82BE8E38();
      if (fn_82BE6720(param_1, fn_82D7EA10(), 0) != 0 && fn_82BE6720(param_1, 0x44, 0) != 0 &&
          fn_82BE6E28(param_1, "11111111111111111111111111111111", 0) != 0) {
        if (param_4 != 0 && fn_82BE8E38() != 0) {
          if (fn_82BE54C8(fn_82BE8E38(), buf, 0x21) != 0) {
            if (fn_82BE6720(param_1, 0x1d, 0) == 0) return 0;
            if (fn_82BE6E28(param_1, buf, 0) == 0) return 0;
          }
        }
        if (fn_82BE6720(param_1, 0x16, 0) != 0 && fn_82BE6E28(param_1, "XDK 11775.3", 0) != 0 &&
            fn_82BE6A00(param_1) != 0) {
          return fn_82BE6C60(param_1, 0xcb, 1, 1);
        }
      }
    }
  }
  return 0;
}
