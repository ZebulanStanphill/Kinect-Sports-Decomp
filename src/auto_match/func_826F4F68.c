typedef struct Obj Obj;
typedef void (*VFn)(Obj *, int);
struct Obj { VFn *vt; };
typedef struct { Obj **data; unsigned int size; unsigned int cap; } Vec;
typedef struct {
  char pad[0x2f0];
  Vec a; /* 0x2f0 */
  Vec b; /* 0x2fc */
  Vec c; /* 0x308 */
} Self;
extern void fn_826F4470(Vec *v, int x);

void fn_826F4F68(Self *p)
{
  unsigned int i;
  for (i = 0; i < p->b.size; i++)
    p->b.data[i]->vt[0](p->b.data[i], 0);
  for (i = 0; i < p->a.size; i++)
    p->a.data[i]->vt[0](p->a.data[i], 0);
  for (i = 0; i < p->c.size; i++)
    p->c.data[i]->vt[0](p->c.data[i], 0);
  fn_826F4470(&p->b, 0);
  fn_826F4470(&p->a, 0);
  fn_826F4470(&p->c, 0);
}
