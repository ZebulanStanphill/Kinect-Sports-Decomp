extern void *fn_8265C9E0(unsigned int);
extern void fn_822CA248(void *, void *);
extern char lbl_821AEC50[];
extern char lbl_821AEC9C[];
void *fn_822C2800(void *unused, void *param_1)
{
  int *o = (int *)fn_8265C9E0(0xc0);
  if (o != 0) {
    fn_822CA248(o, param_1);
    o[0] = (int)lbl_821AEC50;
    o[104/4] = (int)lbl_821AEC9C;
    return o;
  }
  return 0;
}
