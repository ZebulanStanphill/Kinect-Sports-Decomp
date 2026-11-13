extern int fn_8265C9E0();
extern unsigned int lbl_82002AE0;
extern unsigned int lbl_82005328;


unsigned __int64 fn_82B8FAE0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  float fVar4;
  int iVar6;
  unsigned __int64 uVar5;
  int iVar7;
  __int64 lVar8;
  
  iVar6 = fn_8265C9E0(0x1000);
  *(int *)(param_1 + 0x38) = iVar6;
  fVar4 = lbl_82005328;
  uVar3 = lbl_82002AE0;
  if (iVar6 == 0) {
    uVar5 = 0xffffffff8007000e;
  }
  else {
    iVar6 = 0;
    if (*(int *)(param_2 + 0x50) == 0) {
      lVar8 = 0x100;
      do {
        *(unsigned int *)(iVar6 + *(int *)(param_1 + 0x38) + 0xc) = uVar3;
        *(unsigned int *)(iVar6 + *(int *)(param_1 + 0x38) + 8) = uVar3;
        *(unsigned int *)(iVar6 + *(int *)(param_1 + 0x38) + 4) = uVar3;
        *(unsigned int *)(iVar6 + *(int *)(param_1 + 0x38)) = uVar3;
        iVar6 = iVar6 + 0x10;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    else {
      iVar7 = 0;
      lVar8 = 0x100;
      do {
        *(float *)(iVar7 + *(int *)(param_1 + 0x38)) =
             (float)*(unsigned char *)(*(int *)(param_2 + 0x50) + iVar6) * fVar4;
        *(float *)(iVar7 + *(int *)(param_1 + 0x38) + 4) =
             (float)*(unsigned char *)(*(int *)(param_2 + 0x50) + iVar6 + 1) * fVar4;
        *(float *)(iVar7 + *(int *)(param_1 + 0x38) + 8) =
             (float)*(unsigned char *)(*(int *)(param_2 + 0x50) + iVar6 + 2) * fVar4;
        iVar1 = *(int *)(param_2 + 0x50) + iVar6;
        iVar2 = iVar7 + *(int *)(param_1 + 0x38);
        iVar6 = iVar6 + 4;
        iVar7 = iVar7 + 0x10;
        *(float *)(iVar2 + 0xc) = (float)*(unsigned char *)(iVar1 + 3) * fVar4;
        lVar8 = lVar8 + -1;
      } while (lVar8 != 0);
    }
    uVar5 = 0;
  }
  return uVar5;
}

