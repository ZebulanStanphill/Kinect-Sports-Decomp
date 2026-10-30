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
typedef struct Target_822CF260 { char pad[0x2148]; int state; } Target_822CF260;
typedef struct SharedPtr_822CF260 { Target_822CF260 *ptr; void *rep; } SharedPtr_822CF260;

extern void fn_822315A0(void *rep);
extern unsigned int fn_82372C00(unsigned int p);
extern void fn_82374520(SharedPtr_822CF260 *out, unsigned int p);

int fn_822CF260(unsigned int param_1, int param_2)
{
  unsigned int uVar1;
  SharedPtr_822CF260 sp;

  uVar1 = *(unsigned int *)(param_1 + 0x1c0);
  if (param_1 == fn_82372C00(uVar1)) {
    fn_82374520(&sp, uVar1);
    if (sp.ptr != 0) {
      int st = sp.ptr->state;
      if (st >= 5 && (st <= 7 || st == 0xf || (st == 0x12 && param_2 == 0))) {
        if (sp.rep != 0)
          fn_822315A0(sp.rep);
        return 1;
      }
    }
    if (sp.rep != 0)
      fn_822315A0(sp.rep);
  }
  return 0;
}
