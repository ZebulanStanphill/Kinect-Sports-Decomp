extern unsigned int *auStack_440;
extern int fn_824C1BF8();
extern int fn_8265C9E0();
extern int fn_82F691F0();


void fn_82245C80(int param_1,unsigned __int64 param_2,unsigned __int64 param_3,int param_4)

{
  unsigned __int64 uVar1;
  unsigned char auStack_440 [1064];
  
  fn_824C1BF8(auStack_440,param_3);
  (**(int (***)())(**(int **)(param_1 + 0x58) + 0x14))();
  if (param_4 != 0) {
    *(unsigned int *)(param_4 + 4) = 7;
    *(unsigned int *)(param_4 + 0xc) = 0x428;
    uVar1 = fn_8265C9E0(0x428);
                    /* WARNING: Subroutine does not return */
    fn_82F691F0(uVar1,0,0x428);
  }
  return;
}

