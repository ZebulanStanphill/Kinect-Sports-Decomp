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
extern void fn_829D4970(void *, void *);
extern void fn_829D9970(void *, int, void *);
extern void *_alloca(unsigned);

void fn_829D9C70(char *param_1, void *param_2, unsigned char param_3)
{
  unsigned *p;
  unsigned n;
  unsigned lim;

  if (*(unsigned *)(param_1 + 0x9c90) == 0x14 && param_3 != 0) {
    fn_829D9970(param_1, 0xd, _alloca(0x40));
  }
  fn_829D4970(param_1, param_2);
  lim = *(unsigned *)(param_1 + 0x9c90);
  p = (unsigned *)(param_1 + 0x9c98);
  n = *p + 1;
  *p = n;
  if (n >= lim) n = lim;
  *p = n;
}
