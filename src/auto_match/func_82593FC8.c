extern int fn_8251FA58();
extern int fn_82594470();
extern int fn_825946B8();
extern int fn_825A24C0();
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_8326C2C0;
extern unsigned int lbl_8326C390;
extern float lbl_8327F894;
extern unsigned int lbl_8329618C;


void fn_82593FC8(void)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  double dVar5;
  
  if ((lbl_8326C390 == 0) && (lbl_8326C2C0 != 0)) {
    dVar5 = (double)ltcg_pool_0_0f;
    if (lbl_8329618C == 0) {
      iVar1 = 0;
    }
    else {
      iVar1 = *(int *)(lbl_8329618C + 4);
    }
    if (iVar1 != 0) {
      if (lbl_8329618C == 0) {
        iVar1 = 0;
      }
      else {
        iVar1 = *(int *)(lbl_8329618C + 4);
      }
      if ((double)*(float *)(iVar1 + 0x838) <= dVar5) {
        dVar5 = (double)(*(float *)(iVar1 + 0x820) * lbl_8327F894);
      }
    }
    uVar2 = *(unsigned int *)(lbl_8326C2C0 + 8);
    for (uVar4 = *(unsigned int *)(lbl_8326C2C0 + 4); uVar4 < uVar2; uVar4 = uVar4 + 0x50) {
      if (*(int *)(uVar4 + 0x28) != 0) {
        *(float *)(uVar4 + 0x2c) = (float)((double)*(float *)(uVar4 + 0x2c) + dVar5);
        iVar1 = fn_82594470(dVar5,uVar4);
        if (iVar1 == 0) {
          if (*(unsigned int *)(uVar4 + 0x44) < 4) {
            fn_825946B8(uVar4,*(unsigned int *)(uVar4 + 0x44) & 0xff);
          }
          else {
            uVar3 = 0;
            do {
              fn_825946B8(uVar4,uVar3 & 0xff);
              uVar3 = uVar3 + 1;
            } while ((int)uVar3 < 4);
          }
        }
        else {
          fn_8251FA58(*(unsigned int *)(uVar4 + 0x28));
          fn_825A24C0(lbl_8326C2C0,uVar4);
          uVar4 = uVar4 - 0x50;
          uVar2 = uVar2 - 0x50;
        }
      }
    }
  }
  return;
}

