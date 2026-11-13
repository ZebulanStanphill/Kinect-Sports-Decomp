extern int fn_8295D318();


unsigned __int64 fn_8295F140(int param_1)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  __int64 lVar7;
  
  uVar5 = 0;
  uVar1 = **(unsigned int **)(param_1 + 0x104);
  uVar2 = (unsigned __int64)uVar1 & 0xfffff;
  if ((uVar1 & 0xfffff) != 0) {
    lVar7 = 0;
    lVar6 = ((unsigned __int64)uVar1 & 0xfffff) << 2;
    do {
      uVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x104) + 8);
      uVar3 = fn_8295D318(param_1,0x20,
                                (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x104) + 0x10) + lVar7,1,
                                lVar7 + uVar4,lVar6 + uVar4,0,uVar2);
      if ((int)uVar3 < 0) {
        return uVar3;
      }
      uVar5 = uVar5 + 1;
      lVar7 = lVar7 + 4;
      lVar6 = lVar6 + 4;
    } while ((uVar5 & 0xffffffff) < uVar2);
  }
  return 0;
}

