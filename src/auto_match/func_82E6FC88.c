extern unsigned int *auStack_38;
extern unsigned int *auStack_40;
extern int fn_82E50BE8();
extern int fn_82F691F0();


__int64 fn_82E6FC88(int param_1,unsigned __int64 param_2)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned short auStack_40 [4];
  unsigned __int64 auStack_38 [7];
  
  auStack_38[0] = 0;
  lVar1 = (**(int (***)())(**(int **)(param_1 + 0x2c) + 0x10))(*(int **)(param_1 + 0x2c),auStack_38);
  if ((-1 < lVar1) && (auStack_38[0] < param_2)) {
    auStack_40[0] = 0;
    lVar1 = (**(int (***)())(**(int **)(param_1 + 0x58) + 0x30))(*(int **)(param_1 + 0x58),auStack_40);
    if (-1 < lVar1) {
      lVar2 = (param_2 & 0xffffffff) - (auStack_38[0] & 0xffffffff);
      lVar1 = fn_82E50BE8(lVar2,0,0,0,0);
      if (lVar1 != 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(lVar1,0,lVar2);
      }
      lVar1 = -0x7ff8fff2;
    }
  }
  return lVar1;
}

