typedef struct VObj VObj;
typedef struct {
  void *s0;
  void *s1;
  void *s2;
  void *s3;
  void (*fn10)(VObj *, void *, char *);
} VObjVt;
struct VObj { VObjVt *vt; };

typedef struct {
  VObj *obj;
  int pad;
} Slot;

typedef struct {
  int pad0;
  int pad4;
  unsigned int off[9];
  Slot slot[9];
} Obj;

void fn_823F90A0(Obj *p, void *a, char *base)
{
  p->slot[0].obj->vt->fn10(p->slot[0].obj, a, p->off[0] + base);
  p->slot[1].obj->vt->fn10(p->slot[1].obj, a, p->off[1] + base);
  p->slot[2].obj->vt->fn10(p->slot[2].obj, a, p->off[2] + base);
  p->slot[3].obj->vt->fn10(p->slot[3].obj, a, p->off[3] + base);
  p->slot[4].obj->vt->fn10(p->slot[4].obj, a, p->off[4] + base);
  p->slot[5].obj->vt->fn10(p->slot[5].obj, a, p->off[5] + base);
  p->slot[6].obj->vt->fn10(p->slot[6].obj, a, p->off[6] + base);
  p->slot[7].obj->vt->fn10(p->slot[7].obj, a, p->off[7] + base);
  p->slot[8].obj->vt->fn10(p->slot[8].obj, a, p->off[8] + base);
}
