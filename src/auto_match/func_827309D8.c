extern unsigned int *auStack_40;
extern unsigned int *auStack_50;
extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_82696330();
extern int fn_8269A990();
extern int fn_826CD420();
extern int fn_826CD840();
extern int fn_82700248();
extern int fn_8272DC58();
extern unsigned int uStack_38;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64 fn_827309D8(int *param_1,unsigned int param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  __int64 lVar3;
  int iVar4;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned char auStack_50 [8];
  unsigned int uStack_48;
  unsigned char auStack_40 [8];
  unsigned int uStack_38;
  
  lVar3 = (**(int (***)())(*param_1 + 0x40))();
  if ((lVar3 != 0) && (*(int *)(param_1[0x28] + 0x114) != 0)) {
    uVar1 = *(unsigned short *)(*(int *)(param_1[0x28] + 0x114) + 0x68);
    if (((uVar1 & 1) == 0) || ((uVar1 >> 1 & 1) != 0)) {
      stack_pair_60.first = 0;
      stack_pair_60.second = 0;
      uStack_58 = 0;
      auStack_50[0] = 4;
      uStack_48 = 2;
      fn_826CD420(&stack_pair_60.first,auStack_50);
      fn_82696330(auStack_50);
      auStack_40[0] = 4;
      uStack_38 = param_2;
      fn_826CD420(&stack_pair_60.first,auStack_40);
      fn_82696330(auStack_40);
      iVar4 = fn_82700248(lVar3 + 0xa2c,4);
      *(unsigned int *)(iVar4 + 4) = 4;
      param_1[1] = param_1[1] + 1;
      if (*(int *)(iVar4 + 8) != 0) {
        fn_8267C498();
      }
      *(int **)(iVar4 + 8) = param_1;
      if (*(int *)(iVar4 + 0xc) != 0) {
        fn_8267C498();
      }
      *(unsigned int *)(iVar4 + 0xc) = 0;
      *(int (***)())(iVar4 + 0x2c) = fn_8272DC58;
      fn_826CD840(iVar4 + 0x30,&stack_pair_60.first);
      uVar2 = stack_pair_60.first;
      fn_8269A990(stack_pair_60.first,stack_pair_60.second);
      fn_8267BE38(uVar2);
    }
  }
  return 1;
}

