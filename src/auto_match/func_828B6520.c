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
extern void *fn_8265C9E0(int);
extern void *fn_828DD1B8(void *, unsigned __int64, int, int);
extern int fn_828BE2C0(int, void *);
extern int fn_82CE0668(void *, int);
void fn_828B6520(int param_1, unsigned __int64 param_2)
{
  void *mem;
  void *obj;
  int v;
  if (param_2 - *(unsigned __int64 *)(param_1 + 0x38) >= 400) {
    fn_82CE0668((void *)(param_1 + 0x48), 8);
    mem = fn_8265C9E0(0x98);
    if (mem != 0) {
      v = *(int *)(*(int *)(param_1 + 0x14) + 0x28);
      obj = fn_828DD1B8(mem, *(unsigned __int64 *)(param_1 + 0x48), v, v);
    } else {
      obj = 0;
    }
    fn_828BE2C0(*(int *)(param_1 + 0x14), obj);
    *(unsigned __int64 *)(param_1 + 0x38) = param_2;
    if (*(unsigned __int64 *)(param_1 + 0x40) == 0) {
      *(unsigned __int64 *)(param_1 + 0x40) = param_2;
    }
  }
}
