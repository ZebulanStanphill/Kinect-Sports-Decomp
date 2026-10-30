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
extern char *fn_82CEB1B8(void *, void *);

void fn_82CEE7F8(void *param_1, unsigned param_2, void *param_3, int *param_4)
{
  char auStack_30[1];

  if (param_2 != 0) {
    if (*fn_82CEB1B8(auStack_30, param_3) != 0) {
      (*(void (**)(int *, void *, unsigned, int))(*param_4 + 0xc))(param_4, param_1, param_2, 0);
    } else {
      (*(void (**)(int *, void *, void *, unsigned, int))(*param_4 + 0x10))(param_4, param_3, param_1, param_2, 0);
    }
  }
}
