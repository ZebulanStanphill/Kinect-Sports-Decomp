typedef struct O O;
typedef struct { void *f[8]; } Vt;
struct O { Vt *vt; };
void fn_82E09470(O *o, void **list)
{
  void *e;
  while ((e = *list) != 0) {
    ((void (*)(O *, void *, int))o->vt->f[7])(o, e, 0);
    list++;
  }
}
