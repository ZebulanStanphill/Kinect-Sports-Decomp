extern unsigned int *auStack_40;
extern int fn_82F691F0();
extern int fn_82FBC888();
extern unsigned int iStack_2c;
extern unsigned int uStack_4c;


unsigned __int64 fn_82FC9070(int param_1,int *param_2,unsigned int param_3)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  double dVar4;
  unsigned int uStack_4c;
  unsigned int auStack_40 [5];
  int iStack_2c;
  
  auStack_40[0] = 0;
  dVar4 = (double)param_3;
  uVar3 = 4;
  do {
    uStack_4c = (unsigned int)(__int64)((double)*(float *)(uVar3 + 0x831bc6bc) * dVar4);
    uVar2 = fn_82FBC888(uStack_4c);
    *(unsigned int *)((int)auStack_40 + uVar3) = uVar2;
    uVar3 = uVar3 + 4;
  } while (uVar3 < 0x18);
  *(int *)(param_1 + 0x14) = iStack_2c;
  uVar1 = (**(int (***)())(*param_2 + 4))(param_2,iStack_2c << 2);
  *(int *)(param_1 + 0x18) = (int)uVar1;
  if ((uVar1 & 0xffffffff) == 0) {
    return 0x34;
  }
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x14) * 4 + (int)uVar1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar1,0);
}

