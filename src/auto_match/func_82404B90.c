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
typedef struct Evt_82404B90 {
  const char *name;
  int kind;
} Evt_82404B90;
typedef struct Obj_82404B90 {
  unsigned flags;
  char pad[0x58];
  int f5c;
} Obj_82404B90;
extern void fn_824BF8A8(void *ctx, Evt_82404B90 *e);
extern char lbl_821B7C80[];

static void post(void *ctx, const char *name, int kind)
{
  Evt_82404B90 e;
  e.name = name;
  e.kind = kind;
  fn_824BF8A8(ctx, &e);
}

void fn_82404B90(Obj_82404B90 *o, void *ctx)
{
  if ((o->flags & 2) != 0) {
    post(ctx, 0, 1);
  }
  if ((o->flags & 8) != 0) {
    o->f5c = 1;
    post(ctx, lbl_821B7C80, 4);
    post(ctx, "block", 4);
  }
  if ((o->flags & 0x10) != 0) {
    o->f5c = 0;
    post(ctx, lbl_821B7C80, 5);
    post(ctx, "block", 5);
  }
  if ((o->flags & 4) != 0) {
    post(ctx, 0, 2);
  }
  if ((o->flags & 0x800) != 0) {
    post(ctx, "showvideo_fighting", 7);
  }
  if ((o->flags & 1) != 0) {
    post(ctx, "getready", 7);
  }
  if ((o->flags & 1) != 0 || (o->flags & 0x400) != 0) {
    post(ctx, lbl_821B7C80, 7);
  }
  if ((o->flags & 0x20) != 0) {
    post(ctx, lbl_821B7C80, 8);
  }
  if ((o->flags & 0x100) != 0) {
    post(ctx, lbl_821B7C80, 9);
  }
  if ((o->flags & 0x40) != 0) {
    post(ctx, "block", 9);
    post(ctx, "block", 7);
  }
  if ((o->flags & 0x80) != 0) {
    post(ctx, "block", 8);
  }
  if ((o->flags & 0x100) != 0) {
    post(ctx, "ko", 7);
    post(ctx, "showvideo_knockdown", 7);
  }
  if ((o->flags & 0x200) != 0) {
    post(ctx, "ko", 8);
  }
  o->flags = 0;
}
