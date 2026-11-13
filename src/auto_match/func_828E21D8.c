extern int fn_82311AB8();
extern int fn_82F69290();
extern unsigned int lbl_82167E64;


unsigned int fn_828E21D8(int param_1,unsigned int param_2)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned char **appuStack_20 [8];
  
  if ((unsigned int)((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x1c) <= param_2) {
    fn_82311AB8(appuStack_20,0xffffffff821ae698);
    appuStack_20[0] = &lbl_82167E64;
                    /* WARNING: Subroutine does not return */
    fn_82F69290(appuStack_20,0xffffffff821dda18);
  }
  iVar3 = param_2 * 0x1c + *(int *)(param_1 + 0xc);
  iVar2 = 0;
  piVar1 = *(int **)(iVar3 + 4);
  uVar4 = *(unsigned int *)(iVar3 + 0x10);
  if (piVar1 != (int *)0x0) {
    iVar2 = *piVar1;
  }
  if (*(unsigned int *)(iVar2 + 8) <= uVar4) {
    uVar4 = uVar4 - *(unsigned int *)(iVar2 + 8);
  }
  return *(unsigned int *)(*(int *)(iVar2 + 4) + uVar4 * 4);
}

