extern unsigned int *auStack_30;
extern int fn_8265BDD0();
extern int fn_8265C9E0();
extern int fn_82F69290();
extern unsigned int lbl_820014D4;


int fn_8265C290(int param_1)

{
  int iVar1;
  unsigned int auStack_30 [2];
  unsigned char ** appuStack_28;
  
  *(unsigned int *)(param_1 + 8) = 0;
  iVar1 = fn_8265C9E0(0x30);
  if (iVar1 != 0) {
    *(int *)(param_1 + 4) = iVar1;
    *(int *)iVar1 = iVar1;
    *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
    *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
    *(unsigned char *)(*(int *)(param_1 + 4) + 0x2c) = 1;
    *(unsigned char *)(*(int *)(param_1 + 4) + 0x2d) = 1;
    return param_1;
  }
  auStack_30[0] = 0;
  fn_8265BDD0(&appuStack_28,auStack_30);
  appuStack_28 = &lbl_820014D4;
                    /* WARNING: Subroutine does not return */
  fn_82F69290(&appuStack_28,0xffffffff821dd96c);
}

