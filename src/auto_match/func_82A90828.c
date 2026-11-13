typedef struct Plane_82A90828 {
  unsigned int pad[10];
  unsigned int a;     /* 0x28 */
  unsigned int b;     /* 0x2c */
  unsigned int c;     /* 0x30 */
} Plane_82A90828;

typedef struct Elem_82A90828 {
  Plane_82A90828 p[3];
} Elem_82A90828;

typedef struct Hdr_82A90828 {
  unsigned int count;
  unsigned int pad;
  Elem_82A90828 e[1];
} Hdr_82A90828;

typedef struct Out_82A90828 {
  unsigned int v[12];
} Out_82A90828;

typedef struct Obj_82A90828 {
  unsigned int pad[3];
  unsigned int count;   /* 0x0c */
} Obj_82A90828;

extern void fn_82A8F868(Obj_82A90828 *o, Elem_82A90828 *e, int a, unsigned int offset, Out_82A90828 *out);

static __forceinline unsigned int PlaneSize_82A90828(const Plane_82A90828 *p)
{
  return p->a + p->b + p->c;
}

void fn_82A90828(Obj_82A90828 *o, Hdr_82A90828 *h, int param_3, unsigned int offset, Out_82A90828 *out)
{
  unsigned int n;
  unsigned int i;

  n = (o->count < h->count) ? o->count : h->count;
  for (i = 0; i < n; i++) {
    fn_82A8F868(o, &h->e[i], param_3, offset, &out[i]);
    offset += PlaneSize_82A90828(&h->e[i].p[0]) + PlaneSize_82A90828(&h->e[i].p[2]) +
              PlaneSize_82A90828(&h->e[i].p[1]);
  }
}
