extern int fn_8225F160();
extern int fn_822ABBF0();
extern unsigned int iStack_28;
extern unsigned int lbl_821ACF84;
extern unsigned int uStack_24;


void fn_822C4C28(int *param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned char **ppuStack_30;
  int *piStack_2c;
  int iStack_28;
  unsigned int uStack_24;
  
  if ((param_3 != 0) || ((param_2 != 0 && (*(char *)(param_2 + 0xe0) != '\0')))) {
    iVar1 = fn_8225F160();
    uStack_24 = (unsigned int)LZCOUNT(*(unsigned int *)(iVar1 + 0x40)) >> 5;
    ppuStack_30 = &lbl_821ACF84;
    piStack_2c = param_1;
    iStack_28 = param_2;
    fn_822ABBF0(*(unsigned int *)(((int *)param_1[7])[4] * 4 + *(int *)param_1[7]),&ppuStack_30)
    ;
    if (param_1[9] != param_2) {
      param_1[9] = param_2;
      *(unsigned int *)(*(int *)(param_1[5] + 0x8c0) + 0x90) = (unsigned int)(param_2 != 0);
      (**(int (***)())(*param_1 + 0x24))(param_1,param_2);
    }
  }
  return;
}

