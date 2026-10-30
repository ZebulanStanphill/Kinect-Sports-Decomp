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
extern unsigned fn_828252D0(unsigned);
extern void fn_8282ABD0(int);
extern void fn_8282B1C8(int);
extern void fn_8282B788(int);
extern void fn_828319F8(int, int);
extern void fn_82832C80(int);

void fn_8282D858(int param_1)
{
  unsigned x;

  *(unsigned *)(param_1 + 0x2c) = 0;
  *(unsigned *)(param_1 + 0x34) = 0;
  *(unsigned *)(param_1 + 0x3c) = 0;
  *(unsigned *)(param_1 + 0x44) = 0;
  *(unsigned char *)(param_1 + 1000) = 1;
  if (*(char *)(param_1 + 0x3ef) == '\0') {
    *(unsigned *)(param_1 + 0x30) = 0;
  }
  else {
    fn_8282B788(param_1);
    fn_82832C80(param_1);
  }
  fn_8282B1C8(param_1);
  fn_8282ABD0(param_1);
  fn_828319F8(param_1, 0);
  x = ((*(unsigned *)(param_1 + 0x24) * 0xd + *(unsigned *)(param_1 + 0x3c) + *(unsigned *)(param_1 + 0x2c)) * 5
       + (*(unsigned *)(param_1 + 0x44) + *(unsigned *)(param_1 + 0x34)) * 3
       + *(unsigned *)(param_1 + 0x48) + *(unsigned *)(param_1 + 0x40)
       + *(unsigned *)(param_1 + 0x38) + *(unsigned *)(param_1 + 0x30)
       + *(unsigned *)(param_1 + 0x24) + 0x44) * 4
      + *(unsigned *)(param_1 + 0x28) * 0xe
      + *(unsigned char *)(param_1 + 0x51) * 0x21;
  if (*(char *)(param_1 + 0x3f0) != '\0') {
    x = ((*(unsigned *)(param_1 + 0x3e0) * 2 + *(unsigned char *)(param_1 + 0x51)) * 8) + x;
  }
  *(unsigned *)(param_1 + 0x2e4) = fn_828252D0(x);
  *(unsigned *)(param_1 + 0x2d8) = 0;
}
