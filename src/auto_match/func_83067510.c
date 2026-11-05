extern void fn_83065BA8(void *);
extern char lbl_8217E9E8[];

void fn_83067510(void **p)
{
  *p = lbl_8217E9E8;
  if (p[1] != 0) {
    fn_83065BA8(p[1]);
  }
  if (p[2] != 0) {
    fn_83065BA8(p[2]);
  }
}
