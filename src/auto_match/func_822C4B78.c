extern int fn_822ABBF0();
extern unsigned int iStack_28;
extern unsigned int lbl_821ACF84;
extern unsigned int uStack_24;


void fn_822C4B78(int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned char **ppuStack_30;
  int *piStack_2c;
  int iStack_28;
  unsigned int uStack_24;
  
  ppuStack_30 = &lbl_821ACF84;
  piStack_2c = param_1;
  iStack_28 = (int)param_2;
  uStack_24 = param_3;
  fn_822ABBF0(*(unsigned int *)(((int *)param_1[7])[4] * 4 + *(int *)param_1[7]),&ppuStack_30);
  if ((unsigned __int64)(unsigned int)param_1[9] != (param_2 & 0xffffffff)) {
    param_1[9] = (int)param_2;
    *(unsigned int *)(*(int *)(param_1[5] + 0x8c0) + 0x90) = (unsigned int)((param_2 & 0xffffffff) != 0);
    (**(int (***)())(*param_1 + 0x24))(param_1,param_2);
  }
  return;
}

