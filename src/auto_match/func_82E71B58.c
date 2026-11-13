extern unsigned int *auStack_2c;
extern int fn_82E6EFF0();
extern int fn_82E715A8();


__int64 fn_82E71B58(int *param_1)

{
  __int64 lVar1;
  int *piVar2;
  unsigned __int64 uVar3;
  int *piStack_30;
  unsigned int auStack_2c;
  
  piStack_30 = (int *)0x0;
  lVar1 = fn_82E6EFF0(param_1,param_1[0x16]);
  if (-1 < lVar1) {
    auStack_2c = 0;
    lVar1 = (**(int (***)())(*(int *)param_1[0x16] + 0x3c))((int *)param_1[0x16],&auStack_2c);
    if (-1 < lVar1) {
      uVar3 = 0;
      if (auStack_2c != 0) {
        do {
          lVar1 = (**(int (***)())(*(int *)param_1[0x16] + 0x40))
                            ((int *)param_1[0x16],uVar3,&piStack_30);
          if (lVar1 < 0) goto LAB_82e71c4c;
          lVar1 = fn_82E715A8(param_1,piStack_30);
          if (lVar1 < 0) goto LAB_82e71c4c;
          if (piStack_30 != (int *)0x0) {
            (**(int (***)())(*piStack_30 + 8))();
            piStack_30 = (int *)0x0;
          }
          uVar3 = uVar3 + 1;
        } while ((uVar3 & 0xffffffff) < (unsigned __int64)auStack_2c);
      }
      piVar2 = (int *)(**(int (***)())(*param_1 + 0x20))(param_1);
      if (piVar2 != (int *)0x0) {
        lVar1 = (**(int (***)())(*piVar2 + 0x14))();
      }
    }
  }
LAB_82e71c4c:
  if (piStack_30 != (int *)0x0) {
    (**(int (***)())(*piStack_30 + 8))();
  }
  return lVar1;
}

