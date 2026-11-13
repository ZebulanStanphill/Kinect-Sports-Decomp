extern unsigned int *auStack_22e;
extern int fn_82284B08();
extern int fn_822A21A8();
extern int fn_82476478();
extern int fn_82476CB8();
extern int fn_82F691F0();


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void fn_82478B70(unsigned __int64 param_1,int param_2,unsigned __int64 param_3,int param_4)

{
  int iVar1;
  unsigned char auStack_22e [558];
  
  iVar1 = fn_822A21A8();
  if (iVar1 == 0) {
    fn_82476478(param_1,param_2 + 0x10);
    if (param_4 != 0) {
      if ((*(int *)(param_2 + 0x1a0) == 0) && (*(int *)(*(int *)(param_2 + 0x1b0) + 0x358) == 0)) {
        fn_82476CB8(param_2 + 0x10);
        *(unsigned int *)(param_2 + 0x1a0) = 1;
      }
      if (*(int *)(param_2 + 0x1bc) == 0) {
                    /* WARNING: Subroutine does not return */
        fn_82F691F0(auStack_22e,0,0x1fe);
      }
    }
    if (*(int *)(param_2 + 0x1bc) != 0) {
      fn_82284B08(param_1);
    }
  }
  return;
}

