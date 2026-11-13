extern int fn_82250A18();
extern int fn_82417F58();
extern unsigned int lbl_821916FC;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_832975B0;


unsigned __int64 fn_82419C70(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = 1;
  iVar1 = fn_82417F58();
  if (iVar1 != 0) {
    if (param_1[0xb8] != 0) {
      iVar2 = lbl_832975B0;
      if (lbl_832975B0 == 0) {
        iVar2 = fn_82250A18();
      }
      if ((*(char *)(iVar2 + 4) == '\0') && (iVar2 = 0, *(int *)(iVar1 + 0x24) != 0))
      goto LAB_82419cd8;
    }
    iVar2 = 1;
  }
LAB_82419cd8:
  if (((((param_1[0xc] == 0) && (param_1[0xac] == 0)) && (lbl_821916FC < (float)param_1[0xb9])) &&
      ((float)param_1[0xba] == ltcg_pool_0_0f)) && ((param_1[0xa7] == 0 || (param_1[0xa7] == 6)))) {
    if (param_1 == *(int **)(*param_1 + 0x2b20)) {
      iVar1 = *(int *)(*(int *)(*(int *)(*param_1 + 0xd4) + 0x18) + 0xc);
    }
    else {
      iVar1 = 0;
    }
    if (((iVar1 == 0) && (iVar2 != 0)) &&
       ((param_1[0x9f] == 0 &&
        (iVar1 = (**(int (***)())(*(int *)param_1[1] + 0x40))
                           ((int *)param_1[1],
                            (unsigned __int64)(unsigned int)param_1[6] * 0x1ac + (unsigned __int64)(unsigned int)param_1[2]),
        iVar1 != 0)))) {
      return 1;
    }
  }
  return 0;
}

