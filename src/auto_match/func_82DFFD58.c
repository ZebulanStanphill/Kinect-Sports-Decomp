extern unsigned int *auStack_30;
extern unsigned int fStack_34;
extern unsigned int fStack_38;
extern unsigned int fStack_3c;
extern unsigned int fStack_40;
extern int fn_82CE5410();
extern int fn_82D40FE8();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82132790;
extern unsigned int lbl_821AAD20;


void fn_82DFFD58(double param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int in_r0;
  int iVar3;
  double dVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  struct { float first; float second; } stack_pair_40;

  float fStack_38;
  float fStack_34;
  unsigned char auStack_30 [48];
  
  fStack_38 = (float)(param_1 * (double)lbl_82002C5C);
  dVar4 = (double)lbl_821AAD20;
  puVar1 = (unsigned int *)((unsigned int)(&lbl_82132790 + in_r0) & 0xfffffff0);
  uVar8 = *puVar1;
  uVar9 = puVar1[1];
  uVar10 = puVar1[2];
  uVar11 = puVar1[3];
  stack_pair_40.first = lbl_821AAD20;
  stack_pair_40.second = lbl_821AAD20;
  fStack_34 = lbl_821AAD20;
  puVar1 = (unsigned int *)((int)&stack_pair_40.first + in_r0 & 0xfffffff0);
  uVar5 = puVar1[1];
  uVar6 = puVar1[2];
  uVar7 = puVar1[3];
  puVar2 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar5;
  puVar2[2] = uVar6;
  puVar2[3] = uVar7;
  puVar1 = (unsigned int *)((int)&stack_pair_40.first + in_r0 & 0xfffffff0);
  *puVar1 = uVar8;
  puVar1[1] = uVar9;
  puVar1[2] = uVar10;
  puVar1[3] = uVar11;
  iVar3 = fn_82CE5410();
  iVar3 = (**(int (***)())(**(int **)(iVar3 + 0x10) + 4))(*(int **)(iVar3 + 0x10),0x60);
  *(unsigned short *)(iVar3 + 4) = 0x60;
  fn_82D40FE8(param_2,dVar4,iVar3,auStack_30,&stack_pair_40.first);
  return;
}

