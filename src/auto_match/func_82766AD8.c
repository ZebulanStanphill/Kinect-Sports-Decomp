extern float lbl_82005718;
extern unsigned int lbl_82014C4C;
extern unsigned int lbl_821AAD20;


double fn_82766AD8(int param_1,unsigned int param_2)

{
  if ((param_2 != 0xffffffff) && (*(unsigned int *)(param_1 + 0x34) != 0)) {
    if (param_2 < *(unsigned int *)(param_1 + 0x34)) {
      return (double)((float)*(unsigned short *)(*(int *)(param_1 + 0x30) + param_2 * 0xc + 10) *
                     lbl_82005718);
    }
    return (double)lbl_821AAD20;
  }
  return (double)lbl_82014C4C;
}

