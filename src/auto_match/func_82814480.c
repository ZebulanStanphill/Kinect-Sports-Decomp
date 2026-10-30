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
typedef struct { char p0[0x10]; unsigned flags; } Flg_82814480;
typedef struct { char p0[0x51]; unsigned char count; char p1[10]; void *a5c; char p2[0x10]; void *a70; } Inner_82814480;
typedef struct {
  char p0[0x10]; unsigned flags; char p1[0x8];
  Inner_82814480 *inner; Flg_82814480 *f20; char p2[0xc]; char *tab;
} Obj_82814480;

void fn_82814480(Obj_82814480 *o, void (*cb)(void *))
{
  unsigned i; void *v; Flg_82814480 *f;
  f = o->f20;
  if (f != 0 && (f->flags & 0x4000) != 0) {
    cb(f);
  }
  if ((o->flags & 0x100) != 0 && o->inner->count != 0) {
    i = 0;
    do {
      v = *(void **)(i * 0x21 + o->tab + 0xd);
      if (v != 0) cb(v);
      i = (i + 1) & 0xff;
    } while (i < o->inner->count);
  }
  if ((o->flags & 0x20) != 0) {
    cb(o->inner->a5c);
    v = o->inner->a70;
    if (v != 0) cb(v);
  }
  if ((o->flags & 0x10) != 0) cb(o);
}
