typedef struct E2_8248BAC0 { struct { void (*dtor)(struct E2_8248BAC0 *, int); } *vt; int pad[7]; } E2_8248BAC0; /* 0x20 bytes */
typedef struct { char b[0x68]; } E1_8248BAC0;
typedef struct { E1_8248BAC0 *first, *last, *end; } V1_8248BAC0;
typedef struct { E2_8248BAC0 *first, *last, *end; } V2_8248BAC0;
typedef struct {
  void *vt; int pad4[4]; void *p14;
  V1_8248BAC0 v1;
  int pad24[3];
  V2_8248BAC0 v2;
} Obj_8248BAC0;
extern void fn_8248BC38(void *, int);
extern void fn_8265CA20(void *);
extern char lbl_821BEA64[];

void fn_8248BAC0(Obj_8248BAC0 *o)
{
  V1_8248BAC0 *v1 = &o->v1;
  V2_8248BAC0 *v2;
  o->vt = lbl_821BEA64;
  while (v1->first != v1->last) {
    if (v1->first != v1->last) {
      fn_8248BC38(v1->last - 1, 0);
      v1->last = v1->last - 1;
    }
  }
  v2 = &o->v2;
  while (v2->first != v2->last) {
    if (v2->first != v2->last) {
      (v2->last - 1)->vt->dtor(v2->last - 1, 0);
      v2->last = v2->last - 1;
    }
  }
  if (o->p14 != 0) fn_8248BC38(o->p14, 1);
  o->p14 = 0;
  if (v2->first != 0) {
    E2_8248BAC0 *p = v2->first;
    E2_8248BAC0 *e = v2->last;
    for (; p != e; p++) p->vt->dtor(p, 0);
    fn_8265CA20(v2->first);
  }
  v2->first = 0;
  v2->last = 0;
  v2->end = 0;
  if (v1->first != 0) {
    E1_8248BAC0 *p = v1->first;
    if (p != v1->last) {
      E1_8248BAC0 *e = v1->last;
      do {
        fn_8248BC38(p, 0);
        p++;
      } while (p != e);
    }
    fn_8265CA20(v1->first);
  }
  v1->first = 0;
  v1->last = 0;
  v1->end = 0;
}
