extern int fn_82522D98();
extern int fn_82522ED8();


__int64 fn_8245D620(int param_1,int *param_2,int *param_3)

{
  int iVar1;
  __int64 lVar2;
  
  lVar2 = 0;
  if ((param_2 == (int *)0x0) || (param_3 == (int *)0x0)) {
    lVar2 = 0x57;
  }
  else {
    *param_2 = 0;
    *param_3 = 0;
  }
  if (((*(int *)(param_1 + 0x54) == 0) || (*(int *)(param_1 + 0x50) != 0)) ||
     (*(int *)(param_1 + 0x18) == 0)) {
    lVar2 = 0x15;
  }
  if (lVar2 == 0) {
    if ((*(int *)(param_1 + 0xc) != 0) && (*(int *)(param_1 + 0x1c) != 0)) {
      if (*(int *)(param_1 + 0x10) != 0) {
        fn_82522ED8();
        *(unsigned int *)(param_1 + 0x10) = 0;
      }
      *(unsigned int *)(param_1 + 0x20) = 0;
                    /* WARNING: Subroutine does not return */
      fn_82522D98((unsigned __int64)*(unsigned int *)(param_1 + 0x1c) + (unsigned __int64)*(unsigned int *)(param_1 + 0x18)
                        + 0x1c);
    }
    if (*param_2 == 0) {
      if (*param_3 == 0) {
        lVar2 = 0;
        iVar1 = *(int *)(param_1 + 0x18);
        *param_2 = *(int *)(param_1 + 8);
        *param_3 = iVar1;
      }
      goto LAB_8245d7c8;
    }
LAB_8245d7d4:
    if (param_3 != (int *)0x0) goto LAB_8245d7e8;
  }
  else {
LAB_8245d7c8:
    if (*param_2 != 0) goto LAB_8245d7d4;
  }
  if (lVar2 != 0) {
    return lVar2;
  }
  lVar2 = 0x65b;
LAB_8245d7e8:
  if (lVar2 == 0) {
    *(unsigned int *)(param_1 + 0x58) = 1;
  }
  return lVar2;
}

