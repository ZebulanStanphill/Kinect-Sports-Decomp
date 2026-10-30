extern void *fn_8265C9E0(unsigned);
extern void fn_82381C38(void *, void *);
extern void fn_82381D68(void *, void *, int);
extern void fn_8289D6D0(void *, int);
extern int lbl_82197080[];
extern int lbl_821B52CC[];
int *fn_82241BB0(void *param_1)
{
  int *p = (int *)fn_8265C9E0(0x290);
  if (p != 0) {
    fn_82381C38(p, param_1);
    *p = (int)lbl_821B52CC;
    fn_82381D68(p + 0x3c, param_1, 1);
    fn_8289D6D0(p + 0x8e, 0);
    p[0x8e] = (int)lbl_82197080;
    return p;
  }
  return 0;
}
