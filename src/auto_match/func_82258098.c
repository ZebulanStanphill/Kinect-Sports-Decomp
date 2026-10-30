extern void *fn_8265C9E0(unsigned int);
extern void fn_822CA318(void *, void *);
extern char lbl_821B0AB8[];
extern char lbl_821B0B0C[];
void *fn_82258098(void *param_1)
{
  int *o = (int *)fn_8265C9E0(0xc0);
  if (o != 0) {
    fn_822CA318(o, param_1);
    o[0] = (int)lbl_821B0AB8;
    o[104/4] = (int)lbl_821B0B0C;
    return o;
  }
  return 0;
}
