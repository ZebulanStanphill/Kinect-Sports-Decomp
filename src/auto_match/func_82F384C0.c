extern unsigned int *auStack_34;
extern int fn_82F37718();
extern int fn_82F377E8();
extern int fn_82F382F0();
extern unsigned int uStack_3c;


__int64 fn_82F384C0(int param_1,unsigned int *param_2)

{
  int iVar1;
  __int64 lVar2;
  int *piStack_40;
  unsigned int uStack_3c;
  int *piStack_38;
  unsigned int auStack_34 [13];
  
  lVar2 = 0;
  piStack_38 = (int *)0x0;
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = 0xffffffff;
  }
  auStack_34[0] = 0;
  uStack_3c = 0;
  iVar1 = fn_82F382F0(param_1,0xffffffff820ed0a8,0,&uStack_3c);
  if (iVar1 < 0) {
    piStack_40 = (int *)0x0;
    iVar1 = (**(int (***)())**(unsigned int **)(param_1 + 4))
                      (*(unsigned int **)(param_1 + 4),0xffffffff82154c48,&piStack_40);
    if ((-1 < iVar1) &&
       ((**(int (***)())(*piStack_40 + 0x10))(piStack_40,&piStack_38), piStack_40 != (int *)0x0)) {
      (**(int (***)())(*piStack_40 + 8))();
      piStack_40 = (int *)0x0;
    }
    if (piStack_38 == (int *)0x0) {
      return -0x3ff2c94a;
    }
    lVar2 = (**(int (***)())(*piStack_38 + 0x1c))(piStack_38,0xffffffff820ed0a8,auStack_34);
    if (lVar2 < 0) goto LAB_82f38610;
    iVar1 = fn_82F37718(param_1 + 8,auStack_34[0],&uStack_3c);
    if (iVar1 == 0) {
      lVar2 = -0x7ff8fff2;
      goto LAB_82f38610;
    }
  }
  else {
    fn_82F377E8(param_1 + 8,uStack_3c);
    if (*piStack_40 == 0) {
      lVar2 = -0x7fff0001;
      goto LAB_82f38610;
    }
  }
  if (param_2 != (unsigned int *)0x0) {
    *param_2 = uStack_3c;
  }
LAB_82f38610:
  if (piStack_38 != (int *)0x0) {
    (**(int (***)())(*piStack_38 + 8))();
  }
  return lVar2;
}

