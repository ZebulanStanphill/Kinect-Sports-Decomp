extern int fn_82805808();
extern int fn_82F691F0();


void fn_82806240(int *param_1,int param_2,int param_3)

{
  unsigned short uVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  
  uVar1 = *(unsigned short *)(param_2 + 0x24);
  iVar7 = (unsigned int)*(unsigned short *)(param_2 + 0x22) * (unsigned int)*(unsigned short *)(param_2 + 0x20);
  iVar2 = iVar7 * 4;
  uVar3 = iVar2 + 0x7fU & 0xffffff80;
  iVar4 = fn_82805808(param_2);
  piVar5 = param_1 + 0x20;
  *param_1 = (int)piVar5;
  param_1[2] = (int)(piVar5 + uVar3);
  iVar6 = (int)(piVar5 + uVar3) + (uVar1 + 3 & 0xfffffffc);
  param_1[0xb] = iVar6;
  iVar6 = iVar6 + (iVar7 + 0x1f >> 3 & 0xfffffffcU);
  param_1[0xd] = iVar6;
  *(unsigned int *)(iVar6 + (iVar4 + 3U & 0xfffffffc)) = 0x12345678;
  param_1[0xe] = iVar2;
  param_1[0xf] = param_3;
  param_1[1] = uVar3;
  *(unsigned short *)((int)param_1 + 0x32) = *(unsigned short *)(param_2 + 0x20);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1[0xb],0);
}

