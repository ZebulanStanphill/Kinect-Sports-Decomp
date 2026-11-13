extern unsigned int *auStack_2c;
extern int fn_82E47DC0();


__int64 fn_82E48E58(int *param_1,unsigned int *param_2)

{
  __int64 lVar1;
  int *piStack_30;
  unsigned int auStack_2c [11];
  
  lVar1 = 0;
  piStack_30 = (int *)0x0;
  if ((unsigned int)param_1[0x19] < 2) {
    if (param_1[0x19] == 1) {
      piStack_30 = *(int **)param_1[0x1d];
      if (piStack_30 == (int *)0x0) {
        return -0x7fff0001;
      }
      (**(int (***)())(*piStack_30 + 4))();
      goto LAB_82e48f7c;
    }
  }
  else {
    auStack_2c[0] = 0;
    lVar1 = (**(int (***)())(*param_1 + 0xb4))(param_1,auStack_2c);
    if ((((lVar1 < 0) || (lVar1 = fn_82E47DC0(auStack_2c[0],0,&piStack_30), lVar1 < 0)) ||
        (lVar1 = (**(int (***)())(*param_1 + 0xb8))(param_1,piStack_30), lVar1 < 0)) ||
       ((lVar1 = (**(int (***)())(*param_1 + 0xb0))(param_1), lVar1 < 0 ||
        (lVar1 = (**(int (***)())(*param_1 + 0xa8))(param_1,piStack_30), lVar1 < 0))))
    goto LAB_82e48f24;
LAB_82e48f7c:
    if ((int)lVar1 < 0) goto LAB_82e48f24;
  }
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = piStack_30;
    piStack_30 = (int *)0x0;
  }
LAB_82e48f24:
  if (piStack_30 != (int *)0x0) {
    (**(int (***)())(*piStack_30 + 8))();
  }
  return lVar1;
}

