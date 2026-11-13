extern void *fn_8265C9E0(int);
extern int fn_8236D8F8(void *, int, int);
extern char lbl_821B3A90[];
extern char lbl_821B3AE0[];
void *fn_823762F0(int param_1, int param_2)
{
  unsigned *p = (unsigned *)fn_8265C9E0(0x98);
  if (p != 0) {
    unsigned *z = p + 0x22;
    fn_8236D8F8(p, param_2, param_1);
    p[0] = (unsigned)lbl_821B3A90;
    p[0x1a] = (unsigned)lbl_821B3AE0;
    z[0] = 0; z[1] = 0; z[2] = 0;
    return p;
  }
  return 0;
}
