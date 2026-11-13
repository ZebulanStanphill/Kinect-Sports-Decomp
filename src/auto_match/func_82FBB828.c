extern int fn_82F64A40();
extern int fn_82FBAC00();
extern int fn_82FBAFF8();
extern int fn_82FBB3E8();
extern int fn_82FBBC98();
extern int fn_82FBC018();
extern unsigned int lbl_82002C5C;
extern unsigned int lbl_8216C63C;
extern unsigned int uStack_40;
extern unsigned int uStack_54;
extern unsigned int uStack_5c;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_82FBB828(int param_1,int *param_2,unsigned __int64 param_3,unsigned int *param_4,unsigned int *param_5)

{
  float fVar1;
  int iVar3;
  unsigned __int64 uVar2;
  int (**pcVar4)();
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  __int64 lVar8;
  double dVar9;
  unsigned __int64 uVar10;
  double dVar11;
  unsigned int uStack_5c;
  unsigned int uStack_54;
  float afStack_50 [4];
  unsigned int uStack_40;
  char cStack_3c;
  char cStack_3b;
  
  *(unsigned int **)(param_1 + 8) = param_4;
  puVar5 = &uStack_54;
  lVar8 = 6;
  do {
    param_4 = param_4 + 1;
    puVar5 = puVar5 + 1;
    *puVar5 = *param_4;
    lVar8 = lVar8 + -1;
  } while (lVar8 != 0);
  iVar3 = 0;
  *(char *)(param_1 + 0x41) = cStack_3c;
  for (uVar6 = param_5[1] >> 0xe; uVar6 != 0; uVar6 = uVar6 - 1 & uVar6) {
    iVar3 = iVar3 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar3;
  *(int *)(param_1 + 0x14) = iVar3;
  if ((cStack_3c == '\0') && ((param_5[1] & 0x20000) != 0)) {
    *(int *)(param_1 + 0x14) = iVar3 + -1;
  }
  uVar7 = 1;
  if (cStack_3b == '\0') {
    uVar7 = *(unsigned int *)(param_1 + 0x14);
  }
  *(unsigned int *)(param_1 + 0x1c) = uVar7;
  uVar6 = *param_5;
  *(unsigned int *)(param_1 + 0x18) = uVar6;
  fVar1 = lbl_82002C5C;
  dVar11 = (double)lbl_8216C63C;
  uVar10 = (unsigned __int64)((float)uVar6 * afStack_50[2]);
  uStack_5c = (unsigned int)uVar10;
  *(unsigned int *)(param_1 + 0x20) = uStack_5c;
  dVar9 = (double)fn_82F64A40((double)(float)(dVar11 / (double)((float)(uVar10 & 0xffffffff) *
                                                                fVar1)));
  *(float *)(param_1 + 0x3c) = (float)dVar9;
  *(float *)(param_1 + 0x34) = afStack_50[3];
  dVar9 = (double)fn_82F64A40((double)(float)(dVar11 / (double)((float)*(unsigned int *)(param_1 + 0x18) *
                                                                afStack_50[3])));
  *(float *)(param_1 + 0x38) = (float)dVar9;
  iVar3 = (**(int (***)())(*param_2 + 4))
                    (param_2,((__int64)*(int *)(param_1 + 0x20) *
                              (__int64)*(int *)(param_1 + 0x10) & 0x3fffffffU) << 2);
  *(int *)(param_1 + 0x28) = iVar3;
  if (iVar3 == 0) {
LAB_82fbb9a0:
    uVar2 = 0x34;
  }
  else {
    *(unsigned int *)(param_1 + 0x2c) = 0;
    if ((cStack_3b == '\0') || (param_5[1] >> 0xe == 4)) {
      pcVar4 = fn_82FBAC00;
    }
    else if (((param_5[1] >> 0xe & 8) == 0) || (cStack_3c != '\0')) {
      if (*(int *)(param_1 + 0x10) == 6) {
        pcVar4 = fn_82FBBC98;
      }
      else {
        pcVar4 = fn_82FBAFF8;
      }
    }
    else if (*(int *)(param_1 + 0x10) == 6) {
      pcVar4 = fn_82FBC018;
    }
    else {
      pcVar4 = fn_82FBB3E8;
    }
    uVar6 = *(unsigned int *)(param_1 + 0x1c);
    *(int (***)())(param_1 + 4) = pcVar4;
    if ((unsigned __int64)uVar6 != 0) {
      iVar3 = (**(int (***)())(*param_2 + 4))
                        (param_2,((unsigned __int64)uVar6 + ((unsigned __int64)uVar6 & 0x7fffffff) * 2 &
                                 0x3fffffff) << 2);
      *(int *)(param_1 + 0x24) = iVar3;
      if (iVar3 == 0) goto LAB_82fbb9a0;
    }
    *(unsigned int *)(param_1 + 0xc) = uStack_40;
    uVar2 = 1;
    *(unsigned int *)(param_1 + 0x30) = *(unsigned int *)(param_1 + 0x20);
  }
  return uVar2;
}

