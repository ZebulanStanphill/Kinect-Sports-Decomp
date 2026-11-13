extern int fn_82681898();
extern int fn_826959C8();
extern int fn_8269A1F0();
extern int fn_826A7380();
extern int fn_826D6630();
extern int fn_82713EE8();
extern float lbl_82005328;
extern unsigned int lbl_8200D8DC;
extern unsigned int lbl_821AAD20;


unsigned __int64 fn_8274EC68(int param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned char *param_4)

{
  char cVar1;
  char cVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  char *pcVar5;
  char *pcVar6;
  short sVar8;
  char *pcVar7;
  unsigned char bVar9;
  double dVar10;
  
  pcVar5 = "alpha";
  pcVar7 = *(char **)*param_3;
  pcVar6 = pcVar7;
  do {
    cVar1 = *pcVar6;
    cVar2 = *pcVar5;
    if (cVar1 == '\0') break;
    pcVar6 = pcVar6 + 1;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 == cVar2);
  if (cVar1 == cVar2) {
    if (*(unsigned char *)(param_1 + 0x28) == 0) {
      dVar10 = (double)lbl_821AAD20;
    }
    else {
      dVar10 = (double)((float)*(unsigned char *)(param_1 + 0x28) * lbl_82005328);
    }
  }
  else {
    pcVar5 = "angle";
    pcVar6 = pcVar7;
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      sVar8 = *(short *)(param_1 + 0x24) / 10;
LAB_8274ed50:
      fn_8269A1F0(param_4,sVar8);
      return 1;
    }
    pcVar5 = "blurX";
    pcVar6 = pcVar7;
    do {
      cVar1 = *pcVar6;
      cVar2 = *pcVar5;
      if (cVar1 == '\0') break;
      pcVar6 = pcVar6 + 1;
      pcVar5 = pcVar5 + 1;
    } while (cVar1 == cVar2);
    if (cVar1 == cVar2) {
      bVar9 = *(unsigned char *)(param_1 + 0x21);
    }
    else {
      pcVar5 = "blurY";
      pcVar6 = pcVar7;
      do {
        cVar1 = *pcVar6;
        cVar2 = *pcVar5;
        if (cVar1 == '\0') break;
        pcVar6 = pcVar6 + 1;
        pcVar5 = pcVar5 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 == cVar2) {
        bVar9 = *(unsigned char *)(param_1 + 0x22);
      }
      else {
        pcVar5 = "color";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          fn_8269A1F0(param_4,*(unsigned int *)(param_1 + 0x28) & 0xffffff);
          return 1;
        }
        pcVar5 = "distance";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          sVar8 = *(short *)(param_1 + 0x26) / 0x14;
          goto LAB_8274ed50;
        }
        pcVar5 = "hideObject";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          bVar9 = *(unsigned char *)(param_1 + 0x20) >> 6;
LAB_8274eed8:
          fn_826959C8(param_4);
          param_4[4] = bVar9 & 1;
          *param_4 = 2;
          return 1;
        }
        pcVar5 = "inner";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          uVar3 = fn_826A7380(param_2);
          if ((uVar3 & 0xffffffff) == 0) {
            return 1;
          }
          uVar4 = 0xffffffff820138c4;
LAB_8274ef44:
          fn_826D6630(uVar3 + 0xc,uVar4);
          return 1;
        }
        pcVar5 = "knockout";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          bVar9 = *(unsigned char *)(param_1 + 0x20) >> 5;
          goto LAB_8274eed8;
        }
        pcVar5 = "quality";
        pcVar6 = pcVar7;
        do {
          cVar1 = *pcVar6;
          cVar2 = *pcVar5;
          if (cVar1 == '\0') break;
          pcVar6 = pcVar6 + 1;
          pcVar5 = pcVar5 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 == cVar2) {
          uVar3 = fn_826A7380(param_2);
          if ((uVar3 & 0xffffffff) == 0) {
            return 1;
          }
          uVar4 = 0xffffffff82013870;
          goto LAB_8274ef44;
        }
        pcVar6 = "strength";
        do {
          cVar1 = *pcVar7;
          cVar2 = *pcVar6;
          if (cVar1 == '\0') break;
          pcVar7 = pcVar7 + 1;
          pcVar6 = pcVar6 + 1;
        } while (cVar1 == cVar2);
        if (cVar1 != cVar2) {
          uVar4 = fn_82713EE8(param_1,param_2,param_3,param_4);
          return uVar4;
        }
        bVar9 = *(unsigned char *)(param_1 + 0x23);
      }
    }
    dVar10 = (double)((float)bVar9 * lbl_8200D8DC);
  }
  fn_82681898(dVar10,param_4);
  return 1;
}

