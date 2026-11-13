#define TBLr 0
extern int fn_82A5A670();
extern int fn_82F691F0();


void fn_82A5A810(int param_1,unsigned __int64 param_2,int param_3)

{
  unsigned __int64 uVar1;
  __int64 lVar2;
  
  *(int *)(param_1 + 0x78) = param_3;
  lVar2 = (**(int (***)())(**(int **)(param_3 + 0x84) + 8))();
  if ((lVar2 == 0) || ((int)lVar2 == -1)) {
    *(unsigned int *)(param_1 + 0x7c) = 0;
  }
  else {
    fn_82A5A670(param_1);
    *(unsigned int *)(param_1 + 0x7c) = 1;
  }
  *(unsigned int *)(param_1 + 0x80) = 2;
  *(unsigned int *)(param_1 + 0x23c) = 2;
  uVar1 = TBLr;
  *(unsigned __int64 *)(param_1 + 0x2a0) = uVar1;
  *(unsigned __int64 *)(param_1 + 0x2a8) = uVar1;
                    /* WARNING: Subroutine does not return */
  fn_82F691F0(param_1 + 0x240,0,0x50);
}

