extern int fn_8248F890();
extern int fn_824925D0();
extern int fn_82496B28();
extern int fn_82F622A8();
extern unsigned int lbl_821A0000;
extern unsigned int lbl_821BEBAC;


unsigned __int64 fn_82496A28(unsigned __int64 param_1,int param_2,int *param_3)

{
  int iVar1;
  int iVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  int *piVar5;
  unsigned char *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  
  iVar1 = **(int **)(param_2 + 4);
  iVar2 = *(int *)(iVar1 + 4);
  piVar5 = (int *)fn_8248F890(0x70);
  *piVar5 = iVar1;
  piVar5[1] = iVar2;
  if (piVar5 + 4 != (int *)0x0) {
    piVar5[4] = *param_3;
    iVar2 = param_3[5];
    piVar5[8] = (int)&lbl_821BEBAC;
    piVar5[9] = iVar2;
    piVar5[10] = param_3[6];
    piVar5[0xb] = param_3[7];
    piVar5[0xc] = param_3[8];
    puVar3 = (unsigned int *)((unsigned int)(param_3 + 0xc) & 0xfffffff0);
    uVar7 = puVar3[1];
    uVar8 = puVar3[2];
    uVar9 = puVar3[3];
    puVar4 = (unsigned int *)((unsigned int)(piVar5 + 0x10) & 0xfffffff0);
    *puVar4 = *puVar3;
    puVar4[1] = uVar7;
    puVar4[2] = uVar8;
    puVar4[3] = uVar9;
    fn_824925D0(piVar5 + 0x14,param_3 + 0x10);
    piVar5[0x19] = param_3[0x15];
  }
  puVar6 = *(unsigned char **)(param_2 + 8);
  if (puVar6 == (unsigned char *)0x2aaaaa9) {
    puVar6 = &lbl_821A0000;
    fn_82F622A8(0xffffffff8219852c);
  }
  *(unsigned char **)(param_2 + 8) = puVar6 + 1;
  *(int **)(iVar1 + 4) = piVar5;
  *(int **)piVar5[1] = piVar5;
  fn_82496B28(param_1,param_2,(unsigned __int64)**(unsigned int **)(param_2 + 4) + 0x10);
  return param_1;
}

