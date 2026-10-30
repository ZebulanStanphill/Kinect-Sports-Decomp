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
extern void RtlEnterCriticalSection(void *);
extern void RtlLeaveCriticalSection(void *);
extern void fn_8267BF78(char *, unsigned);
extern void fn_826913D8(char *, void *, unsigned);

void fn_8267C020(char *param_1)
{
  unsigned n;
  RtlEnterCriticalSection(param_1 + 0x2c4);
  if (*(void **)(param_1 + 0x2e0) != 0) {
    n = *(unsigned *)(param_1 + 0x2e4);
    for (; n != 0; n--) {
      if (((unsigned *)*(void **)(param_1 + 0x2e0))[n - 1] != 0) {
        fn_8267BF78(param_1, n);
      }
    }
    fn_826913D8(param_1 + 0x118, *(void **)(param_1 + 0x2e0), *(unsigned *)(param_1 + 0x2e4) << 2);
    *(void **)(param_1 + 0x2e0) = 0;
    *(unsigned *)(param_1 + 0x2e4) = 0;
  }
  RtlLeaveCriticalSection(param_1 + 0x2c4);
}
