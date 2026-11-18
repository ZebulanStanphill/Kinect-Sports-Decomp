extern int fn_82681E98();
extern int fn_8269A800();
extern unsigned int fn_8269F500();
typedef struct O_82725658 { struct { int s[2]; int (*f8)(struct O_82725658 *); int s2[0x13]; unsigned (*f58)(struct O_82725658 *); } *vt; int a, b; int c; } O_82725658;
typedef struct { int vt; int pad; O_82725658 *obj; } S_82725658;

void fn_82725658(S_82725658 *self)
{
  int *ch;

  if (self->obj != 0 && self->obj->vt->f8(self->obj) == 4) {
    ch = self->obj != 0 ? (int *)((char *)self->obj - 0x68) : 0;
    if (ch[5] < 0x4000) {
      int **name;
      unsigned int obj;
      /* a plain ternary keeps the null test of its result in cr6; `obj = x; if (!obj) obj = f();`
         tests f's result in cr0 instead */
      obj = ch[0x20] ? (unsigned int)ch[0x20] : fn_8269F500(ch);
      if (obj != 0) {
        name = (int **)(obj + 8);
      } else {
        obj = ((O_82725658 *)ch)->vt->f58((O_82725658 *)ch);
        name = (int **)(*(unsigned int *)(obj + 0x78) + 8);
      }
      fn_82681E98(ch + 3, "%s.removeMovieClip() failed - depth must be >= 0\n", **name);
    } else {
      fn_8269A800(ch);
    }
  }
}
