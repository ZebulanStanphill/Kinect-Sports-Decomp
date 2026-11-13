typedef void (*Fn_82F42078)(unsigned, int, int, unsigned, int, unsigned);

void fn_82F42078(int param_1,int param_2,unsigned int param_3)
{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  
  iVar2 = *(int *)(param_1 + 0x2d0) << 2;
  uVar3 = (param_3 - param_2) * 0x10;
  if (param_3 == *(unsigned int *)(param_1 + 0x2d4)) {
    uVar3 = *(int *)(param_1 + 800) + (param_3 & 0xfffffff) * -0x10 + uVar3 & 0xfffffffe;
  }
  iVar1 = *(int *)(param_1 + 0x31c);
  (*(Fn_82F42078 *)(param_1 + 0x1bac))
            ((iVar1 * param_2 & 0xfffffffU) * 0x10 +
             *(unsigned int *)(param_1 + 0x1abc),iVar1,iVar1,
             ((iVar2 * param_2 & 0x3fffffffU) * 4 +
             *(unsigned int *)(param_1 + 0x1a90)),iVar2,uVar3);
}
