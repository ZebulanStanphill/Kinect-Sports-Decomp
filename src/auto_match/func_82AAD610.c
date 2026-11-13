#define true 1
#define CONCAT44(h,l) ((unsigned __int64)((((unsigned int)(h)) << 32) | ((unsigned int)(l))))
extern int fn_82A29A38();
extern int fn_82AACF70();
extern int fn_82AAD090();
extern int fn_82AAD208();
extern int fn_82AAD2E0();


void fn_82AAD610(int *param_1,unsigned int param_2,unsigned int param_3,int param_4,int *param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int *puVar9;
  unsigned __int64 uVar10;
  unsigned int uVar11;
  unsigned int *puVar12;
  unsigned int *puVar13;
  unsigned int *apuStack_90 [36];
  
  puVar13 = (unsigned int *)*param_1;
  puVar12 = (unsigned int *)*param_5;
  uVar6 = *puVar13;
  uVar2 = uVar6 & 0xffff;
  if ((puVar13[1] & 0x80000000) == 0) {
    fn_82A29A38();
  }
  uVar1 = puVar13[1];
  puVar9 = puVar13 + 2;
  uVar8 = uVar1;
  if ((param_2 < 0xffff0200) &&
     (*param_1 == *(int *)((*(int *)(param_4 + 0x1ac) + 0x19) * 8 + param_4))) {
    if (*(int *)(*(int *)(param_4 + 0x1ac) * 8 + param_4 + 0xcc) == 0) {
      fn_82A29A38();
    }
    if ((uVar6 & 0x40000000) != 0) {
      fn_82A29A38();
    }
    uVar8 = uVar1 & 0x8fffe010 | 0xf0010;
  }
  puVar7 = apuStack_90[0];
  if ((uVar6 & 0x10000000) != 0) {
    puVar7 = (unsigned int *)*puVar9;
    puVar9 = puVar13 + 3;
    uVar8 = uVar8 & 0x8fffe021 | 0xf0021;
    if (param_2 < 0xffff0200) {
      fn_82A29A38();
    }
  }
  if (param_3 == 0xd) {
    param_3 = 0x430000;
    if (uVar2 != 0x50) {
      param_3 = 0x20000;
    }
    param_3 = param_3 | 0xd;
LAB_82aad824:
    *puVar12 = param_3;
  }
  else if (param_3 == 0x45) {
    uVar11 = 0x45;
    if (uVar2 == 0x14) {
      uVar11 = 0x45;
    }
    else {
      if (uVar2 == 0x15) {
        uVar11 = 0x10000;
      }
      else if (uVar2 == 0x16) {
        uVar11 = 0x20000;
      }
      else if (uVar2 == 0x17) {
        uVar11 = 0x30000;
      }
      else {
        if (uVar2 != 0x18) {
          fn_82A29A38();
          goto LAB_82aad788;
        }
        uVar11 = 0x40000;
      }
      uVar11 = uVar11 | 0x45;
    }
LAB_82aad788:
    *puVar12 = uVar11;
  }
  else {
    if (((param_3 == 0x3d) || (param_3 == 0x3c)) || (param_3 == 0x4c)) {
LAB_82aad820:
      param_3 = param_3 & 0xffff;
      goto LAB_82aad824;
    }
    if ((param_3 == 0x51) || (param_3 == 0x55)) {
      *puVar12 = param_3 & 0xffff | 0x20000;
    }
    else {
      if ((param_3 != 0x25) && (param_3 != 0x26)) goto LAB_82aad820;
      if (*(int *)(param_4 + 4) == 1) {
        uVar11 = 0;
      }
      else {
        uVar11 = 1;
        if (*(int *)(param_4 + 4) != 2) {
          uVar11 = uVar1 >> 0x16 & 1;
        }
      }
      *puVar12 = uVar11 << 0x18 | param_3 & 0xffff;
    }
  }
  apuStack_90[0] = puVar12 + 1;
  uVar4 = fn_82AACF70(uVar8,param_4,apuStack_90);
  if ((*puVar9 & 0x80000000) == 0) {
    uVar4 = fn_82A29A38();
  }
  uVar8 = *puVar9;
  uVar10 = (unsigned __int64)uVar8;
  puVar13 = puVar9 + 1;
  uVar11 = 0;
  if ((uVar8 & 0x2000) == 0x2000) {
    if ((*puVar13 & 0x80000000) == 0) {
      fn_82A29A38(uVar4,0);
    }
    uVar11 = *puVar13;
    puVar13 = puVar9 + 2;
  }
  if (((uVar2 != 7) && (uVar2 != 0xf)) && (uVar2 != 0x20)) {
    if (uVar2 == 0x25) {
      fn_82AAD090(uVar10,uVar11,0,param_4,apuStack_90);
      uVar2 = *puVar13;
      while ((uVar2 & 0x80000000) != 0) {
        puVar13 = puVar13 + 1;
        uVar2 = *puVar13;
      }
      goto LAB_82aada10;
    }
    puVar12 = puVar13;
    if (uVar2 != 0x4f) {
      while( true ) {
        puVar13 = puVar12;
        fn_82AAD090(uVar10,uVar11,0,param_4,apuStack_90);
        uVar2 = *puVar13;
        uVar10 = (unsigned __int64)uVar2;
        if ((uVar2 & 0x80000000) == 0) break;
        puVar12 = puVar13 + 1;
        uVar11 = 0;
        if ((uVar2 & 0x2000) == 0x2000) {
          if ((*puVar12 & 0x80000000) == 0) {
            fn_82A29A38();
          }
          uVar11 = *puVar12;
          puVar12 = puVar13 + 2;
        }
      }
      goto LAB_82aada10;
    }
  }
  uVar3 = uVar8 & 0xf000000;
  if (uVar3 == 0x1000000) {
    uVar10 = CONCAT44(uVar8,uVar8) & 0xfffffffffeffffff;
  }
  else if (uVar3 == 0x3000000) {
    uVar10 = uVar10 & 0xfffffffffcffffff | 0x2000000;
  }
  else if (uVar3 == 0x5000000) {
    uVar10 = CONCAT44(uVar8,uVar8) & 0xfffffffffeffffff | 0x4000000;
  }
  else {
    if (uVar3 == 0x8000000) {
      lVar5 = 7;
    }
    else {
      if (uVar3 != 0xc000000) goto LAB_82aad990;
      lVar5 = 0xb;
    }
    uVar10 = lVar5 << 0x18 | uVar10 & 0xfffffffff0ffffff;
  }
LAB_82aad990:
  uVar4 = fn_82AAD090(uVar10,uVar11,0x100000,param_4,apuStack_90);
  if (uVar2 == 0x20) {
    if ((*puVar13 & 0x80000000) == 0) {
      uVar4 = fn_82A29A38();
    }
    uVar2 = *puVar13;
    puVar12 = puVar13 + 1;
    uVar8 = 0;
    if ((uVar2 & 0x2000) == 0x2000) {
      if ((*puVar12 & 0x80000000) == 0) {
        fn_82A29A38(uVar4,0);
      }
      uVar8 = *puVar12;
      puVar12 = puVar13 + 2;
    }
    puVar13 = puVar12;
    fn_82AAD090(uVar2,uVar8,0,param_4,apuStack_90);
  }
  if ((*puVar13 & 0x80000000) != 0) {
    fn_82A29A38();
  }
LAB_82aada10:
  if ((uVar6 & 0x10000000) != 0) {
    fn_82AAD2E0(uVar1,puVar7,0xe40000,param_4,apuStack_90);
  }
  if ((uVar6 & 0x40000000) != 0) {
    if (0xffff01ff < param_2) {
      fn_82A29A38();
    }
    fn_82AAD208(*(unsigned int *)(*(int *)((*(int *)(param_4 + 0x1ac) + 0x19) * 8 + param_4) + 4),
                  0x10,param_4,apuStack_90);
    uVar6 = *(int *)(param_4 + 0x1ac) + 1;
    *(unsigned int *)(param_4 + 0x1ac) = uVar6;
    if (*(unsigned int *)(param_4 + 0x1a8) < uVar6) {
      fn_82A29A38();
    }
  }
  *param_5 = (int)apuStack_90[0];
  *param_1 = (int)puVar13;
  return;
}

