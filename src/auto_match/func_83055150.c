extern char lbl_8217E0F0[];
extern char lbl_8217E0C0[];
extern void fn_83050C48(void *);

void fn_83055150(void **p)
{
  p[0] = lbl_8217E0F0;
  p[30] = lbl_8217E0C0;
  fn_83050C48(p);
}
