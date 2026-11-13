extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int lbl_82192734;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831C47A0;
extern unsigned int lbl_831C47A4;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


/* WARNING: Removing unreachable block (ram,0x824b4fcc) */

double fn_824B4ED0(int param_1,int *param_2)

{
  int iVar1;
  int (**pcVar2)();
  unsigned int *puVar3;
  unsigned int *puVar4;
  float fVar5;
  int in_r0;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uVar11;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  int iStack_48;
  int iStack_44;
  float afStack_40 [16];
  
  iVar1 = *(int *)(param_1 + 0x3c);
  (**(int (***)())*param_2)(param_2,&uStack_50,&uStack_4c);
  uVar7 = ((unsigned __int64)uStack_4c - (unsigned __int64)lbl_831C47A0) + 1;
  uVar8 = (unsigned int)uVar7;
  uVar6 = (unsigned __int64)uStack_50;
  if ((int)uStack_50 < (int)uVar8) {
    uVar6 = uVar7;
    uStack_50 = uVar8;
  }
  (**(int (***)())(*param_2 + 4))(param_2,uVar6,&iStack_48);
  iVar1 = ((-(unsigned int)(iVar1 != 0) & 0xfffffffc) + 10) * 0x40;
  pcVar2 = *(int (***)())(*param_2 + 4);
  puVar3 = (unsigned int *)(*(int *)(iStack_48 + 0x40) + iVar1 & 0xfffffff0);
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  uVar11 = puVar3[3];
  puVar4 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar9;
  puVar4[2] = uVar10;
  puVar4[3] = uVar11;
  (*pcVar2)(param_2,uStack_4c,&iStack_44);
  fVar5 = lbl_831C47A4;
  puVar3 = (unsigned int *)(*(int *)(iStack_44 + 0x40) + iVar1 & 0xfffffff0);
  uVar9 = puVar3[1];
  uVar10 = puVar3[2];
  uVar11 = puVar3[3];
  puVar4 = (unsigned int *)((int)afStack_40 + in_r0 & 0xfffffff0);
  *puVar4 = *puVar3;
  puVar4[1] = uVar9;
  puVar4[2] = uVar10;
  puVar4[3] = uVar11;
  if ((afStack_40[0] < afStack_40[0] - fVar5) || (fVar5 + afStack_40[0] < afStack_40[0])) {
    *(unsigned int *)(param_1 + 0x48) = lbl_82192734;
  }
  *(float *)(param_1 + 0x50) = afStack_40[0];
  return (double)ltcg_pool_0_0f;
}

