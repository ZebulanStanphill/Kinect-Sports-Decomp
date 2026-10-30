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
typedef struct Obj_826193E8 {
  void *vt;
  struct Ctx_826193E8 *ctx;
  char pad[0xfd0 - 8];
  int fd0;
  void *fd4;
  void *fd8;
} Obj_826193E8;
typedef struct Ctx_826193E8 {
  char pad[0x1ac];
  struct Ctx2_826193E8 *f1ac;
} Ctx_826193E8;
typedef struct Ctx2_826193E8 {
  int pad;
  struct Ctx3_826193E8 **f4;
} Ctx2_826193E8;
typedef struct Ctx3_826193E8 {
  char pad[0x1a8];
  int f1a8;
} Ctx3_826193E8;
extern void fn_8251FA58(void *);
extern void fn_82553980(int, int);
extern char lbl_821CAD0C[];

void fn_826193E8(Obj_826193E8 *o)
{
  o->vt = lbl_821CAD0C;
  if (o->fd4 != 0) {
    fn_8251FA58(o->fd4);
    o->fd4 = 0;
  }
  if (o->fd8 != 0) {
    fn_8251FA58(o->fd8);
    o->fd8 = 0;
  }
  if (o->fd0 != -1) {
    fn_82553980((*o->ctx->f1ac->f4)->f1a8, o->fd0);
  }
}
