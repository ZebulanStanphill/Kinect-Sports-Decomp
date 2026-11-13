extern int fn_827BA360();
extern int fn_82F691F0();


void fn_827BA4E8(int param_1,int param_2)

{
  short sVar1;
  short sVar2;
  unsigned __int64 uVar3;
  
  if (param_2 == 1) {
    sVar1 = *(short *)(param_1 + 0x5c);
    sVar2 = *(short *)(param_1 + 0x58);
  }
  else {
    sVar1 = *(short *)(param_1 + 0x5e);
    sVar2 = *(short *)(param_1 + 0x5a);
  }
  uVar3 = ((__int64)sVar1 - (__int64)sVar2) + 1;
  fn_827BA360(param_1 + 0x24,uVar3,0);
  *(int *)(param_1 + 0x28) = (int)uVar3;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(*(unsigned int *)(param_1 + 0x24),0,uVar3 & 0xffffffff);
}

