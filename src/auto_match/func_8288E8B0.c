typedef struct Buf_8288E8B0 {
  void *p;
  unsigned int size;
  unsigned int cap;
} Buf_8288E8B0;
typedef struct Obj_8288E8B0 {
  void *vt0;
  char pad04[0x4c];
  void *vt50;
  char pad54[0x4ac - 0x54];
  Buf_8288E8B0 buf;
} Obj_8288E8B0;

extern char lbl_820236C8[];
extern char lbl_820236D0[];
extern void fn_8265CA20(void *p);
extern void fn_828BDE70(Obj_8288E8B0 *o);
static void Clear(Buf_8288E8B0 *b)
{
  if (b->p != 0) {
    fn_8265CA20(b->p);
  }
  b->p = 0;
  b->size = 0;
  b->cap = 0;
}
Obj_8288E8B0 *fn_8288E8B0(Obj_8288E8B0 *self, unsigned int flags)
{
  self->vt0 = lbl_820236D0;
  self->vt50 = lbl_820236C8;
  Clear(&self->buf);
  fn_828BDE70(self);
  if (flags & 1) {
    fn_8265CA20(self);
  }
  return self;
}
