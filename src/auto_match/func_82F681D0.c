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
typedef struct { unsigned int code; int value; } Map_82F681D0;
extern Map_82F681D0 lbl_831BB4E0[];

int fn_82F681D0(unsigned int param_1)
{
  unsigned int i;

  for (i = 0; i < 0x2d; i++) {
    if (param_1 == lbl_831BB4E0[i].code) {
      return lbl_831BB4E0[i].value;
    }
  }
  if (param_1 >= 0x13 && param_1 <= 0x24) {
    return 0xd;
  }
  if (param_1 >= 0xbc && param_1 <= 0xca) {
    return 8;
  }
  return 0x16;
}
