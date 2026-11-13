extern unsigned int *auStack_40;
extern float fRam831c4678;
extern float fRam831c4684;
extern unsigned int fStack_3c;
extern int fn_824B44C8();
extern unsigned int lbl_821CA460;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int uRam831c467c;
extern unsigned int uRam831c4680;
extern unsigned int uRam831c4688;
extern unsigned int uRam831c468c;


double fn_824B5608(int param_1,unsigned __int64 param_2)

{
  float fVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned char auStack_40 [4];
  float fStack_3c;
  
  fn_824B44C8(auStack_40,param_2,uRam831c4680,0);
  if (fStack_3c <= fRam831c4678) {
    *(unsigned int *)(param_1 + 0x50) = 0;
LAB_824b566c:
    uVar3 = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x50) + 1;
    *(unsigned int *)(param_1 + 0x50) = uVar2;
    if (uVar2 <= uRam831c467c) goto LAB_824b566c;
    uVar3 = 1;
  }
  *(unsigned int *)(param_1 + 0x48) = uVar3;
  fn_824B44C8(auStack_40,param_2,uRam831c468c,2);
  if (fStack_3c <= fRam831c4684) {
    *(unsigned int *)(param_1 + 0x54) = 0;
  }
  else {
    uVar2 = *(int *)(param_1 + 0x54) + 1;
    *(unsigned int *)(param_1 + 0x54) = uVar2;
    if (uRam831c4688 < uVar2) {
      iVar4 = 1;
      goto LAB_824b56c0;
    }
  }
  iVar4 = 0;
LAB_824b56c0:
  *(int *)(param_1 + 0x4c) = iVar4;
  fVar1 = ltcg_pool_0_0f;
  if ((*(int *)(param_1 + 0x48) != 0) && (iVar4 != 0)) {
    fVar1 = lbl_821CA460;
  }
  return (double)fVar1;
}

