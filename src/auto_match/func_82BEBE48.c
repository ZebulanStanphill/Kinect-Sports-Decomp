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
extern int fn_82BE54C8(void *p, char *buf, int n);
extern int fn_82BE6720(void *ctx, int tok, int z);
extern int fn_82BE6C60(void *ctx, int a, int b, int c);
extern int fn_82BE6E28(void *ctx, void *s, int z);
extern void *fn_82BE8E38(void);

int fn_82BEBE48(void *param_1, void *param_2, void *param_3)
{
  char buf[48];

  if (fn_82BE6720(param_1, 0x3d, 0) && fn_82BE6E28(param_1, param_2, 0) &&
      fn_82BE6720(param_1, 0x3e, 0) && fn_82BE6E28(param_1, param_3, 0)) {
    if (fn_82BE8E38() != 0 && fn_82BE54C8(fn_82BE8E38(), buf, 0x21)) {
      if (!fn_82BE6720(param_1, 0x1d, 0) || !fn_82BE6E28(param_1, buf, 0)) {
        return 0;
      }
    }
    return fn_82BE6C60(param_1, 0xc9, 0, 0);
  }
  return 0;
}
