typedef struct Obj_828AC880 { int pad[2]; unsigned int a, b, c, d; } Obj_828AC880;
extern void fn_8223C478(void *, int, int);
extern void fn_828E9DB8(void *, unsigned int, int);
void fn_828AC880(Obj_828AC880 *self, void *out)
{
  unsigned int words[4];
  int i;
  words[0] = self->a; words[1] = self->b; words[2] = self->c; words[3] = self->d;
  for (i = 0; i < 4; i++) {
    fn_8223C478(out, 6, 0);
    fn_828E9DB8(out, words[i], 6);
  }
}
