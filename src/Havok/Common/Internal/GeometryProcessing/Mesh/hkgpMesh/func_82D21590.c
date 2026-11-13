extern unsigned int *auStack_30;
extern int fn_82CE5410();
extern int fn_82D0B0C0();
extern int fn_82D0B1D8();
extern int fn_82D0D6E8();
extern int fn_82D0D850();
extern int fn_82D201C0();
extern unsigned int uStack_26;
extern unsigned int uStack_27;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;


unsigned __int64 fn_82D21590(int param_1)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar3;
  struct { unsigned int first; unsigned int second; } stack_pair_40;

  unsigned int uStack_38;
  unsigned char auStack_30 [9];
  unsigned char uStack_27;
  unsigned char uStack_26;
  
  puVar1 = *(unsigned int **)(param_1 + 0x7b8);
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  *(unsigned int *)(param_1 + 0x7b8) = 0;
  if (3 < *(int *)(param_1 + 0x18)) {
    fn_82D0B0C0(auStack_30);
    uStack_27 = 0;
    uStack_26 = 1;
    iVar2 = fn_82CE5410();
    iVar2 = (**(int (***)())(**(int **)(iVar2 + 0x10) + 4))(*(int **)(iVar2 + 0x10),0x14);
    *(unsigned short *)(iVar2 + 4) = 0x14;
    uVar3 = fn_82D0D6E8();
    *(unsigned int *)(param_1 + 0x7b8) = uVar3;
    stack_pair_40.first = 0;
    stack_pair_40.second = 0;
    uStack_38 = 0x80000000;
    fn_82D201C0(param_1,&stack_pair_40.first);
    fn_82D0D850(*(unsigned int *)(param_1 + 0x7b8),stack_pair_40.first,stack_pair_40.second,auStack_30);
    iVar2 = fn_82D0B1D8(*(unsigned int *)(param_1 + 0x7b8));
    if (iVar2 != 3) {
      puVar1 = *(unsigned int **)(param_1 + 0x7b8);
      if (puVar1 != (unsigned int *)0x0) {
        (**(int (***)())*puVar1)(puVar1,1);
      }
      *(unsigned int *)(param_1 + 0x7b8) = 0;
      iVar2 = fn_82CE5410();
      stack_pair_40.second = 0;
      if ((uStack_38 & 0x80000000) == 0) {
        (**(int (***)())(**(int **)(iVar2 + 0x10) + 0x10))
                  (*(int **)(iVar2 + 0x10),stack_pair_40.first,uStack_38 & 0x3fffffff,0x10);
      }
      return 0;
    }
    iVar2 = fn_82CE5410();
    stack_pair_40.second = 0;
    if ((uStack_38 & 0x80000000) == 0) {
      (**(int (***)())(**(int **)(iVar2 + 0x10) + 0x10))
                (*(int **)(iVar2 + 0x10),stack_pair_40.first,uStack_38 & 0x3fffffff,0x10);
    }
  }
  return 1;
}

