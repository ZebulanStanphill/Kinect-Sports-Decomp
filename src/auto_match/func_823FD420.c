typedef struct SP_823FD420 { void *p; void *rc; } SP_823FD420;
typedef struct Obj_823FD420 {
  void *vt;
  int f4;
  int pad[4];
  SP_823FD420 a;
  SP_823FD420 b;
  SP_823FD420 c;
  SP_823FD420 d;
} Obj_823FD420;
extern char lbl_821B7324[];
extern void fn_822315A0(void *);
extern unsigned char fn_8223AAC0(void *);
extern void fn_82365BD8(SP_823FD420 *, SP_823FD420 *);

static __inline void Assign_823FD420(SP_823FD420 *dst, SP_823FD420 *src)
{
  void *rc;
  void *ptr;
  dst->p = 0;
  dst->rc = 0;
  rc = src->rc;
  ptr = src->p;
  if (rc != 0 && fn_8223AAC0(rc) != 0) {
    if (dst->rc != 0) {
      fn_822315A0(dst->rc);
    }
    dst->rc = rc;
    dst->p = ptr;
  }
}

Obj_823FD420 *fn_823FD420(Obj_823FD420 *self, SP_823FD420 *p2, SP_823FD420 *p3, SP_823FD420 *p4, SP_823FD420 *p5)
{
  self->f4 = 0;
  self->vt = lbl_821B7324;
  fn_82365BD8(&self->a, p2);
  fn_82365BD8(&self->b, p3);
  Assign_823FD420(&self->c, p4);
  fn_82365BD8(&self->d, p5);
  if (p2->rc != 0) {
    fn_822315A0(p2->rc);
  }
  if (p3->rc != 0) {
    fn_822315A0(p3->rc);
  }
  if (p4->rc != 0) {
    fn_822315A0(p4->rc);
  }
  if (p5->rc != 0) {
    fn_822315A0(p5->rc);
  }
  return self;
}
