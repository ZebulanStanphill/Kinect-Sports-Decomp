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
typedef struct S30_822A8BC0 { char b[0x30]; } S30_822A8BC0;
typedef struct Obj_822A8BC0 Obj_822A8BC0;
typedef struct Vt_822A8BC0 {
  void *f0[5];
  void (*f14)(Obj_822A8BC0 *, int);
  Obj_822A8BC0 *(*f18)(Obj_822A8BC0 *);
  void *f1c[5];
  void (*f30)(S30_822A8BC0 *, Obj_822A8BC0 *, int);
} Vt_822A8BC0;
struct Obj_822A8BC0 {
  Vt_822A8BC0 *vt;
};
typedef struct Vec_822A8BC0 {
  char *first;
  char *last;
} Vec_822A8BC0;
typedef struct Self_822A8BC0 {
  char pad[0x44];
  Vec_822A8BC0 vec;
  char pad4c[0x10];
  unsigned char f5c;
} Self_822A8BC0;

extern void fn_822924C0(char *, char *);
extern void fn_822933E8(char *, char *);
extern int fn_822A8928(int, int, int, S30_822A8BC0 *);
extern unsigned char fn_828647C0(char *, int);
extern int fn_828647D8(S30_822A8BC0 *);
extern void fn_82864848(S30_822A8BC0 *);
extern void fn_82864898(S30_822A8BC0 *);
extern Obj_822A8BC0 *fn_82864E90(void);
extern int lbl_8327F878;

int fn_822A8BC0(Self_822A8BC0 *p, int key)
{
  Vec_822A8BC0 *v;
  char *it;
  char *end;
  char *next;
  char *d;
  Obj_822A8BC0 *o;
  Obj_822A8BC0 *t;
  S30_822A8BC0 a;
  S30_822A8BC0 b;
  int g;
  int hr;

  if (p->f5c != 0) {
    return 0x80004005;
  }
  end = p->vec.last;
  v = &p->vec;
  it = v->first;
  for (; it != end; it += 0x24) {
    if (fn_828647C0(it, key) != 0) {
      break;
    }
  }
  if (it != p->vec.last) {
    t = fn_82864E90();
    o = t->vt->f18(t);
    o->vt->f30(&a, o, key);
    fn_82864848(&b);
    g = lbl_8327F878;
    hr = fn_822A8928(g, 0, fn_828647D8(&a), &b);
    if (hr < 0) {
      fn_82864898(&b);
      fn_82864898(&a);
      return 0x80004005;
    }
    t = fn_82864E90();
    o = t->vt->f18(t);
    o->vt->f14(o, key);
    next = it + 0x24;
    end = v->last;
    if (next != end) {
      d = (char *)(it - next);
      do {
        fn_822924C0(d + (int)next, next);
        next += 0x24;
      } while (next != end);
    }
    fn_822933E8(v->last - 0x24, v->last);
    v->last = v->last - 0x24;
    fn_82864898(&b);
    fn_82864898(&a);
  }
  return 0;
}
