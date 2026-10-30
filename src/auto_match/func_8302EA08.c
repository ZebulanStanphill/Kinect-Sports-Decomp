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
struct O_8302EA08;
typedef struct VT_8302EA08 { void *pad0; void (*addref)(struct O_8302EA08 *); void (*release)(struct O_8302EA08 *); } VT_8302EA08;
typedef struct O_8302EA08 { VT_8302EA08 *vt; } O_8302EA08;

void fn_8302EA08(O_8302EA08 **param_1, O_8302EA08 *param_2, unsigned char param_3)
{
  O_8302EA08 *old;
  if (param_2 != 0 && param_3 != 0) {
    param_2->vt->addref(param_2);
  }
  old = *param_1;
  *param_1 = param_2;
  if (old != 0) {
    old->vt->release(old);
  }
}
