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
extern int fn_822C71C8();
extern int fn_82302AE0();
extern int fn_82302CE0();
extern unsigned int lbl_821AEDD8;


void fn_823019E8(undefined4 *param_1)
{
  int i;
  undefined4 *q;
  undefined4 *e;
  *param_1 = &lbl_821AEDD8;
  q = param_1 + 0x28;
  e = param_1 + 0x19;
  for (i = 4; i != 0; i--) {
    fn_82302CE0(e);
    q += 0x11;
    *q = 0;
    e += 4;
  }
  q = param_1 + 0x29;
  i = 3;
  do { q -= 4; fn_82302AE0(q); } while (--i >= 0);
  fn_822C71C8(param_1);
}
