extern unsigned int lbl_82005CCC;
extern unsigned int uStack_9;


void fn_82706B48(double param_1,int param_2)

{
  unsigned char uStack_9;
  
  uStack_9 = (char)(__int64)(param_1 * (double)lbl_82005CCC);
  if (uStack_9 == -1) {
    uStack_9 = -1;
  }
  *(char *)(param_2 + 0x940) = uStack_9;
  return;
}

