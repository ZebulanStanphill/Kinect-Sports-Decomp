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
extern unsigned int strlen(const char *);
extern void *fn_82F68BF0(unsigned int);
extern void fn_82F664B0(void *, unsigned int, const char *);

void fn_8265BAB8(int param_1,char *param_2)

{
  unsigned int len;
  void *buf;

  if (param_2 != 0) {
    len = strlen(param_2) + 1;
    buf = fn_82F68BF0(len);
    *(void **)(param_1 + 4) = buf;
    if (buf != 0) {
      fn_82F664B0(buf,len,param_2);
      *(unsigned char *)(param_1 + 8) = 1;
    }
  }
}
