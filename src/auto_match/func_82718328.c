extern unsigned int uStack_13;
extern unsigned int uStack_14;
extern unsigned int uStack_15;
extern unsigned int uStack_16;
extern unsigned int uStack_18;
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned __int64 fn_82718328(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  struct { unsigned int first; unsigned int second; } stack_pair_20;

  unsigned short uStack_18;
  unsigned char uStack_16;
  unsigned char uStack_15;
  unsigned char uStack_14;
  unsigned char uStack_13;
  
  iVar2 = (**(int (***)())(*param_1 + 0x40))();
  if (((*(unsigned int *)(iVar2 + 0xb00) >> 0x10 & 1) != 0) &&
     ((uVar1 = *(unsigned int *)(iVar2 + 0xb00) >> 0x1c & 3, uVar1 == 3 || (uVar1 != 1)))) {
    stack_pair_20.second = 0;
    uStack_18 = 0;
    uStack_16 = 0;
    uStack_14 = 0;
    uStack_13 = 0;
    stack_pair_20.first = 0x4000;
    uStack_15 = 0xff;
    (**(int (***)())(*param_1 + 0xe8))(param_1,&stack_pair_20.first);
  }
  return 1;
}

