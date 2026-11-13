extern int fn_82417D18();
extern int fn_82417F58();
extern int fn_8241A8A0();
extern int fn_82F622E0();


void fn_8241CC60(int param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  
  uVar3 = 0;
  if (*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 2 != 0) {
    uVar2 = 0;
    do {
      if (0x27 < uVar2) {
                    /* WARNING: Subroutine does not return */
        fn_82F622E0(0xffffffff821b5f00);
      }
      if ((1 << (uVar3 & 0x1f) & *(unsigned int *)(((uVar3 >> 5) + 3) * 4 + param_2)) != 0) {
        *(unsigned int *)(*(int *)(uVar2 + *(int *)(param_1 + 0x88)) + 0x30) = 1;
      }
      uVar3 = uVar3 + 1;
      uVar2 = uVar2 + 4;
    } while (uVar3 < (unsigned int)(*(int *)(param_1 + 0x8c) - *(int *)(param_1 + 0x88) >> 2));
  }
  if (*(int *)(param_2 + 8) == 2) {
    uVar1 = fn_82417F58(param_1);
    fn_8241A8A0(param_1,uVar1);
    *(unsigned int *)(param_1 + 0x270) = 1;
  }
  fn_82417D18(param_1,*(int *)(param_2 + 8) == 1,0,1);
  return;
}

