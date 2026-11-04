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
typedef struct Row_82814728 { unsigned int a58; unsigned int a5c; unsigned int f60; unsigned int f64; unsigned int f68; } Row_82814728;
typedef struct Cfg_82814728 { char pad[0x51]; unsigned char n51; } Cfg_82814728;
typedef struct Fn_82814728 { char pad[0xc]; int (*f0c)(int, unsigned int, int, unsigned int); } Fn_82814728;
typedef struct Obj_82814728 {
  char pad0[4];
  unsigned int align;
  char pad1[4];
  unsigned int flags0c;
  unsigned int flags10;
  char pad2[4];
  int h18;
  Cfg_82814728 *cfg;
  unsigned int x20;
  char pad3[0x30 - 0x24];
  unsigned char *arr;
  int base;
  char pad4[0x78 - 0x38];
  unsigned char f78;
  unsigned char idx;
  unsigned char f7a;
  unsigned char f7b;
  unsigned char f7c;
  unsigned char f7d;
} Obj_82814728;
extern void fn_828142D8(int, Fn_82814728 **);
extern unsigned char fn_8281FDF0(Obj_82814728 *, const char *);
extern void fn_82820228(unsigned int, unsigned int, unsigned int *);

int fn_82814728(Obj_82814728 *o, unsigned char flag)
{
  Cfg_82814728 *cfg = o->cfg;
  unsigned int x = o->x20;
  Row_82814728 *row = (Row_82814728 *)((unsigned char *)cfg + o->idx * 0x14 + 0x58);
  int result = 0;
  unsigned int start = row->f64 - row->f68 + row->f60;
  unsigned char i;
  unsigned int sz;
  unsigned int aligned;
  unsigned char *e;
  unsigned int off2;
  unsigned int tot;
  Fn_82814728 *fp;
  unsigned int r;
  unsigned int sh;

  if (cfg->n51 != 0) {
    i = 0;
    do {
      e = o->arr + i * 0x21;
      *(unsigned int *)(e + 0x15) = start;
      aligned = ((o->align - start + *(unsigned int *)(e + 0x1d)) - 1) & ~(o->align - 1);
      *(unsigned int *)(e + 0x19) = aligned;
      start = aligned - *(unsigned int *)(e + 0x1d) + start;
      if (x == 0) {
        sz = *(unsigned int *)(e + 9);
      }
      else {
        fn_82820228(x, i + 3, &sz);
        if (sz == 0) {
          sz = *(unsigned int *)(e + 9);
        }
      }
      off2 = flag != 0 ? 0 : start + 0x44;
      tot = off2 + sz;
      fn_828142D8(o->base + *(unsigned int *)e, &fp);
      if (fp == 0) {
        o->flags0c |= 0x800;
        result = 1;
        break;
      }
      r = fp->f0c(o->h18, tot, 1 << e[4], off2);
      *(unsigned int *)(e + 0xd) = r;
      if (r == 0) {
        result = 1;
        break;
      }
      i++;
      o->flags10 |= 0x100;
      sh = 1 << e[4];
      *(unsigned int *)(e + 0x11) = ((*(unsigned int *)(e + 0xd) + sh) - 1 & ~(sh - 1)) - *(unsigned int *)(e + 0xd);
    } while (i < cfg->n51);
  }
  o->f7a = 0;
  o->f7b = 0;
  o->f7c = 0;
  o->f7d = 0;
  o->f78 = fn_8281FDF0(o, ".data");
  return result;
}
