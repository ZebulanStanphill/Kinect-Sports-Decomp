extern int fn_82F64A40();
extern int fn_82F997D0();
extern int fn_82F99C48();
extern int fn_82F9A318();
extern int fn_82F9A588();
extern unsigned int lbl_8200133C;
extern unsigned int lbl_8216C63C;
extern float lbl_8216C844;
extern unsigned int uStack_40;
extern unsigned int uStack_54;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned __int64
fn_82F9A010(int param_1,int *param_2,unsigned __int64 param_3,unsigned int *param_4,unsigned int *param_5)

{
  int iVar2;
  unsigned __int64 uVar1;
  int (**pcVar3)();
  unsigned int *puVar4;
  unsigned int uVar5;
  __int64 lVar6;
  double dVar7;
  double dVar8;
  unsigned int uStack_54;
  float afStack_50 [4];
  unsigned int uStack_40;
  char cStack_3c;
  char cStack_3b;
  
  *(unsigned int **)(param_1 + 4) = param_4;
  puVar4 = &uStack_54;
  lVar6 = 6;
  do {
    param_4 = param_4 + 1;
    puVar4 = puVar4 + 1;
    *puVar4 = *param_4;
    lVar6 = lVar6 + -1;
  } while (lVar6 != 0);
  iVar2 = 0;
  *(char *)(param_1 + 0x34) = cStack_3c;
  for (uVar5 = param_5[1] >> 0xe; uVar5 != 0; uVar5 = uVar5 - 1 & uVar5) {
    iVar2 = iVar2 + 1;
  }
  *(int *)(param_1 + 0x10) = iVar2;
  uVar5 = *param_5;
  *(float *)(param_1 + 0x24) = afStack_50[2];
  *(unsigned int *)(param_1 + 0x14) = uVar5;
  dVar8 = (double)lbl_8216C63C;
  dVar7 = (double)fn_82F64A40((double)(float)(dVar8 / (double)((float)uVar5 * afStack_50[2])));
  *(float *)(param_1 + 0x28) = (float)dVar7;
  *(float *)(param_1 + 0x2c) = afStack_50[3];
  dVar7 = (double)fn_82F64A40((double)(float)(dVar8 / (double)((float)*(unsigned int *)(param_1 + 0x14) *
                                                               afStack_50[3])));
  iVar2 = *(int *)(param_1 + 0x10);
  *(float *)(param_1 + 0x30) = (float)dVar7;
  if ((cStack_3b == '\0') || (iVar2 == 1)) {
    *(int (***)())(param_1 + 8) = fn_82F997D0;
  }
  else {
    if (iVar2 == 6) {
      if (((param_5[1] & 0x20000) == 0) || (cStack_3c != '\0')) {
        pcVar3 = fn_82F9A588;
      }
      else {
        pcVar3 = fn_82F9A318;
      }
    }
    else {
      pcVar3 = fn_82F99C48;
    }
    *(int (***)())(param_1 + 8) = pcVar3;
    if (((param_5[1] & 0x20000) != 0) && (cStack_3c == '\0')) {
      iVar2 = iVar2 + -1;
    }
  }
  if (cStack_3b != '\0') {
    iVar2 = 1;
  }
  *(int *)(param_1 + 0x18) = iVar2;
  iVar2 = (**(int (***)())(*param_2 + 4))(param_2,iVar2 << 3);
  *(int *)(param_1 + 0x20) = iVar2;
  if (iVar2 == 0) {
    uVar1 = 0x34;
  }
  else {
    dVar7 = (double)fn_82F64A40((double)(lbl_8200133C /
                                         ((float)*(unsigned int *)(param_1 + 0x14) * lbl_8216C844)));
    *(float *)(param_1 + 0x1c) = (float)dVar7;
    uVar1 = 1;
    *(unsigned int *)(param_1 + 0xc) = uStack_40;
  }
  return uVar1;
}

