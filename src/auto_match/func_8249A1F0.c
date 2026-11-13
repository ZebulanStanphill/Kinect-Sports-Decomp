extern int fn_8248F890();
extern int fn_824925D0();
extern int fn_8249A2E0();
extern int fn_82F622A8();
extern int fn_82F68CC0();
extern unsigned int lbl_821BEBB8;


unsigned __int64 fn_8249A1F0(unsigned __int64 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar1 = **(int **)(param_2 + 4);
  iVar2 = *(int *)(iVar1 + 4);
  piVar3 = (int *)fn_8248F890(0xa0);
  *piVar3 = iVar1;
  piVar3[1] = iVar2;
  if (piVar3 + 4 != (int *)0x0) {
    piVar3[4] = *param_3;
    iVar2 = param_3[5];
    piVar3[8] = (int)&lbl_821BEBB8;
    piVar3[9] = iVar2;
    fn_82F68CC0(piVar3 + 0xc,param_3 + 8,0x20);
    fn_82F68CC0(piVar3 + 0x14,param_3 + 0x10,0x20);
    fn_824925D0(piVar3 + 0x1c,param_3 + 0x18);
  }
  if (*(int *)(param_2 + 8) == 0x1c71c70) {
                    /* WARNING: Subroutine does not return */
    fn_82F622A8(0xffffffff8219852c);
  }
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  *(int **)(iVar1 + 4) = piVar3;
  *(int **)piVar3[1] = piVar3;
  fn_8249A2E0(param_1,param_2,(unsigned __int64)**(unsigned int **)(param_2 + 4) + 0x10);
  return param_1;
}

