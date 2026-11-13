extern unsigned int lbl_82014C48;
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831F1348;


double fn_827669E8(int param_1,unsigned int param_2)

{
  if (param_2 != 0xffffffff) {
    if (*(unsigned int *)(param_1 + 0x34) != 0) {
      if (param_2 < *(unsigned int *)(param_1 + 0x34)) {
        return (double)*(float *)(*(int *)(param_1 + 0x30) + param_2 * 0xc);
      }
      return (double)lbl_821AAD20;
    }
    if (lbl_831F1348 == '\0') {
      lbl_831F1348 = '\x01';
    }
  }
  return (double)lbl_82014C48;
}

