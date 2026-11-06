struct O;
typedef struct { void *s0; void (*f1)(struct O *); void (*f2)(struct O *, float); } VT;
typedef struct O { VT *vt; } O;
void fn_827EF828(O *o, float f)
{
  o->vt->f1(o);
  o->vt->f2(o, f);
}
