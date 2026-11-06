typedef struct Rc_8273D9E8 { int f0, f4; unsigned refs; } Rc_8273D9E8;
typedef struct Ref_8273D9E8 { int f0; Rc_8273D9E8 *rc; } Ref_8273D9E8;
typedef struct Src_8273D9E8 { int f0; int rc; } Src_8273D9E8;
extern void fn_826824B0(Rc_8273D9E8 *);

Ref_8273D9E8 *fn_8273D9E8(Ref_8273D9E8 *self, Src_8273D9E8 *src)
{
  int *p;
  int r;

  p = src != 0 ? &src->rc : 0;
  r = *p;
  if (r != 0) {
    Rc_8273D9E8 *q = (Rc_8273D9E8 *)r;
    q->refs = (q->refs + 1) & 0x8fffffff;
  }
  if (self->rc != 0) {
    fn_826824B0(self->rc);
  }
  self->rc = (Rc_8273D9E8 *)*p;
  return self;
}
