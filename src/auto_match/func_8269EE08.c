typedef struct Res Res;
typedef struct Sub Sub;

typedef struct {
  void *pad[13];
  void (*fn34)(Sub *self, void *a, Res *b);
} SubVtbl;
struct Sub {
  SubVtbl *vtbl;
};

struct Res {
  int pad0;
  int pad4;
  unsigned int refs;
  int padc;
  Sub sub;
};

typedef struct Base Base;
typedef struct {
  void *pad[57];
  Res *(*fne4)(Base *self);
} BaseVtbl;
struct Base {
  BaseVtbl *vtbl;
};

typedef struct {
  int pad0;
  Res *cur;
} Iface;

extern void fn_826824B0(Res *r);

void fn_8269EE08(Iface *self, void *param_2, Res *param_3)
{
  Res *r;
  Sub *s;

  r = ((Base *)((char *)self - 0x68))->vtbl->fne4((Base *)((char *)self - 0x68));
  if (r != 0) {
    r->refs = (r->refs + 1) & 0x8fffffff;
    s = &r->sub;
    s->vtbl->fn34(s, param_2, param_3);
  }
  if (param_3 != 0) {
    param_3->refs = (param_3->refs + 1) & 0x8fffffff;
  }
  if (self->cur != 0) {
    fn_826824B0(self->cur);
  }
  self->cur = param_3;
  if (r != 0) {
    fn_826824B0(r);
  }
}
