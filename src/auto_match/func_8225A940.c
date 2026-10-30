extern void *fn_8265C9E0(unsigned int);
extern void fn_8225AA50(void *, void *);
extern char lbl_821983B8[];
extern char lbl_82198490[];
void *fn_8225A940(void *param_1)
{
  int *o = (int *)fn_8265C9E0(0xb0);
  if (o != 0) {
    fn_8225AA50(o, (char *)param_1 - 0x28);
    o[0] = (int)lbl_821983B8;
    o[40/4] = (int)lbl_82198490;
    return o;
  }
  return 0;
}
