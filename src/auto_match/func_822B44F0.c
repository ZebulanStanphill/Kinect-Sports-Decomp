extern int fn_82230040();
extern int fn_822B4448();
extern int fn_8265C9E0();
extern unsigned int lbl_82002B04;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;


int fn_822B44F0(int param_1,__int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char **ppuStack_40;
  unsigned int uStack_3c;
  unsigned char **ppuStack_38;
  unsigned int uStack_34;
  
  *(unsigned int *)(param_1 + 8) = 0;
  iVar3 = fn_8265C9E0(0x14);
  if (iVar3 == 0) {
    uStack_34 = 0;
    ppuStack_38 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
    fn_82230040(&ppuStack_38);
  }
  *(int *)(param_1 + 4) = iVar3;
  *(int *)iVar3 = iVar3;
  *(int *)(*(int *)(param_1 + 4) + 4) = *(int *)(param_1 + 4);
  *(int *)(*(int *)(param_1 + 4) + 8) = *(int *)(param_1 + 4);
  *(unsigned char *)(*(int *)(param_1 + 4) + 0x10) = 1;
  *(unsigned char *)(*(int *)(param_1 + 4) + 0x11) = 1;
  fn_822B4448(param_1,param_2);
  *(unsigned int *)(param_1 + 0x18) = 0;
  iVar3 = fn_8265C9E0(0x14);
  if (iVar3 != 0) {
    *(int *)(param_1 + 0x14) = iVar3;
    *(int *)iVar3 = iVar3;
    *(int *)(*(int *)(param_1 + 0x14) + 4) = *(int *)(param_1 + 0x14);
    *(int *)(*(int *)(param_1 + 0x14) + 8) = *(int *)(param_1 + 0x14);
    *(unsigned char *)(*(int *)(param_1 + 0x14) + 0x10) = 1;
    *(unsigned char *)(*(int *)(param_1 + 0x14) + 0x11) = 1;
    fn_822B4448(param_1 + 0x10,param_2 + 0x10);
    puVar1 = (unsigned int *)((int)param_2 + 0x20U & 0xfffffff0);
    uVar4 = puVar1[1];
    uVar5 = puVar1[2];
    uVar6 = puVar1[3];
    puVar2 = (unsigned int *)(param_1 + 0x20U & 0xfffffff0);
    *puVar2 = *puVar1;
    puVar2[1] = uVar4;
    puVar2[2] = uVar5;
    puVar2[3] = uVar6;
    return param_1;
  }
  uStack_3c = 0;
  ppuStack_40 = &lbl_82002B04;
                    /* WARNING: Subroutine does not return */
  fn_82230040(&ppuStack_40);
}

