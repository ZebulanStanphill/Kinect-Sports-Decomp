extern int fn_824B2610();
extern unsigned int lbl_8218E8E8;
extern unsigned int lbl_821954E8;
extern unsigned int ltcg_pool_0_0f;


void fn_824B24D0(int param_1)

{
  int iVar1;
  float fVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned char uVar5;
  
  fn_824B2610();
  iVar1 = *(int *)(param_1 + 0x3c);
  if (1 < *(unsigned int *)(iVar1 + 0x14)) {
    uVar3 = 1;
    fVar2 = lbl_8218E8E8;
    do {
      if (*(unsigned int *)(iVar1 + 0x14) <= uVar3) break;
      if (uVar3 < *(unsigned int *)(iVar1 + 0x14)) {
        iVar4 = (*(unsigned int *)(iVar1 + 0x14) - uVar3) + -1;
        if ((*(int *)(iVar1 + 8) - *(int *)(iVar1 + 0xc)) / 0x50 <= iVar4) {
          iVar4 = iVar4 - (*(int *)(iVar1 + 8) - *(int *)(iVar1 + 4)) / 0x50;
        }
        iVar4 = iVar4 * 0x50 + *(int *)(iVar1 + 0xc);
      }
      else {
        iVar4 = 0;
      }
      uVar3 = uVar3 + 1;
      if (*(float *)(iVar4 + 0x14) < lbl_821954E8) {
        uVar5 = 1;
        goto LAB_824b2594;
      }
      fVar2 = fVar2 - *(float *)(iVar4 + 0x40);
    } while (ltcg_pool_0_0f < fVar2);
  }
  uVar5 = 0;
LAB_824b2594:
  *(unsigned char *)(iVar1 + 0x1c) = uVar5;
  return;
}

