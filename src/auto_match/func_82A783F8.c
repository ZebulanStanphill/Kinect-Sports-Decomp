extern unsigned int *auStack_50;
extern int fn_82A40BA8();
extern int fn_82A49C98();
extern int fn_82A49DF8();
extern int fn_82A59718();
extern int fn_82A598F0();
extern int fn_82A761A0();
extern int fn_82A76380();
extern unsigned int uStack_54;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


__int64 fn_82A783F8(int param_1)

{
  unsigned short uVar1;
  int iVar4;
  unsigned __int64 uVar2;
  __int64 lVar3;
  int iVar5;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned char *puStack_58;
  unsigned int uStack_54;
  unsigned char auStack_50 [64];
  
  iVar4 = fn_82A59718(*(unsigned int *)(param_1 + 4));
  puStack_58 = *(unsigned char **)(param_1 + 0x78);
  stack_pair_60.first = *(unsigned int *)(iVar4 + 0x2c);
  if (*(int *)(param_1 + 8) != 0) {
    uVar2 = fn_82A49C98(stack_pair_60.first,1);
    fn_82A49DF8(auStack_50,0x28,1,*(unsigned short *)(*(int *)(param_1 + 0x78) + 2),
                      *(unsigned int *)(*(int *)(param_1 + 0x78) + 4),0x10,0x10,uVar2);
    puStack_58 = auStack_50;
  }
  uVar1 = *(unsigned short *)(*(int *)(iVar4 + 0x2c) + 0xc);
  trapWord(6,(unsigned __int64)uVar1,0);
  stack_pair_60.second = *(unsigned int *)(iVar4 + 0x34) / (unsigned int)uVar1;
  uStack_54 = stack_pair_60.second;
  (**(int (***)())(**(int **)(param_1 + 0xfc) + 0x24))();
  lVar3 = (**(int (***)())(**(int **)(param_1 + 0xfc) + 0x20))
                    (*(int **)(param_1 + 0xfc),1,&puStack_58,1,&stack_pair_60.first);
  if (-1 < lVar3) {
    fn_82A40BA8(param_1 + 0x38);
    fn_82A76380();
    iVar5 = fn_82A598F0(param_1 + 0x38,iVar4);
    if (iVar5 == 0) {
      lVar3 = -0x7ff8fff2;
    }
    else {
      lVar3 = 0;
      fn_82A761A0(iVar4);
    }
  }
  return lVar3;
}

