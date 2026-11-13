extern unsigned int lbl_82106548;
extern unsigned int lbl_82106640;
extern unsigned int lbl_82106650;
extern unsigned int lbl_82106688;
extern unsigned int lbl_821067C8;
extern unsigned int lbl_82106908;
extern unsigned int lbl_82106A48;
extern unsigned int lbl_82106B88;
extern unsigned int lbl_82106C18;


void fn_82CAD120(int param_1,int param_2,int param_3)

{
  unsigned char bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  unsigned char *puVar6;
  unsigned int uVar7;
  
  *(int *)(param_1 + 0x44) = param_2;
  *(unsigned int *)(param_1 + 4) = 0x400;
  iVar4 = 0;
  if (param_3 == 0) {
    *(unsigned int *)(param_1 + 0x3c) = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x3c) = 1;
    *(unsigned int *)(param_1 + 8) = 0;
  }
  if (0 < *(int *)(param_1 + 0x40)) {
    piVar5 = (int *)(param_1 + 0xc);
    do {
      iVar2 = *piVar5;
      iVar3 = *(int *)(iVar2 + 0x10);
      if ((iVar3 == 0) || (iVar3 == 1)) {
        puVar6 = &lbl_821067C8;
        if (0xc < param_2) {
          puVar6 = &lbl_82106688;
        }
LAB_82cad218:
        *(unsigned char **)(iVar2 + 0x20) = puVar6;
LAB_82cad21c:
        bVar1 = **(unsigned char **)(iVar2 + 0x20);
        *(unsigned char **)(iVar2 + 0x20) = *(unsigned char **)(iVar2 + 0x20) + 1;
        uVar7 = (unsigned int)bVar1;
        *(unsigned int *)(iVar2 + 0x1c) = uVar7;
        *(int *)(iVar2 + 0x18) = 1 << (uVar7 & 0x3f);
      }
      else {
        if ((iVar3 == 2) || (iVar3 == 3)) {
          puVar6 = &lbl_82106A48;
          if (0xc < param_2) {
            puVar6 = &lbl_82106908;
          }
          goto LAB_82cad218;
        }
        if (iVar3 == 4) {
          puVar6 = &lbl_82106650;
          if (0xc < param_2) {
            puVar6 = &lbl_82106640;
          }
          goto LAB_82cad218;
        }
        if (iVar3 != 8) {
          if (iVar3 == 10) goto LAB_82cad238;
          if (4 < iVar3) {
            puVar6 = &lbl_82106B88;
            if (0xc < param_2) {
              puVar6 = &lbl_82106C18;
            }
            goto LAB_82cad218;
          }
          goto LAB_82cad21c;
        }
        *(unsigned int *)(iVar2 + 0xc) = 0x92;
        *(unsigned char **)(iVar2 + 8) = &lbl_82106548;
      }
LAB_82cad238:
      iVar4 = iVar4 + 1;
      piVar5 = piVar5 + 1;
    } while (iVar4 < *(int *)(param_1 + 0x40));
  }
  return;
}

