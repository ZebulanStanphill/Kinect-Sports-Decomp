typedef struct Sp_8223A0D0 { void *px; int *rep; } Sp_8223A0D0;
typedef struct Obj_8223A0D0 {
  void *vt;
  Sp_8223A0D0 sp;
  char other[4];
} Obj_8223A0D0;
extern void fn_822315A0(int *);
extern unsigned char fn_8223AAC0(int *);
extern void fn_8223B688(void *, void *);
extern char lbl_8219689C[];

Obj_8223A0D0 *fn_8223A0D0(Obj_8223A0D0 *self, char *src)
{
  Sp_8223A0D0 *d;
  Sp_8223A0D0 *s;
  int *rep;
  void *px;
  if (src != 0) {
    s = (Sp_8223A0D0 *)(src + 4);
  } else {
    s = 0;
  }
  d = &self->sp;
  d->px = 0;
  d->rep = 0;
  rep = s->rep;
  px = s->px;
  if (rep != 0 && fn_8223AAC0(rep) != 0) {
    if (d->rep != 0) {
      fn_822315A0(d->rep);
    }
    d->rep = rep;
    d->px = px;
  }
  self->vt = lbl_8219689C;
  fn_8223B688(self->other, src + 0xc);
  return self;
}
