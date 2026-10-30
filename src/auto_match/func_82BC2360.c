struct Obj_82BC2360;
typedef struct { void *s[20]; int (*f50)(struct Obj_82BC2360 *, int, int); } Vt_82BC2360;
typedef struct Obj_82BC2360 { Vt_82BC2360 *vt; } Obj_82BC2360;

int fn_82BC2360(Obj_82BC2360 *a, Obj_82BC2360 *b)
{
  int i = 0;
  do {
    if (a->vt->f50(a, 0, i) != 1 && b->vt->f50(b, 0, i) != 1) return 0;
    i++;
  } while (i < 4);
  return 1;
}
