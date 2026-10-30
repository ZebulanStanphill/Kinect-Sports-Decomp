typedef struct {
  union { char buf[16]; char *ptr; } u;
  unsigned int size;
  unsigned int res;
} Str_828B9F30;
typedef struct {
  void *vt;
  char pad4[4];
  char m8[0x10];
  char m18[0x5c];
  Str_828B9F30 s;
  char pad8c[0xc];
  void *f98;
  char pad9c[0x1c];
  char mb8[1];
} Obj_828B9F30;
extern int lbl_82025400[];
extern void fn_822315A0(void *);
extern void fn_822360C8(void *);
extern void fn_8265CA20(void *);
extern void fn_828AC488(void *);

static void Tidy(Str_828B9F30 *s)
{
  if (s->res >= 0x10) fn_8265CA20(s->u.ptr);
  s->size = 0;
  s->res = 0xf;
  s->u.buf[0] = 0;
}
void fn_828B9F30(Obj_828B9F30 *p)
{
  p->vt = lbl_82025400;
  fn_828AC488(p->mb8);
  if (p->f98 != 0) fn_822315A0(p->f98);
  Tidy(&p->s);
  fn_822360C8(p->m18);
  fn_822360C8(p->m8);
}
