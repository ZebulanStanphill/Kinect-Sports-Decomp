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
extern void fn_828B82D0(void *);
extern char lbl_820252D0[];

typedef struct Child_828B8888 Child_828B8888;
typedef struct {
  void (*del)(Child_828B8888 *, int);
  void (*s4)(Child_828B8888 *);
  void (*s8)(Child_828B8888 *);
} ChildVt_828B8888;
struct Child_828B8888 { ChildVt_828B8888 *vt; };
typedef struct {
  void *vt;
  char pad[0x4c];
  Child_828B8888 *child;
} Obj_828B8888;

void fn_828B8888(Obj_828B8888 *self)
{
  self->vt = lbl_820252D0;
  if (self->child != 0) {
    self->child->vt->s8(self->child);
    if (self->child != 0) {
      self->child->vt->del(self->child, 1);
    }
    self->child = 0;
  }
  fn_828B82D0(self);
}
