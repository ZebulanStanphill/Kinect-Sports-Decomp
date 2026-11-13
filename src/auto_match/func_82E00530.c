extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern unsigned int fStack_4c;
extern unsigned int fStack_58;
extern unsigned int fStack_5c;
extern unsigned int fStack_60;
extern int fn_82D401F8();
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;
extern unsigned int uStack_54;


void fn_82E00530(int param_1,int param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int iVar4;
  int in_r0;
  __int64 lVar5;
  float *pfVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  float fStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [24];
  
  uVar1 = *(unsigned int *)(param_1 + 0x10);
  iVar4 = (int)(param_3 & 0xff);
  pfVar6 = (float *)(*(int *)(*(int *)(param_2 + 0x1c) + 0x8c) +
                    (iVar4 + ((unsigned int)param_3 & 0xff) * 4) * 8);
  fStack_60 = *pfVar6;
  fStack_58 = pfVar6[2] * 0.5f;
  uStack_54 = lbl_821AAD20;
  uStack_50 = lbl_821AAD20;
  uStack_48 = lbl_821AAD20;
  lVar5 = (param_3 & 0xff) + (param_3 & 0xff) * 2;
  uStack_44 = lbl_821AAD20;
  fStack_5c = (*(float *)(*(int *)(*(int *)(param_2 + 0x34) + 8) +
                          (iVar4 + ((unsigned int)param_3 & 0xff) * 2) * 0x10 + 0x20) + fStack_60) *
              0.5f;
  puVar2 = (unsigned int *)((int)&fStack_60 + in_r0 & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  fStack_4c = -fStack_5c;
  puVar2 = (unsigned int *)((int)&uStack_50 + in_r0 & 0xfffffff0);
  uVar7 = puVar2[1];
  uVar8 = puVar2[2];
  uVar9 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar7;
  puVar3[2] = uVar8;
  puVar3[3] = uVar9;
  fn_82D401F8(lVar5 * 0x20 + (unsigned __int64)uVar1 + 0x10,auStack_30,auStack_40,lVar5,param_4);
  return;
}

