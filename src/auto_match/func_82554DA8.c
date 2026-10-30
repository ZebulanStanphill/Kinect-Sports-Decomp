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
struct O_82554DA8;
typedef struct VT_82554DA8 { void *pad[2]; void (*rel)(struct O_82554DA8 *); } VT_82554DA8;
typedef struct O_82554DA8 { VT_82554DA8 *vt; } O_82554DA8;
extern int lbl_8327FBB8[];
extern void fn_82522ED8(unsigned);
extern void fn_82555148(unsigned);

int fn_82554DA8(unsigned param_1)
{
  O_82554DA8 **pp = (O_82554DA8 **)&lbl_8327FBB8[-47];
  O_82554DA8 *o = *pp;
  if (o != 0) {
    lbl_8327FBB8[0] = 0;
    o->vt->rel(o);
    *pp = 0;
  }
  fn_82555148(param_1);
  fn_82522ED8(param_1);
  return 1;
}
