typedef unsigned char bool;
extern int fn_82F691F0();
extern int fn_82F6E248();


void fn_82829620(int param_1,unsigned __int64 param_2,__int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  bool bVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned int uVar4;
  __int64 lVar5;
  
  uVar3 = (unsigned __int64)*(unsigned int *)(param_1 + 0x2c);
  if ((param_4 & 0xffffffff) < uVar3) {
    bVar1 = (param_5 & 0xffffffff) < uVar3;
  }
  else {
    bVar1 = (unsigned int)param_5 < (unsigned int)param_4;
    uVar3 = param_4;
  }
  uVar4 = (unsigned int)uVar3;
  if (!bVar1) {
    uVar4 = (unsigned int)param_5;
  }
  *(unsigned int *)(param_1 + 0x2c) = uVar4;
  uVar3 = (*(unsigned int *)(param_1 + 0x14) + param_4) - 1 & ~(param_4 - 1);
  lVar5 = ((uVar3 + param_3 + param_5) - 1 & ~(param_5 - 1)) - uVar3;
  uVar2 = fn_82F6E248(lVar5,param_4);
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(uVar2,0,lVar5);
}

