typedef unsigned int uint;

typedef struct Plane_82A90828 {
  uint pad[10];
  uint a;     /* 0x28 */
  uint b;     /* 0x2c */
  uint c;     /* 0x30 */
} Plane_82A90828;

typedef struct Elem_82A90828 {
  Plane_82A90828 p[3];
} Elem_82A90828;

typedef struct Hdr_82A90828 {
  uint count;
  uint pad;
  Elem_82A90828 e[1];
} Hdr_82A90828;

typedef struct Out_82A90828 {
  uint v[12];
} Out_82A90828;

typedef struct Obj_82A90828 {
  uint pad[3];
  uint count;   /* 0x0c */
} Obj_82A90828;

extern void fn_82A8F868(Obj_82A90828 *o, Elem_82A90828 *e, int a, uint offset, Out_82A90828 *out);

static __forceinline uint PlaneSize_82A90828(const Plane_82A90828 *p)
{
  return p->a + p->b + p->c;
}

void fn_82A90828(Obj_82A90828 *o, Hdr_82A90828 *h, int param_3, uint offset, Out_82A90828 *out)
{
  uint n;
  uint i;

  n = (o->count < h->count) ? o->count : h->count;
  for (i = 0; i < n; i++) {
    fn_82A8F868(o, &h->e[i], param_3, offset, &out[i]);
    offset += PlaneSize_82A90828(&h->e[i].p[0]) + PlaneSize_82A90828(&h->e[i].p[2]) +
              PlaneSize_82A90828(&h->e[i].p[1]);
  }
}
