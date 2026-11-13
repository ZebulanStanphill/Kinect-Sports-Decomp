extern int fn_822315A0();
extern int fn_82517978();
extern int fn_8265C9E0();
extern int fn_827D9630();
extern int fn_827DE858();
extern unsigned int iStack_4c;
extern unsigned int lbl_821CBF38;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_50;


unsigned int *fn_826282E8(int param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4,unsigned int *param_5)
{
  unsigned int uVar1;
  unsigned int iVar2;
  unsigned int *puVar3;
  unsigned int *res;
  unsigned int *Z;
  struct { unsigned int first; int second; } stack_pair_50;
  struct { unsigned int first; unsigned int second; } stack_pair_48;
  *param_5 = 0;
  puVar3 = (unsigned int *)fn_8265C9E0(0x38);
  if (puVar3 != 0) {
    stack_pair_50.first = 0;
    stack_pair_50.second = 0;
    fn_82517978(&stack_pair_50.first,*(unsigned int *)(param_1 + 4),*(unsigned int *)(param_1 + 8),1);
    iVar2 = stack_pair_50.second;
    stack_pair_48.first = 0;
    stack_pair_48.second = 0;
    uVar1 = *param_5;
    fn_82517978(&stack_pair_48.first,stack_pair_50.first,stack_pair_50.second,0);
    fn_827DE858(puVar3,&stack_pair_48.first,uVar1);
    *puVar3 = &lbl_821CBF38;
    fn_827D9630(puVar3 + 6,param_2);
    puVar3[0xc] = param_3;
    if (iVar2 != 0) {
      fn_822315A0(iVar2);
    }
    res = puVar3;
  } else {
    res = 0;
  }
  return res;
}