typedef struct Obj_82BF7940 { int *vt; int a; int b; int c; } Obj_82BF7940;
extern void fn_82BE8CE0(Obj_82BF7940 *self);
extern int fn_82BEC810(char *s);
extern int fn_82BFA920(char *a, char *b, char *out);
extern unsigned int lbl_820EBC10;

Obj_82BF7940 *fn_82BF7940(Obj_82BF7940 *self, int a, char *s1, char *s2)
{
  char buf[256];
  fn_82BE8CE0(self);
  self->b = a;
  self->c = 0;
  self->vt = (int *)&lbl_820EBC10;
  if (s1 != 0 && *s1 != 0) {
    if (s2 != 0 && *s2 != 0) {
      if (fn_82BFA920(s1, s2, buf) == 0) {
        return self;
      }
      self->c = fn_82BEC810(buf);
    } else {
      self->c = fn_82BEC810(s1);
    }
  }
  return self;
}
