extern int fn_828E9D60(void *p, int t);
extern int fn_828E9D90(void *p);

typedef struct Node Node;
typedef struct {
  void *f[5];
  void (*update)(Node *self, void *p, int z);
} NodeVt;
struct Node { NodeVt *vt; };

typedef struct {
  char pad[0x68];
  Node *n0; int p0;
  Node *n1; int p1;
  Node *n2; int p2;
  Node *n3; int p3;
  Node *n4; int p4;
  Node *n5; int p5;
  Node *n6;
} S;

int fn_82251848(S *s, void *p)
{
  int t0;
  int d;

  t0 = fn_828E9D90(p);
  s->n0->vt->update(s->n0, p, 0);
  s->n1->vt->update(s->n1, p, 0);
  s->n2->vt->update(s->n2, p, 0);
  s->n3->vt->update(s->n3, p, 0);
  s->n4->vt->update(s->n4, p, 0);
  s->n5->vt->update(s->n5, p, 0);
  s->n6->vt->update(s->n6, p, 0);
  d = fn_828E9D90(p) - t0;
  fn_828E9D60(p, t0);
  return d;
}
