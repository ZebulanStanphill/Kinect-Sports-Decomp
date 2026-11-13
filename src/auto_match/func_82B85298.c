extern int fn_82ABDD90();
extern int fn_82AE7308();
extern int fn_82B4A218();
extern int fn_82B841E8();
extern int fn_82B84290();


unsigned int * fn_82B85298(unsigned int *param_1,int param_2,unsigned int param_3,unsigned int param_4,unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  unsigned short uVar7;
  
  iVar3 = fn_82B4A218(param_3,param_4,param_2);
  iVar5 = (int)param_5 * 8;
  puVar2 = (unsigned int *)(iVar5 + iVar3);
  uVar4 = puVar2[1];
  *param_1 = *(unsigned int *)(iVar5 + iVar3);
  param_1[1] = uVar4;
  if (((uVar4 & 3) == 1) && (uVar4 = *param_1, (*(unsigned int *)(uVar4 + 8) & 0x3f80) == 0x3800)) {
    iVar3 = fn_82ABDD90(param_2,0x70,0,1);
    uVar4 = *(unsigned int *)(iVar3 + (uVar4 - 8));
    if ((param_4 == (uVar4 & 0x7fff)) &&
       ((param_5 & 0xffffffff) == ((unsigned __int64)(uVar4 >> 0xf) & 0x3fff))) {
      return param_1;
    }
  }
  puVar6 = (unsigned int *)(param_3 + 0x14);
  for (uVar4 = *(unsigned int *)(param_3 + 0x14); ((uVar4 & 1) == 0 && (uVar4 != 0));
      uVar4 = *(unsigned int *)((uVar4 & 0xfffffffe) + 0x28)) {
    if ((*(unsigned int *)(uVar4 + 8) & 0x3f80) == 0x3800) {
      iVar3 = fn_82ABDD90(param_2,0x70,0,1);
      uVar1 = *(unsigned int *)(iVar3 + (uVar4 - 8));
      if (((uVar1 & 0x7fff) == param_4) &&
         (((unsigned __int64)(uVar1 >> 0xf) & 0x3fff) == (param_5 & 0xffffffff))) goto LAB_82b8551c;
    }
  }
  if (param_3 == (-(unsigned int)((*(unsigned int *)(param_2 + 4) & 1) == 0) & *(unsigned int *)(param_2 + 4))) {
    uVar4 = fn_82B841E8(param_2,param_3,0,0x74,0,1);
    uVar1 = uVar4 & 0xfffffffe;
    *(unsigned int *)(uVar1 + 0x28) = *puVar6;
    *(unsigned int *)((*puVar6 & 0xfffffffe) + 0x24) = uVar1 + 0x28;
    *(unsigned int *)(uVar1 + 0x24) = (unsigned int)puVar6 | 1;
    *puVar6 = uVar1;
    iVar5 = fn_82ABDD90(param_2,0x74,0,1);
    puVar6 = (unsigned int *)(iVar5 + (uVar4 - 4));
    *puVar6 = param_4 & 0x7fff |
              (unsigned int)((param_5 & 0xffffffff) << 0xf) & 0x1fff8000 | *puVar6 & 0xe0000000;
  }
  else {
    uVar4 = fn_82B84290(param_2,param_3);
    iVar3 = fn_82ABDD90(param_2,0x70,0,1);
    puVar6 = (unsigned int *)(iVar3 + (uVar4 - 8));
    *puVar6 = (unsigned int)((param_5 & 0xffffffff) << 0xf) & 0x1fff8000 | 0x20000000 | *puVar6 & 0xe0000000
              | param_4 & 0x7fff;
    iVar3 = param_4 * 0x28 + *(int *)(param_2 + 0xc);
    if ((*(int *)(iVar3 + 0x1c) == 0) && ((*(unsigned int *)(iVar3 + 4) & 0x4000000) != 0)) {
      fn_82AE7308(param_2,param_4);
    }
    iVar3 = *(int *)(param_4 * 0x28 + *(int *)(param_2 + 0xc) + 0x1c);
    if (iVar3 != 0) {
      uVar1 = *(unsigned int *)(iVar3 + iVar5) >> 0x12 & 3;
      if (uVar1 == 2) {
        if ((*(unsigned int *)(uVar4 + 0xc) & 4) == 4) goto LAB_82b8551c;
        uVar7 = (unsigned short)*(unsigned int *)(uVar4 + 0xc) | 4;
      }
      else {
        if ((uVar1 != 3) || ((*(unsigned int *)(uVar4 + 0xc) & 6) == 6)) goto LAB_82b8551c;
        uVar7 = (unsigned short)*(unsigned int *)(uVar4 + 0xc) | 6;
      }
      *(unsigned short *)(uVar4 + 0xe) = uVar7;
    }
  }
LAB_82b8551c:
  if ((*param_1 == 0) || ((param_1[1] & 3) == 0)) {
    *puVar2 = uVar4;
    puVar2[1] = puVar2[1] & 0x10000 | 1;
  }
  *param_1 = uVar4;
  param_1[1] = param_1[1] & 0x10000 | 1;
  return param_1;
}

