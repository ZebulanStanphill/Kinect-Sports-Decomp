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
struct Sub_82E65010;
typedef struct { void *s0; void *s4; void (*f8)(struct Sub_82E65010 *); } SubVt_82E65010;
typedef struct Sub_82E65010 { SubVt_82E65010 *vt; } Sub_82E65010;
typedef struct {
  void *vt;
  void *vt2;
  char pad[0x48 - 8];
  Sub_82E65010 *sub;
  void *vt3;
  unsigned f50;
} Obj_82E65010;
extern void fn_82E50EA0(void *);
extern void fn_82E569B0(void *, int);
extern void fn_82E64F20(Obj_82E65010 *);
extern char lbl_82154D80[];
extern char lbl_8215505C[];
extern char lbl_8215507C[];

void fn_82E65010(Obj_82E65010 *o)
{
  o->vt = lbl_8215507C;
  o->vt2 = lbl_8215505C;
  if (o->sub != 0) {
    o->sub->vt->f8(o->sub);
    o->sub = 0;
  }
  fn_82E64F20(o);
  o->vt3 = lbl_82154D80;
  if (o->f50 == 0) {
    fn_82E569B0(&o->vt3, 0);
  }
  fn_82E50EA0((int *)o + 3);
}
