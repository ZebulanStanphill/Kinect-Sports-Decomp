extern void fn_82FA5190(void *, void *);
extern void fn_83036C28(void *);
extern void *lbl_831BC768;
extern void *lbl_831BC770;
extern char lbl_831BC7FC[];

typedef struct IObj_8300DD58 { struct { void *f0; void (*f4)(struct IObj_8300DD58 *, char *); } *vt; } IObj_8300DD58;
typedef struct { int a; IObj_8300DD58 *p; } Elem_8300DD58;
typedef struct { Elem_8300DD58 *begin; Elem_8300DD58 *end; Elem_8300DD58 *cap; } Vec_8300DD58;
typedef struct { Vec_8300DD58 v[5]; } Obj_8300DD58;

void fn_8300DD58(Obj_8300DD58 *o)
{
  unsigned i;
  int k;
  Vec_8300DD58 *w;
  IObj_8300DD58 *e;

  for (i = 0; i < (unsigned)(((char *)o->v[0].end - (char *)o->v[0].begin) >> 3); i++) {
    fn_83036C28(o->v[0].begin[i].p);
    fn_82FA5190(lbl_831BC770, o->v[0].begin[i].p);
  }
  w = &o->v[1];
  k = 4;
  do {
    for (i = 0; i < (unsigned)(((char *)w->end - (char *)w->begin) >> 3); i++) {
      e = w->begin[i].p;
      if (e != 0) {
        e->vt->f4(e, lbl_831BC7FC);
        w->begin[i].p = 0;
      }
    }
    if (w->begin != 0) {
      w->end = w->begin;
      fn_82FA5190(lbl_831BC768, w->begin);
      w->begin = 0;
      w->end = 0;
      w->cap = 0;
    }
    w++;
  } while (--k != 0);
  if (o->v[0].begin != 0) {
    o->v[0].end = o->v[0].begin;
    fn_82FA5190(lbl_831BC768, o->v[0].begin);
    o->v[0].begin = 0;
    o->v[0].end = 0;
    o->v[0].cap = 0;
  }
}
