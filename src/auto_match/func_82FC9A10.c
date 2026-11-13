extern int fn_82F691F0();
extern int fn_82FC9910();
extern unsigned int lbl_8216E020;


unsigned __int64 fn_82FC9A10(unsigned int *param_1,int *param_2,unsigned int param_3,unsigned int param_4)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  unsigned int *puVar3;
  int iVar4;
  __int64 lVar5;
  float *pfVar6;
  
  *param_1 = param_3;
  param_1[1] = param_4;
  iVar4 = 0;
  pfVar6 = (float *)&lbl_8216E020;
  puVar3 = param_1 + 0x1b;
  lVar5 = 8;
  do {
    uVar2 = fn_82FC9910((__int64)((float)*param_1 * *pfVar6) & 0xffffffff);
    if (uVar2 < param_1[1]) {
      uVar2 = param_1[1];
    }
    lVar5 = lVar5 + -1;
    puVar3 = puVar3 + 1;
    *puVar3 = uVar2;
    iVar4 = uVar2 + iVar4;
    pfVar6 = pfVar6 + 1;
  } while (lVar5 != 0);
  param_1[3] = iVar4 * 4;
  uVar1 = (**(int (***)())(*param_2 + 4))(param_2);
  param_1[2] = (unsigned int)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    return 0x34;
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar1,0,param_1[3]);
}

