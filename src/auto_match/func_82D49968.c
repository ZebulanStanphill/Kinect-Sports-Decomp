typedef struct Itf_82D49968 { struct { void *s[4]; void (*f10)(struct Itf_82D49968 *, unsigned); } *vt; } Itf_82D49968;
typedef struct { int pad0[2]; int *base; int pad[2]; int *idx; unsigned n; int pad2; int *rest; } In_82D49968;
typedef struct { int pad[2]; In_82D49968 *in; struct { int pad[4]; Itf_82D49968 itf; } *sub; } Self_82D49968;

void fn_82D49968(Self_82D49968 *self, unsigned i)
{
  unsigned v; if (i < self->in->n) v = self->in->base[self->in->idx[i] + 1]; else v = self->in->rest[i - self->in->n];
  self->sub->itf.vt->f10(&self->sub->itf, v);
}
