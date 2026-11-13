extern int fn_82817778();
extern int fn_82817800();
extern int fn_8284D490();
extern int fn_8284DB80();
extern int fn_8284DFA0();


void fn_8284E1F0(int param_1,int param_2,int param_3)

{
  int iVar1;
  unsigned int uVar2;
  
  if (param_2 != 0) {
    iVar1 = *(int *)(param_2 + 0x20);
    uVar2 = *(unsigned int *)(param_2 + 0x24);
    fn_82817778(*(unsigned int *)(param_1 + 0x124),0xffffffff8201f530,
                      *(unsigned int *)(param_3 + 4),*(unsigned int *)(param_3 + 8),param_2);
    *(int *)(param_2 + 0x20) = iVar1;
    *(unsigned int *)(param_2 + 0x24) = uVar2;
    if (iVar1 != 0) {
      fn_82817778(*(unsigned int *)(param_1 + 0x124),0xffffffff8201f538,
                        *(unsigned int *)(param_3 + 0x14),*(unsigned int *)(param_3 + 0x18),iVar1);
    }
    if (*(int *)(param_2 + 0x24) != 0) {
      fn_82817778(*(unsigned int *)(param_1 + 0x124),0xffffffff8201f540,
                        *(unsigned int *)(param_3 + 0x24),*(unsigned int *)(param_3 + 0x28));
    }
  }
  fn_82817800(*(unsigned int *)(param_1 + 0x124));
  fn_8284DFA0(*(int *)(param_1 + 0x134) + param_2);
  fn_8284D490(param_1,param_2);
  fn_8284DB80(param_1,param_2);
  return;
}

