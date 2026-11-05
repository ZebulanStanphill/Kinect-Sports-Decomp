extern void fn_827DEA30(int *);
extern char lbl_821CB7A8[];

int *fn_825FD2F8(int a, int b, int c, int *p)
{
  if (p != 0) {
    fn_827DEA30(p);
    p[3] = 0;
    p[0] = (int)lbl_821CB7A8;
    return p;
  }
  return 0;
}
