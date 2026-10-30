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
extern int fn_826AA6A8();

unsigned int *fn_826BF0F8(unsigned int *param_1, unsigned int **param_2, unsigned int **param_3)
{
  int r;
  if (*param_2 != 0) {
    unsigned int n = (*param_2)[1];
    r = fn_826AA6A8(param_2, param_3, n & (*param_3)[3]);
    if (r >= 0) {
      param_1[0] = (unsigned int)param_2;
      param_1[1] = r;
      return param_1;
    }
  }
  r = 0;
  param_1[0] = 0;
  param_1[1] = r;
  return param_1;
}
