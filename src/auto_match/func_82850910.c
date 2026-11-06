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

extern int fn_82817B08(void *);
extern void fn_82817B50(void *, int, int *);
extern void fn_82817BC8(int, int *);

int fn_82850910(int param_1, int *param_2)
{
  int n, i;
  int out;
  void *o = *(void **)(param_1 + 0x144);
  if (o != 0 && (n = fn_82817B08(o)) > 0) {
    i = 0;
    if (0 < n) {
      do {
        fn_82817B50(*(void **)(param_1 + 0x144), i, &out);
        fn_82817BC8(out, param_2);
        i++;
        param_2++;
      } while (i < n);
    }
    return 1;
  }
  return 0;
}
