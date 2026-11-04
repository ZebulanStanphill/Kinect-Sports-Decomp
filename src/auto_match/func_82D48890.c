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
typedef struct Ar_82D48890 { void **vt; } Ar_82D48890;
typedef struct Obj_82D48890 { char pad[0x44]; int *items; int count; int flags; } Obj_82D48890;
extern void fn_82CE3DC8(Obj_82D48890 *, Ar_82D48890 *, char *);
extern unsigned fn_82CFF8D0(int *, unsigned);
extern char lbl_8323C494[];

void fn_82D48890(Obj_82D48890 *o, Ar_82D48890 *ar)
{
  unsigned h;
  int i;
  int off;
  Obj_82D48890 *self = o;

  if ((self->flags & (int)0x80000000) == 0) {
    h = fn_82CFF8D0(self->items, self->flags << 2);
    ((void (*)(Ar_82D48890 *, int, const char *, int *, int, unsigned))ar->vt[5])(ar, 3, "ChildPtrs", self->items, self->count << 2, h);
  }
  i = 0;
  if (0 < self->count) {
    do {
      ((void (*)(Ar_82D48890 *, int, int, int))ar->vt[3])(ar, 0, self->items[i], 0);
      i++;
    } while (i < self->count);
  }
  fn_82CE3DC8(self, ar, lbl_8323C494);
}
