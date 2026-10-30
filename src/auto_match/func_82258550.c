extern void *fn_8265C9E0(unsigned int);
extern void fn_82239CB0(void *, void *);
extern char lbl_821982C8[];
extern char lbl_821982DC[];
void *fn_82258550(void *param_1)
{
  int *o = (int *)fn_8265C9E0(0x2c);
  if (o != 0) {
    fn_82239CB0(o, (char *)param_1 - 0x28);
    o[0] = (int)lbl_821982C8;
    o[40/4] = (int)lbl_821982DC;
    return o;
  }
  return 0;
}
