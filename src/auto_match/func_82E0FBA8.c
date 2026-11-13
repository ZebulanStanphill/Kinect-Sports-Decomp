extern int fn_82CE5410();
extern int fn_82CE6310();
extern int fn_82E0F818();
extern unsigned int iStack_3c;
extern unsigned int iStack_40;
extern unsigned int uStack_38;


unsigned __int64 fn_82E0FBA8(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar2;
  unsigned __int64 uVar1;
  int iVar3;
  int iVar4;
  struct { int first; int second; } stack_pair_40;

  unsigned int uStack_38;
  
  iVar3 = *(int *)(param_1 + 4);
  stack_pair_40.first = 0;
  stack_pair_40.second = 0;
  uStack_38 = 0x80000000;
  iVar2 = fn_82CE5410();
  if ((int)(uStack_38 & 0x3fffffff) < iVar3) {
    iVar4 = (uStack_38 & 0x3fffffff) << 1;
    if (iVar4 <= iVar3) {
      iVar4 = iVar3;
    }
    fn_82CE6310(*(unsigned int *)(iVar2 + 0xc),&stack_pair_40.first,iVar4,4);
  }
  iVar2 = 0;
  if (0 < *(int *)(param_1 + 4)) {
    iVar4 = 0;
    do {
      *(int *)(iVar4 + stack_pair_40.first) = iVar2;
      iVar2 = iVar2 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar2 < *(int *)(param_1 + 4));
  }
  stack_pair_40.second = iVar3;
  uVar1 = fn_82E0F818(param_1,param_2,&stack_pair_40.first,param_3);
  iVar3 = fn_82CE5410();
  stack_pair_40.second = 0;
  if ((uStack_38 & 0x80000000) == 0) {
    (**(int (***)())(**(int **)(iVar3 + 0xc) + 0x10))
              (*(int **)(iVar3 + 0xc),stack_pair_40.first,uStack_38 & 0x3fffffff,4);
  }
  return uVar1;
}

