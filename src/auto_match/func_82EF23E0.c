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
typedef struct E_82EF23E0 { char pad[0x1c]; unsigned f1c; unsigned f20; } E_82EF23E0;
typedef struct Obj_82EF23E0 { char pad[0xc]; unsigned fc; char pad2[0x10]; unsigned __int64 f20; char pad3[0x20]; unsigned f48; char pad4[4]; char f50[0x368]; unsigned f3b8; } Obj_82EF23E0;
extern void fn_82EF1D58(void *, unsigned, E_82EF23E0 **);
extern unsigned fn_82F64CE0(unsigned);

int fn_82EF23E0(Obj_82EF23E0 *param_1, unsigned __int64 *param_2, unsigned __int64 *param_3)
{
  unsigned __int64 size;
  unsigned i;
  E_82EF23E0 *a;
  E_82EF23E0 *b;
  if (param_1->fc == 0) {
    return 0xc00d36b6;
  }
  size = 0x30;
  if (param_1->f48 != 0) {
    size = (unsigned)(fn_82F64CE0(param_1->f48) + 1) * 2;
    size += 0x30;
  }
  for (i = 0; i < param_1->f3b8; i++) {
    fn_82EF1D58(param_1->f50, i, &a);
    fn_82EF1D58(param_1->f50, i, &b);
    size = (unsigned)(a->f1c * 2 + b->f20) + size + 0x1e;
  }
  if (param_2 != 0) {
    *param_2 = size;
  }
  if (param_3 != 0) {
    *param_3 = size;
  }
  param_1->f20 = size;
  return 0;
}
