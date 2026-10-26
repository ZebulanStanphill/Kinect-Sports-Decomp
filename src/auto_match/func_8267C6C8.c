extern void *lbl_831E7E68;
extern void fn_8267BBA0(void *);
extern void fn_8267C378(void *);

void fn_8267C6C8(void *a, void *b)
{
  if (lbl_831E7E68 == 0) {
    fn_8267BBA0(b);
    fn_8267C378(a);
    lbl_831E7E68 = b;
  }
}
