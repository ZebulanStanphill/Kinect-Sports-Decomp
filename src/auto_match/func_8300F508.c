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
extern int fn_82FA5190(unsigned int, void *);
extern unsigned int lbl_8217C358;
extern unsigned int lbl_8217C35C;
extern unsigned int lbl_8217D040;
extern unsigned int lbl_831BC768;

typedef struct Ref_8300F508 {
  void (**vt)(void *, int);
  int pad[0x16];
  int refs;
} Ref_8300F508;

typedef struct Obj_8300F508 {
  void *vt0;
  void *vt1;
  int pad[11];
  Ref_8300F508 *ref;
} Obj_8300F508;

void fn_8300F508(Obj_8300F508 *self)
{
  Ref_8300F508 *r;
  unsigned int heap;

  r = self->ref;
  self->vt0 = &lbl_8217C35C;
  self->vt1 = &lbl_8217C358;
  if (r != 0) {
    int n = r->refs - 1;
    r->refs = n;
    if (n <= 0) {
      heap = lbl_831BC768;
      r->vt[0](r, 0);
      fn_82FA5190(heap, r);
    }
  }
  self->vt0 = &lbl_8217D040;
}
