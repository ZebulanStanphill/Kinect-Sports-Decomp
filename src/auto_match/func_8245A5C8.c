extern void *fn_8245A478(void *);
extern void *fn_8265C9E0(unsigned);
extern void *lbl_83276588;

void *fn_8245A5C8(void)
{
  void *m;
  void *p;
  if (lbl_83276588 == 0) {
    m = fn_8265C9E0(0x800e8);
    p = m ? fn_8245A478(m) : 0;
    lbl_83276588 = p;
    return p;
  }
  return lbl_83276588;
}
