extern int fn_82E4FE40();
extern int fn_82E50BE8();
extern int fn_82F691F0();


__int64 fn_82F487F8(int *param_1)

{
  int *piVar1;
  __int64 lVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned short *puVar5;
  
  piVar1 = (int *)param_1[5];
  if (piVar1 == (int *)0x0) {
    lVar2 = -0x3ff2c94e;
  }
  else {
    puVar5 = (unsigned short *)(param_1 + 6);
    lVar2 = (**(int (***)())(*piVar1 + 0x30))(piVar1,puVar5);
    if (-1 < lVar2) {
      param_1[7] = (unsigned int)*puVar5 << 2;
      iVar4 = (**(int (***)())(*param_1 + 0x50))(param_1);
      if (iVar4 != 0) {
        param_1[7] = param_1[7] + 4;
      }
      param_1[0x17] = (unsigned int)*puVar5 * 8 + 4;
      iVar4 = (**(int (***)())(*param_1 + 0x50))(param_1);
      if (iVar4 != 0) {
        param_1[0x17] = param_1[0x17] + 2;
      }
      lVar2 = (**(int (***)())(*(int *)param_1[5] + 0x2c))((int *)param_1[5],param_1 + 8);
      if (-1 < lVar2) {
        if (*puVar5 < 0x80) {
          if (param_1[0xb] != 0) {
            fn_82E4FE40();
          }
          param_1[0xb] = 0;
          uVar3 = fn_82E50BE8((unsigned __int64)*puVar5 << 3,0,0,0,0);
          param_1[0xb] = (int)uVar3;
          if ((uVar3 & 0xffffffff) != 0) {
                    /* WARNING: Subroutine does not return */
            fn_82F691F0(uVar3,0,(unsigned __int64)*puVar5 << 3);
          }
          lVar2 = -0x7ff8fff2;
        }
        else {
          lVar2 = -0x7fffbffb;
        }
      }
    }
  }
  return lVar2;
}

