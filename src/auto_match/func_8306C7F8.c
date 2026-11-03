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
typedef struct TZ_8306C7F8 {
  int bias;
  unsigned short stdName[32];
  char stdDate[16];
  int stdBias;
  unsigned short dayName[32];
  char dayDate[16];
  int dayBias;
} TZ_8306C7F8;

extern unsigned int fn_82A2A7D0(TZ_8306C7F8 *);

void fn_8306C7F8(__int64 *param_1)
{
  TZ_8306C7F8 tz;
  unsigned int id;
  int x;
  int y;

  id = fn_82A2A7D0(&tz);
  y = tz.bias;
  switch (id) {
    case 0:
      break;
    case 2:
      x = tz.dayBias;
      goto add;
    case 1:
      x = tz.stdBias;
    add:
      tz.bias = x + y;
      break;
    default:
      tz.bias = 0;
      break;
  }
  *param_1 = (__int64)(tz.bias * 0x3c) * 10000000;
}
