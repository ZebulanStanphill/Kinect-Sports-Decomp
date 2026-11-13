extern int fn_82E4FE08();
extern int fn_82E50338();
extern int fn_82F68CC0();


__int64 fn_82E7E900(short *param_1,short *param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  __int64 lVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  
  if ((param_2 == (short *)0x0) || (param_1 == param_2)) {
    lVar4 = -0x7fffbffd;
  }
  else {
    lVar4 = fn_82E50338(param_1,param_2);
    if (lVar4 < 0) {
      lVar4 = 0;
      if (*param_2 == 0x1041) {
        *param_1 = 0x1041;
        *(unsigned int *)(param_1 + 4) = *(unsigned int *)(param_2 + 4);
        puVar3 = (unsigned int *)fn_82E4FE08(*(int *)(param_2 + 4) << 3);
        *(unsigned int **)(param_1 + 6) = puVar3;
        if (puVar3 == (unsigned int *)0x0) {
LAB_82e7e9e0:
          lVar4 = -0x7ff8fff2;
        }
        else {
          uVar5 = 0;
          if (*(int *)(param_2 + 4) != 0) {
            puVar6 = (unsigned int *)(*(int *)(param_2 + 6) + -8);
            do {
              *puVar3 = puVar6[2];
              uVar2 = fn_82E4FE08(puVar6[2]);
              puVar3[1] = (int)uVar2;
              if ((uVar2 & 0xffffffff) == 0) goto LAB_82e7e9e0;
              puVar1 = puVar6 + 3;
              puVar6 = puVar6 + 2;
              fn_82F68CC0(uVar2,*puVar1,*puVar6);
              uVar5 = uVar5 + 1;
              puVar3 = puVar3 + 2;
            } while (uVar5 < *(unsigned int *)(param_2 + 4));
          }
        }
      }
      else {
        lVar4 = -0x3ff2c918;
      }
    }
  }
  return lVar4;
}

