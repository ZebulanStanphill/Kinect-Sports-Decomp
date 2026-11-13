extern int fn_82A29A38();
extern int fn_82AAD090();


void fn_82AADF50(unsigned int *param_1,unsigned __int64 param_2,unsigned int param_3,int param_4,int *param_5)

{
  unsigned short *puVar1;
  unsigned short uVar2;
  unsigned int *puVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned int *apuStack_50 [20];
  
  puVar1 = (unsigned short *)*param_1;
  puVar7 = (unsigned int *)*param_5;
  uVar8 = param_3 & 0xffff;
  uVar2 = *puVar1 & 7;
  puVar3 = param_1;
  if (uVar2 == 1) {
    iVar4 = 3;
  }
  else {
    if (uVar2 == 2) {
      uVar8 = uVar8 | 0x10000;
      goto LAB_82aadfec;
    }
    if (uVar2 == 3) {
      uVar8 = uVar8 | 0x20000;
      goto LAB_82aadfec;
    }
    if (uVar2 != 4) {
      if (uVar2 != 5) {
        if (uVar2 == 6) {
          uVar8 = uVar8 | 0x40000;
        }
        else {
          puVar3 = (unsigned int *)fn_82A29A38();
        }
      }
      goto LAB_82aadfec;
    }
    iVar4 = 5;
  }
  uVar8 = iVar4 << 0x10 | uVar8;
LAB_82aadfec:
  *puVar7 = uVar8;
  puVar9 = puVar7 + 1;
  puVar6 = (unsigned int *)(puVar1 + 2);
  apuStack_50[0] = puVar9;
  if (param_3 == 0x56) {
    uVar8 = *puVar6;
    puVar6 = (unsigned int *)(puVar1 + 4);
    if ((uVar8 >> 0x14 & 0x700 | uVar8 & 0x1800) != 0x1300) {
      puVar3 = (unsigned int *)fn_82A29A38();
    }
    if ((uVar8 & 0xf0000) == 0xf0000) {
      *puVar9 = 0x40020;
      apuStack_50[0] = puVar7 + 2;
    }
    else {
      *puVar9 = 0x440020;
      uVar5 = (unsigned int)((uVar8 & 0x10000) != 0);
      if ((uVar8 & 0x20000) != 0) {
        uVar5 = uVar5 | 4;
      }
      if ((uVar8 & 0x40000) != 0) {
        uVar5 = uVar5 | 0x10;
      }
      if ((uVar8 & 0x80000) != 0) {
        uVar5 = uVar5 | 0x40;
      }
      apuStack_50[0] = puVar7 + 3;
      puVar7[2] = uVar5;
    }
  }
  else if (param_3 == 0x34) {
    *(int *)(param_4 + 0x18) = *(int *)(param_4 + 0x18) + 1;
  }
  uVar8 = *puVar6;
  while ((uVar8 & 0x80000000) != 0) {
    puVar7 = puVar6 + 1;
    uVar5 = 0;
    if ((uVar8 & 0x2000) == 0x2000) {
      if ((*puVar7 & 0x80000000) == 0) {
        fn_82A29A38(puVar3,0);
      }
      uVar5 = *puVar7;
      puVar7 = puVar6 + 2;
    }
    puVar3 = (unsigned int *)fn_82AAD090(uVar8,uVar5,0,param_4,apuStack_50);
    puVar6 = puVar7;
    uVar8 = *puVar7;
  }
  *param_1 = puVar6;
  *param_5 = (int)apuStack_50[0];
  return;
}

