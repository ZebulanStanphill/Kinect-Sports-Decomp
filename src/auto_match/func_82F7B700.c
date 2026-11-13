typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_30;
extern int fn_82F63BA0();
extern int fn_82F68240();
extern int fn_82F84100();
extern unsigned int lbl_83263398;
extern unsigned int lbl_832636E4;


unsigned int * fn_82F7B700(unsigned __int64 param_1,unsigned char *param_2,unsigned __int64 param_3,unsigned int *param_4)

{
  unsigned char bVar1;
  bool bVar2;
  bool bVar3;
  unsigned int *puVar4;
  int iVar5;
  bool bVar6;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int uVar9;
  unsigned int auStack_30 [12];
  
  bVar3 = false;
  bVar2 = false;
  bVar1 = *param_2;
  while (bVar1 == 0x20) {
    param_2 = param_2 + 1;
    bVar1 = *param_2;
  }
  if (bVar1 == 0x61) {
    uVar7 = 0x109;
  }
  else {
    if (bVar1 == 0x72) {
      uVar7 = 0;
      uVar9 = lbl_832636E4 | 1;
      goto LAB_82f7b788;
    }
    if (bVar1 != 0x77) goto LAB_82f7b754;
    uVar7 = 0x301;
  }
  uVar9 = lbl_832636E4 | 2;
LAB_82f7b788:
  bVar6 = true;
LAB_82f7b8b8:
  param_2 = param_2 + 1;
  bVar1 = *param_2;
  lVar8 = (__int64)(char)bVar1;
  if ((lVar8 == 0) || (!bVar6)) goto LAB_82f7b8d0;
  if (bVar1 < 0x54) {
    if (bVar1 == 0x53) {
      if (!bVar2) {
        bVar2 = true;
        uVar7 = uVar7 | 0x20;
        goto LAB_82f7b8b8;
      }
    }
    else {
      if (bVar1 == 0x20) goto LAB_82f7b8b8;
      if (bVar1 == 0x2b) {
        if ((uVar7 & 2) == 0) {
          uVar7 = uVar7 & 0xfffffffe | 2;
          uVar9 = uVar9 & 0xfffffffc | 0x80;
          goto LAB_82f7b8b8;
        }
      }
      else if (bVar1 != 0x2c) {
        if (bVar1 == 0x44) {
          if ((uVar7 & 0x40) == 0) {
            uVar7 = uVar7 | 0x40;
            goto LAB_82f7b8b8;
          }
        }
        else {
          if (bVar1 == 0x4e) {
            uVar7 = uVar7 | 0x80;
            goto LAB_82f7b8b8;
          }
          if (bVar1 != 0x52) goto LAB_82f7b754;
          if (!bVar2) {
            bVar2 = true;
            uVar7 = uVar7 | 0x10;
            goto LAB_82f7b8b8;
          }
        }
      }
    }
  }
  else {
    if (bVar1 == 0x54) {
      if ((uVar7 & 0x1000) != 0) goto LAB_82f7b8ac;
      uVar7 = uVar7 | 0x1000;
      goto LAB_82f7b8b8;
    }
    if (bVar1 == 0x62) {
      if ((uVar7 & 0xc000) == 0) {
        uVar7 = uVar7 | 0x8000;
        goto LAB_82f7b8b8;
      }
    }
    else if (bVar1 == 99) {
      if (!bVar3) {
        bVar3 = true;
        uVar9 = uVar9 | 0x4000;
        goto LAB_82f7b8b8;
      }
    }
    else {
      if (bVar1 == 0x6e) {
        if (bVar3) goto LAB_82f7b8ac;
        bVar3 = true;
        uVar9 = uVar9 & 0xffffbfff;
        goto LAB_82f7b8b8;
      }
      if (bVar1 != 0x74) goto LAB_82f7b754;
      if ((uVar7 & 0xc000) == 0) {
        uVar7 = uVar7 | 0x4000;
        goto LAB_82f7b8b8;
      }
    }
  }
LAB_82f7b8ac:
  bVar6 = false;
  goto LAB_82f7b8b8;
LAB_82f7b8d0:
  while ((int)lVar8 == 0x20) {
    param_2 = param_2 + 1;
    lVar8 = (__int64)(char)*param_2;
  }
  if ((int)lVar8 == 0) {
    iVar5 = fn_82F84100(auStack_30,param_1,uVar7,param_3,0x180);
    if (iVar5 != 0) {
      return (unsigned int *)0x0;
    }
    lbl_83263398 = lbl_83263398 + 1;
    param_4[3] = uVar9;
    param_4[1] = 0;
    *param_4 = 0;
    param_4[2] = 0;
    param_4[7] = 0;
    param_4[4] = auStack_30[0];
    return param_4;
  }
LAB_82f7b754:
  puVar4 = (unsigned int *)fn_82F68240();
  *puVar4 = 0x16;
  fn_82F63BA0();
  return (unsigned int *)0x0;
}

