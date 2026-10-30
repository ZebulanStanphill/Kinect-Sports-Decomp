typedef struct Buf_828BFA20 {
  void *p;
  unsigned int size;
  unsigned int cap;
} Buf_828BFA20;
typedef struct Obj_828BFA20 {
  void *vt0;
  char pad04[0x4c];
  void *vt50;
  char pad54[0x84 - 0x54];
  Buf_828BFA20 buf;
} Obj_828BFA20;

extern char lbl_82025C44[];
extern char lbl_82025C48[];
extern void fn_8265CA20(void *p);
extern void fn_828BDE70(Obj_828BFA20 *o);
static void Clear(Buf_828BFA20 *b)
{
  if (b->p != 0) {
    fn_8265CA20(b->p);
  }
  b->p = 0;
  b->size = 0;
  b->cap = 0;
}
Obj_828BFA20 *fn_828BFA20(Obj_828BFA20 *self, unsigned int flags)
{
  self->vt0 = lbl_82025C48;
  self->vt50 = lbl_82025C44;
  Clear(&self->buf);
  fn_828BDE70(self);
  if (flags & 1) {
    fn_8265CA20(self);
  }
  return self;
}
