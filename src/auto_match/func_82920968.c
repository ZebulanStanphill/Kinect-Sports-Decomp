unsigned __int64 fn_82920968(int param_1,unsigned int param_2,int param_3,int param_4,int param_5,int param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int *puVar6;
  unsigned int *puVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  
  uVar8 = param_4 * param_5 + param_2;
  if (param_2 < uVar8) {
    uVar9 = param_3 * 4 + param_2;
    do {
      if (param_2 < uVar9) {
        puVar7 = (unsigned int *)(param_2 + 4);
        puVar6 = (unsigned int *)(param_1 + -4);
        lVar5 = (unsigned __int64)((uVar9 - param_2) - 1 >> 3) + 1;
        do {
          uVar2 = *(unsigned int *)(param_5 + -4 + (int)puVar7);
          puVar3 = puVar7 + -1;
          puVar4 = (unsigned int *)((int)puVar7 + param_5);
          uVar1 = *puVar7;
          puVar7 = puVar7 + 2;
          puVar6 = puVar6 + 1;
          *puVar6 = ((*puVar3 & 0xff00) + (uVar2 & 0xff00) + (*puVar4 & 0xff00) + (uVar1 & 0xff00) +
                     0x200 & 0x3fc00 |
                    (*puVar3 & 0xff00ff) + (uVar2 & 0xff00ff) + (*puVar4 & 0xff00ff) +
                    (uVar1 & 0xff00ff) + 0x20002 & 0x3fc03fc) >> 2;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      param_2 = param_5 * 2 + param_2;
      param_1 = param_1 + param_6;
      uVar9 = uVar9 + param_5 * 2;
    } while (param_2 < uVar8);
  }
  return 0;
}

