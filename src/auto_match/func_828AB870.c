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
extern int fn_8240D928(void);
extern unsigned char fn_82897BA8(void *);
extern void fn_828996C8(void *, int);
extern void fn_8289AC08(void *, int, int, int, int);
extern void fn_8289D8D0(void *);
extern void fn_828A1318(void *, void *);
extern void fn_82BA02A8(void *);

typedef struct Iface_828AB870 Iface_828AB870;
typedef struct IfaceVtbl_828AB870 {
  void *s0;
  void *(*f1)(Iface_828AB870 *);
  void *s2;
  void *(*f3)(Iface_828AB870 *);
  void *(*f4)(Iface_828AB870 *);
} IfaceVtbl_828AB870;
struct Iface_828AB870 {
  IfaceVtbl_828AB870 *vtbl;
};
typedef struct Range_828AB870 {
  char pad0[0x5c];
  unsigned int lo;
  unsigned int hi;
} Range_828AB870;
typedef struct Self_828AB870 {
  char pad0[0xc];
  unsigned int val;
  char pad10[8];
  Range_828AB870 *range;
  char pad1c[4];
  Iface_828AB870 *iface;
  char pad24[4];
  void *owner;
} Self_828AB870;

void fn_828AB870(Self_828AB870 *self, unsigned int v)
{
  void *r;
  char *tab;
  int k;

  if (v < self->range->lo) return;
  if (v > self->range->hi) return;
  if (self->iface == 0 || self->iface->vtbl->f1(self->iface) == 0) {
    if (self->iface == 0 || self->iface->vtbl->f3(self->iface) == 0) {
      if (self->iface == 0) return;
      if (self->iface->vtbl->f4(self->iface) == 0) return;
      if (self->iface != 0) {
        tab = (char *)self->iface->vtbl->f4(self->iface);
      } else {
        tab = 0;
      }
      fn_8289D8D0(self->owner);
      k = (fn_8240D928() + 4) * 4;
      if (v == *(unsigned int *)(k + (int)tab)) return;
      fn_8289AC08(self, 1, 0, 1, 0);
      fn_82BA02A8(self);
      *(unsigned int *)(k + (int)tab) = v;
    } else {
      if (v == self->val) return;
      fn_8289AC08(self, 1, 0, 1, 0);
      fn_82BA02A8(self);
      self->val = v;
    }
    fn_8289AC08(self, 1, 1, 1, 0);
    if (fn_82897BA8(self->range) != 0) return;
  } else {
    if (v == self->val) return;
    fn_8289AC08(self, 1, 0, 1, 0);
    fn_82BA02A8(self);
    self->val = v;
    fn_8289AC08(self, 1, 1, 1, 0);
    if (fn_82897BA8(self->range) != 0) {
      fn_828996C8(self, -1);
      return;
    }
  }
  fn_828A1318(self->owner, self);
}
