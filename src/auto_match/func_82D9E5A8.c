extern unsigned int *auStack_50;
extern unsigned int fStack_38;
extern int fn_82D9D718();
extern int fn_8309FA20();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_82015468;
extern unsigned int lbl_8201DD74;
extern unsigned int lbl_821AAD20;
extern unsigned int uStack_34;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


void fn_82D9E5A8(unsigned __int64 param_1,int *param_2,unsigned int *param_3,unsigned __int64 param_4,
                  int param_5,unsigned __int64 param_6,unsigned __int64 param_7)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  int in_r0;
  double dVar4;
  double dVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned char auStack_50 [16];
  unsigned int uStack_40;
  unsigned int uStack_3c;
  float fStack_38;
  unsigned int uStack_34;
  
  iVar1 = *param_2;
  *param_2 = iVar1 + 4;
  iVar1 = *(int *)(iVar1 + 4);
  uStack_34 = lbl_82002C5C;
  puVar2 = (unsigned int *)((iVar1 + 5) * 0x10 + param_5 & 0xfffffff0);
  uVar6 = puVar2[1];
  uVar7 = puVar2[2];
  uVar8 = puVar2[3];
  puVar3 = (unsigned int *)((unsigned int)(auStack_50 + in_r0) & 0xfffffff0);
  *puVar3 = *puVar2;
  puVar3[1] = uVar6;
  puVar3[2] = uVar7;
  puVar3[3] = uVar8;
  dVar5 = (double)fn_82D9D718(iVar1,param_5);
  puVar2 = (unsigned int *)*param_3;
  fStack_38 = (float)dVar5;
  uStack_40 = *puVar2;
  *param_3 = puVar2 + 4;
  dVar4 = (double)lbl_821AAD20;
  uStack_3c = puVar2[1];
  if (((dVar5 < dVar4) && (dVar4 < (double)(float)puVar2[2])) &&
     (lbl_8201DD74 < (float)((double)(float)puVar2[2] - dVar5))) {
    fStack_38 = (float)(dVar5 + (double)lbl_82015468);
    dVar5 = (double)fStack_38;
  }
  if (((dVar4 < dVar5) && ((double)(float)puVar2[2] < dVar4)) &&
     (lbl_8201DD74 < (float)(dVar5 - (double)(float)puVar2[2]))) {
    fStack_38 = (float)(dVar5 - (double)lbl_82015468);
    dVar5 = (double)fStack_38;
  }
  puVar2[2] = (float)dVar5;
  fn_8309FA20(auStack_50,param_6,param_7);
  *(int *)(param_5 + 0xb8) = *(int *)(param_5 + 0xb8) + 1;
  return;
}

