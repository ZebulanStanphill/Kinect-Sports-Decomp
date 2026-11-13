extern int fn_82642670();
extern int fn_82642740();


void fn_826427F8(int param_1,unsigned __int64 param_2,unsigned int *param_3,int param_4)

{
  unsigned int uVar1;
  unsigned __int64 uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  unsigned int *puVar8;
  
  if (((*(unsigned int *)(param_1 + 0x14) & 0x40000) == 0) &&
     ((param_4 == 0 || ((*(unsigned int *)(param_4 + 0x14) & 0x20000) == 0)))) {
    uVar4 = (unsigned __int64)(*(unsigned int *)(param_1 + 0x14) >> 5) & 0x1f;
    uVar6 = 0;
    puVar8 = (unsigned int *)((*(int *)(param_1 + 0x1c) + *(int *)(param_1 + 0x18) + 9) * 4 + param_1);
    if (param_4 == 0) {
      puVar5 = (unsigned int *)0x0;
      uVar2 = 0;
      uVar3 = 0;
    }
    else {
      uVar1 = *(unsigned int *)(param_4 + 0x14);
      puVar5 = (unsigned int *)(param_4 + 0x20);
      uVar3 = uVar1 & 0x1f;
      uVar2 = (unsigned __int64)(uVar1 >> 5) & 0x1f;
      if ((uVar1 & 0x1f) != 0) {
        uVar3 = uVar3 - 1;
      }
    }
    for (; uVar2 != 0; uVar2 = uVar2 - 1) {
      uVar1 = *puVar5;
      for (; ((uVar6 & 0xffffffff) < uVar4 && ((unsigned char)*puVar8 < (unsigned char)uVar1)); puVar8 = puVar8 + 1) {
        fn_82642670(param_1,param_2,puVar8);
        uVar6 = uVar6 + 1;
      }
      if (((*puVar8 ^ *puVar5) & 0xf00) != 0) {
        fn_82642740(param_1,param_2,puVar8,puVar5);
      }
      puVar8 = puVar8 + 1;
      puVar5 = puVar5 + 1;
      uVar6 = uVar6 + 1;
    }
    if ((uVar6 & 0xffffffff) < uVar4) {
      lVar7 = uVar4 - uVar6;
      do {
        fn_82642670(param_1,param_2,puVar8);
        lVar7 = lVar7 + -1;
        puVar8 = puVar8 + 1;
      } while (lVar7 != 0);
    }
    *param_3 = (uVar3 & 0xf) << 0x14 | *param_3 & 0xff0fffff;
  }
  return;
}

