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
extern void fn_8289B6F8(void *, int, unsigned);
extern void fn_828E5F60(unsigned *);

void fn_8289BBE8(int param_1, unsigned *param_2, unsigned *param_3)
{
  unsigned it;
  unsigned n;
  unsigned tmp;

  it = *param_2;
  while (it != *param_3) {
    if (*(int *)(it + 0x18) == 0) {
      n = it;
      fn_828E5F60(&it);
      fn_8289B6F8(&tmp, param_1, n);
    }
    else {
      fn_828E5F60(&it);
    }
  }
}
