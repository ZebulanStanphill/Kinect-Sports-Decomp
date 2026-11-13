extern int fn_82F691F0();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82E6B780(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned __int64 param_5)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar2 = *(unsigned int *)(*param_1 + 0x100);
  uVar3 = 0;
  uVar1 = (int)uVar2 / (int)param_4;
  trapWord(6,param_4,0);
  trapWord(5,param_4 & ~((((unsigned __int64)uVar2 & 0x7fffffff) << 1 | (unsigned __int64)(uVar2 >> 0x1f)) - 1),
           0xffff);
  uVar2 = uVar1;
  while (1 < uVar2) {
    uVar3 = uVar3 + 1;
    uVar2 = uVar1 >> (uVar3 & 0x3f);
  }
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_5,0,0x70);
}

