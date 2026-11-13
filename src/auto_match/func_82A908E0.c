typedef struct Plane_82A908E0 {
  unsigned int pad[10];
  unsigned int a;     /* 0x28 */
  unsigned int b;     /* 0x2c */
  unsigned int c;     /* 0x30 */
} Plane_82A908E0;

typedef struct Elem_82A908E0 {
  Plane_82A908E0 p[3];
} Elem_82A908E0;

typedef struct Hdr_82A908E0 {
  unsigned int count;
  unsigned int pad;
  Elem_82A908E0 e[1];
} Hdr_82A908E0;

typedef struct Out_82A908E0 {
  unsigned int v[12];
} Out_82A908E0;

typedef struct Obj_82A908E0 {
  unsigned int pad[4];
  unsigned int count;   /* 0x10 */
} Obj_82A908E0;

extern void fn_82A8F8E8(Obj_82A908E0 *o, Elem_82A908E0 *e, int a, unsigned int offset, Out_82A908E0 *out);

static __forceinline unsigned int PlaneSize_82A908E0(const Plane_82A908E0 *p)
{
  return p->a + p->b + p->c;
}

void fn_82A908E0(Obj_82A908E0 *o, Hdr_82A908E0 *h, int param_3, unsigned int offset, Out_82A908E0 *out)
{
  unsigned int n;
  unsigned int i;

  n = (o->count < h->count) ? o->count : h->count;
  for (i = 0; i < n; i++) {
    fn_82A8F8E8(o, &h->e[i], param_3, offset, &out[i]);
    offset += PlaneSize_82A908E0(&h->e[i].p[0]) + PlaneSize_82A908E0(&h->e[i].p[2]) +
              PlaneSize_82A908E0(&h->e[i].p[1]);
  }
}
