unsigned __int64 fn_82FB64A8(int param_1,int *param_2,int param_3,int *param_4,int param_5,int *param_6,
                       unsigned char *param_7)

{
  int *piVar1;
  int iVar2;
  __int64 lVar3;
  unsigned char uVar4;
  unsigned __int64 uVar5;
  
  lVar3 = (__int64)((*(int *)(param_1 + 0xa4) - *(int *)(param_1 + 0xa0)) / 0x34) + -1;
  if (-1 < lVar3) {
    uVar5 = lVar3 * 0x34 + (unsigned __int64)*(unsigned int *)(param_1 + 0xa0);
    do {
      iVar2 = *(int *)uVar5;
      if ((iVar2 == -1) || (piVar1 = param_4, iVar2 == param_3)) {
LAB_82fb6524:
        iVar2 = ((int *)uVar5)[1];
        if ((iVar2 == -1) || (piVar1 = param_6, iVar2 == param_5)) {
LAB_82fb659c:
          uVar4 = 0;
LAB_82fb65a0:
          *param_7 = uVar4;
          return uVar5;
        }
        for (; (piVar1 != (int *)0x0 && (piVar1 != param_2)); piVar1 = (int *)piVar1[4]) {
          if (piVar1[3] == iVar2) {
            iVar2 = (**(int (***)())(*piVar1 + 0x14))(piVar1);
            uVar4 = 1;
            if (iVar2 == 8) goto LAB_82fb65a0;
            goto LAB_82fb659c;
          }
        }
      }
      else {
        for (; (piVar1 != (int *)0x0 && (piVar1 != param_2)); piVar1 = (int *)piVar1[4]) {
          if (piVar1[3] == iVar2) goto LAB_82fb6524;
        }
      }
      lVar3 = lVar3 + -1;
      uVar5 = uVar5 - 0x34;
    } while (-1 < lVar3);
  }
  return (unsigned __int64)*(unsigned int *)(param_1 + 0xa0);
}

