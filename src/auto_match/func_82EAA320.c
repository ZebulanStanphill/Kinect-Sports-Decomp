extern int fn_82E9A930();
extern unsigned int lbl_8215F864;
extern unsigned int uStack_50;


void fn_82EAA320(int param_1,unsigned int *param_2,unsigned int *param_3,unsigned int *param_4,unsigned int *param_5,int param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  unsigned int uStack_50;
  
  if (param_6 != 0) {
    uStack_50 = *param_2;
    if (uStack_50 == 0x4000) {
LAB_82eaa354:
      *param_4 = 0x4000;
      *param_5 = 0x4000;
      return;
    }
    uVar8 = *param_3;
    goto LAB_82eaa680;
  }
  uVar10 = param_2[3];
  uVar1 = param_2[2];
  uVar2 = param_2[1];
  uVar3 = *param_2;
  uVar4 = *param_3;
  uVar5 = param_3[1];
  uVar6 = param_3[2];
  uVar7 = param_3[3];
  uVar8 = (unsigned int)(uVar10 == 0x4000) + ((unsigned int)LZCOUNT(uVar1 - 0x4000) >> 5) +
          ((unsigned int)LZCOUNT(uVar2 - 0x4000) >> 5) + (unsigned int)(uVar3 == 0x4000);
  if (2 < uVar8) goto LAB_82eaa354;
  if (uVar8 != 1) {
    if (uVar8 == 2) {
      uVar8 = 0;
      uVar9 = 0;
      if (uVar3 != 0x4000) {
        uVar8 = uVar3;
        uVar9 = uVar4;
      }
      if (uVar2 != 0x4000) {
        uVar8 = uVar2 + uVar8;
        uVar9 = uVar5 + uVar9;
      }
      if (uVar1 != 0x4000) {
        uVar8 = uVar1 + uVar8;
        uVar9 = uVar6 + uVar9;
      }
      if (uVar10 != 0x4000) {
        uVar8 = uVar10 + uVar8;
        uVar9 = uVar7 + uVar9;
      }
      uStack_50 = ((int)uVar8 >> 1) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 1) != 0);
      uVar8 = ((int)uVar9 >> 1) + (unsigned int)((int)uVar9 < 0 && (uVar9 & 1) != 0);
    }
    else {
      uStack_50 = fn_82E9A930();
      uVar8 = fn_82E9A930(uVar4,uVar5,uVar6,uVar7);
    }
    goto LAB_82eaa680;
  }
  uVar8 = uVar7;
  if (uVar3 == 0x4000) {
    if ((int)uVar2 < (int)uVar10) {
      if ((int)uVar1 < (int)uVar2) {
LAB_82eaa428:
        uVar10 = uVar2;
      }
      else if ((int)uVar1 < (int)uVar10) {
        uVar10 = uVar1;
      }
    }
    else if (((int)uVar10 <= (int)uVar1) && (uVar10 = uVar1, (int)uVar2 <= (int)uVar1))
    goto LAB_82eaa428;
    uStack_50 = uVar10;
    if ((int)uVar5 < (int)uVar7) {
joined_r0x82eaa4b8:
      uVar8 = uVar5;
      if ((int)uVar6 < (int)uVar5) goto LAB_82eaa680;
      goto joined_r0x82eaa538;
    }
    if ((int)uVar7 <= (int)uVar6) {
joined_r0x82eaa558:
      uVar8 = uVar6;
      if ((int)uVar6 < (int)uVar5) goto LAB_82eaa680;
LAB_82eaa5bc:
      uVar8 = uVar5;
      goto LAB_82eaa680;
    }
  }
  else {
    if (uVar2 == 0x4000) {
      if ((int)uVar3 < (int)uVar10) {
        if ((int)uVar1 < (int)uVar3) {
LAB_82eaa4a8:
          uStack_50 = uVar3;
        }
        else {
          uStack_50 = uVar10;
          if ((int)uVar1 < (int)uVar10) {
            uStack_50 = uVar1;
          }
        }
      }
      else {
        uStack_50 = uVar10;
        if (((int)uVar10 <= (int)uVar1) && (uStack_50 = uVar1, (int)uVar3 <= (int)uVar1))
        goto LAB_82eaa4a8;
      }
      uVar5 = uVar4;
      if ((int)uVar7 <= (int)uVar4) {
        if ((int)uVar6 < (int)uVar7) goto LAB_82eaa680;
LAB_82eaa5c4:
        uVar8 = uVar4;
        if ((int)uVar6 < (int)uVar4) {
          uVar8 = uVar6;
        }
        goto LAB_82eaa680;
      }
      goto joined_r0x82eaa4b8;
    }
    if (uVar1 != 0x4000) {
      uVar8 = uStack_50;
      if (uVar10 != 0x4000) goto LAB_82eaa680;
      if ((int)uVar2 < (int)uVar3) {
        if ((int)uVar1 < (int)uVar2) {
LAB_82eaa5a8:
          uStack_50 = uVar2;
        }
        else {
          uStack_50 = uVar3;
          if ((int)uVar1 < (int)uVar3) {
            uStack_50 = uVar1;
          }
        }
      }
      else {
        uStack_50 = uVar3;
        if (((int)uVar3 <= (int)uVar1) && (uStack_50 = uVar1, (int)uVar2 <= (int)uVar1))
        goto LAB_82eaa5a8;
      }
      if ((int)uVar4 <= (int)uVar5) {
        uVar8 = uVar4;
        if ((int)uVar6 < (int)uVar4) goto LAB_82eaa680;
        goto joined_r0x82eaa558;
      }
      if ((int)uVar5 <= (int)uVar6) goto LAB_82eaa5c4;
      goto LAB_82eaa5bc;
    }
    if ((int)uVar2 < (int)uVar10) {
      if ((int)uVar3 < (int)uVar2) {
LAB_82eaa518:
        uStack_50 = uVar2;
      }
      else {
        uStack_50 = uVar10;
        if ((int)uVar3 < (int)uVar10) {
          uStack_50 = uVar3;
        }
      }
    }
    else {
      uStack_50 = uVar10;
      if (((int)uVar10 <= (int)uVar3) && (uStack_50 = uVar3, (int)uVar2 <= (int)uVar3))
      goto LAB_82eaa518;
    }
    uVar6 = uVar4;
    if ((int)uVar7 <= (int)uVar5) {
      if ((int)uVar4 < (int)uVar7) goto LAB_82eaa680;
      goto joined_r0x82eaa558;
    }
    uVar8 = uVar5;
    if ((int)uVar4 < (int)uVar5) goto LAB_82eaa680;
joined_r0x82eaa538:
    uVar8 = uVar6;
    if ((int)uVar6 < (int)uVar7) goto LAB_82eaa680;
  }
  uVar8 = uVar7;
LAB_82eaa680:
  if (uStack_50 != 0x4000) {
    uStack_50 = (int)(*(int *)(&lbl_8215F864 + (uStack_50 & 3) * 4) + uStack_50) >> 1;
    uVar8 = (int)(*(int *)(&lbl_8215F864 + (uVar8 & 3) * 4) + uVar8) >> 1;
    if (*(int *)(param_1 + 0x314) != 0) {
      if ((uStack_50 & 1) != 0) {
        if ((int)uStack_50 < 1) {
          uStack_50 = uStack_50 + 1;
        }
        else {
          uStack_50 = uStack_50 - 1;
        }
      }
      if ((uVar8 & 1) != 0) {
        if (0 < (int)uVar8) {
          *param_4 = uStack_50;
          *param_5 = uVar8 - 1;
          return;
        }
        uVar8 = uVar8 + 1;
      }
    }
  }
  *param_4 = uStack_50;
  *param_5 = uVar8;
  return;
}

