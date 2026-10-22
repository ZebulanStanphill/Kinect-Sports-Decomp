typedef struct Peer Peer;
typedef struct {
  void *f[12];
  void (*f30)(Peer *p, int a, int b);
} PeerVtbl;
struct Peer { PeerVtbl *vt; };

typedef struct Self Self;
typedef struct {
  void (*f0)(Self *s, int flag);
} SelfVtbl;
struct Self {
  SelfVtbl *vt;
  int f4;
  int f8;
  int a;
  int b;
  Peer *p1;
  Peer *p2;
  int s1;
  int s2;
};

void fn_82D6A718(Self *self)
{
  if (self->s1 == 0x1e) {
    self->p1->vt->f30(self->p1, self->a, self->b);
  }
  if (self->s2 == 0x1e) {
    self->p2->vt->f30(self->p2, self->b, self->a);
  }
  self->vt->f0(self, 1);
}
