typedef struct {
  unsigned int flags;
  int pad4;
  char *data;
  unsigned int countC;
  int *index;
} Desc_8295E268;

typedef struct Obj_8295E268 {
  char pad[0x104];
  Desc_8295E268 *desc;
} Obj_8295E268;

extern int fn_8295D318(Obj_8295E268 *, int, int *, unsigned int, void *, void *, void *, unsigned int, int, int, int, int);

int fn_8295E268(Obj_8295E268 *o)
{
  Desc_8295E268 *d = o->desc;
  unsigned int n = d->flags & 0xfffff;
  return fn_8295D318(o, 0x5a, d->index, d->countC, d->data, d->data + n * 4, d->data + n * 8, n, 0, 0, 0, 0);
}
