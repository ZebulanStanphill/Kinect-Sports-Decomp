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
typedef struct E_82423428 { int a; void *p; int c; int d; } E_82423428;
typedef struct Vec_82423428 { E_82423428 *first; E_82423428 *last; E_82423428 *end; } Vec_82423428;
typedef struct Obj_82423428 { void *vt; int pad[2]; int sub[4]; Vec_82423428 v1; int pad2; Vec_82423428 v2; } Obj_82423428;
extern char lbl_821B85D0[];
extern char lbl_821B86B0[];
extern void fn_824248C8(void *);
extern void fn_8265CA20(void *);
static __forceinline void freeVec(Vec_82423428 *v)
{
  E_82423428 *e;
  if (v->first != 0) {
    for (e = v->first; e != v->last; e++) {
    }
    fn_8265CA20(v->first);
  }
  v->first = 0;
  v->last = 0;
  v->end = 0;
}
Obj_82423428 *fn_82423428(Obj_82423428 *o, unsigned flags)
{
  E_82423428 *e;
  void *p;
  e = o->v2.first;
  o->vt = lbl_821B86B0;
  if (e != o->v2.last) {
    do {
      p = e->p;
      if (p != 0) {
        fn_824248C8(p);
        fn_8265CA20(p);
      }
      e++;
    } while (e != o->v2.last);
  }
  freeVec(&o->v2);
  freeVec(&o->v1);
  fn_824248C8(o->sub);
  o->vt = lbl_821B85D0;
  if (flags & 1) {
    fn_8265CA20(o);
  }
  return o;
}
