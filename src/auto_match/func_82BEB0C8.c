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
struct X_82BEB0C8;
typedef struct XVT_82BEB0C8 { void (*dtor)(struct X_82BEB0C8 *, int); void *pad[5]; unsigned (*f6)(struct X_82BEB0C8 *, void *); } XVT_82BEB0C8;
typedef struct X_82BEB0C8 { XVT_82BEB0C8 *vt; } X_82BEB0C8;
typedef struct D_82BEB0C8 { char pad[0x14]; const char *name; } D_82BEB0C8;
typedef struct N_82BEB0C8 { struct N_82BEB0C8 *next; int pad; D_82BEB0C8 *data; } N_82BEB0C8;
typedef struct L_82BEB0C8 { char pad[8]; int cnt; } L_82BEB0C8;
typedef struct { char pad[4]; const char *name; } Rq_82BEB0C8;
typedef struct { char pad[0x3c]; L_82BEB0C8 *list1; L_82BEB0C8 *list2; } O_82BEB0C8;
extern N_82BEB0C8 *fn_82BE5340(L_82BEB0C8 *);
extern void fn_82BE5350(L_82BEB0C8 *);
extern D_82BEB0C8 *fn_82BE5378(L_82BEB0C8 *);
extern int fn_82BEA2F0(O_82BEB0C8 *, Rq_82BEB0C8 *);
extern int fn_82BEAC00(O_82BEB0C8 *, X_82BEB0C8 *);
extern X_82BEB0C8 *fn_82BF4B98(D_82BEB0C8 *, O_82BEB0C8 *);
extern int stricmp(const char *, const char *);

unsigned char fn_82BEB0C8(O_82BEB0C8 *o, Rq_82BEB0C8 *rq)
{
  N_82BEB0C8 *n;
  D_82BEB0C8 *d;
  X_82BEB0C8 *x;
  unsigned r;
  if (rq == 0) {
    return 0;
  }
  if (o->list1 != 0) {
    for (n = fn_82BE5340(o->list1); n != 0; n = n->next) {
      d = n->data;
      if (d != 0 && stricmp(d->name, rq->name) == 0) {
        x = fn_82BF4B98(d, o);
        if (x != 0) {
          if (x->vt->f6(x, rq) == 0 && fn_82BEAC00(o, x) != 0) {
            return 1;
          }
          x->vt->dtor(x, 1);
        }
        return 0;
      }
    }
  }
  if (o->list2 != 0) {
    fn_82BE5340(o->list2);
    while (o->list2->cnt != 0) {
      if (fn_82BE5378(o->list2) != 0) {
        d = fn_82BE5378(o->list2);
        if (stricmp(rq->name, d->name) == 0) {
          x = (X_82BEB0C8 *)fn_82BE5378(o->list2);
          r = x->vt->f6(x, rq);
          return r == 0;
        }
      }
      fn_82BE5350(o->list2);
    }
  }
  return fn_82BEA2F0(o, rq) == 0;
}
