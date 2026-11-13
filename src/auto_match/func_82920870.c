unsigned __int64 fn_82920870(int param_1,unsigned int param_2,int param_3,int param_4,int param_5,int param_6)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  unsigned int *puVar4;
  __int64 lVar5;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned int *puVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  uVar9 = param_4 * param_5 + param_2;
  if (param_2 < uVar9) {
    uVar10 = param_3 * 4 + param_2;
    do {
      if (param_2 < uVar10) {
        puVar8 = (unsigned int *)(param_2 + 4);
        puVar7 = (unsigned int *)(param_1 + -4);
        lVar5 = (unsigned __int64)((uVar10 - param_2) - 1 >> 3) + 1;
        do {
          uVar2 = *(unsigned int *)(param_5 + -4 + (int)puVar8);
          puVar3 = puVar8 + -1;
          puVar4 = (unsigned int *)((int)puVar8 + param_5);
          uVar1 = *puVar8;
          uVar6 = (*puVar3 & 0xff00ff) + (uVar2 & 0xff00ff) + (*puVar4 & 0xff00ff) +
                  (uVar1 & 0xff00ff) + 0x20002;
          puVar8 = puVar8 + 2;
          puVar7 = puVar7 + 1;
          *puVar7 = uVar6 >> 2 & 0xff0000 |
                    uVar6 >> 2 & 0xff |
                    (*puVar3 >> 2 & 0x3fc03fc0) + (uVar2 >> 2 & 0x3fc03fc0) +
                    (*puVar4 >> 2 & 0x3fc03fc0) + (uVar1 >> 2 & 0x3fc03fc0) + 0x800080 & 0xff00ff00;
          lVar5 = lVar5 + -1;
        } while (lVar5 != 0);
      }
      param_2 = param_5 * 2 + param_2;
      param_1 = param_1 + param_6;
      uVar10 = uVar10 + param_5 * 2;
    } while (param_2 < uVar9);
  }
  return 0;
}

