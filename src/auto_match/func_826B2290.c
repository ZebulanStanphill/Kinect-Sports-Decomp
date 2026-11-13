extern unsigned int *auStack_40;
extern unsigned int *auStack_5e;
extern int fn_8267B890();
extern int fn_82681728();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82696330();
extern int fn_826A4BB0();
extern int fn_826A8330();
extern int fn_826B10D8();
extern int fn_826B1150();
extern unsigned int iStack_54;
extern unsigned int iStack_58;
extern unsigned int iStack_5c;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_5f;
extern unsigned int uStack_60;


void fn_826B2290(unsigned int param_1,char param_2)

{
  unsigned __int64 uVar1;
  int iVar2;
  __int64 lVar3;
  int iVar4;
  unsigned char uStack_60;
  unsigned char uStack_5f;
  unsigned char auStack_5e [2];
  int iStack_5c;
  int iStack_58;
  struct { int first; unsigned int second; } stack_pair_54;

  unsigned char uStack_4c;
  unsigned char auStack_40 [16];
  
  if (param_2 == '\0') {
    if (*(int *)(param_1 + 0x2a0) != 0) {
      fn_826824B0();
    }
    *(unsigned int *)(param_1 + 0x2a0) = 0;
  }
  else {
    uVar1 = fn_8267B890(*(unsigned int *)(param_1 + 0x288),0x34,0);
    if ((uVar1 & 0xffffffff) == 0) {
      iVar2 = 0;
    }
    else {
      iVar2 = fn_826A8330(uVar1,param_1);
    }
    uStack_4c = 8;
    stack_pair_54.second = param_1;
    fn_82681728(&stack_pair_54.first,param_1 + 0x254,0xffffffff82007a14);
    fn_82681728(&iStack_58,(unsigned __int64)stack_pair_54.second + 0x254,0xffffffff82007a08);
    fn_82681728(&iStack_5c,(unsigned __int64)stack_pair_54.second + 0x254,0xffffffff82007a00);
    auStack_40[0] = 0;
    (**(int (***)())(*(int *)(*(int *)(param_1 + 0x2a0) + 0x10) + 0x2c))
              (*(int *)(param_1 + 0x2a0) + 0x10,&stack_pair_54.second,&stack_pair_54.first,auStack_40);
    uStack_60 = 0;
    iVar4 = iVar2 + 0x10;
    (**(int (***)())(*(int *)(iVar2 + 0x10) + 0x28))(iVar4,&stack_pair_54.second,&stack_pair_54.first,auStack_40,&uStack_60);
    (**(int (***)())(*(int *)(*(int *)(param_1 + 0x2a0) + 0x10) + 0x2c))
              (*(int *)(param_1 + 0x2a0) + 0x10,&stack_pair_54.second,&iStack_58,auStack_40);
    uStack_5f = 0;
    (**(int (***)())(*(int *)(iVar2 + 0x10) + 0x28))(iVar4,&stack_pair_54.second,&iStack_58,auStack_40,&uStack_5f);
    (**(int (***)())(*(int *)(*(int *)(param_1 + 0x2a0) + 0x10) + 0x2c))
              (*(int *)(param_1 + 0x2a0) + 0x10,&stack_pair_54.second,&iStack_5c,auStack_40);
    auStack_5e[0] = 0;
    (**(int (***)())(*(int *)(iVar2 + 0x10) + 0x28))(iVar4,&stack_pair_54.second,&iStack_5c,auStack_40,auStack_5e);
    *(unsigned int *)(iVar2 + 8) = *(int *)(iVar2 + 8) + 1U & 0x8fffffff;
    if (*(int *)(param_1 + 0x2a0) != 0) {
      fn_826824B0();
    }
    *(int *)(param_1 + 0x2a0) = iVar2;
    fn_82696330(auStack_40);
    lVar3 = (unsigned __int64)*(unsigned int *)(iStack_5c + 8) - 1;
    *(int *)(iStack_5c + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8(iStack_5c);
    }
    lVar3 = (unsigned __int64)*(unsigned int *)(iStack_58 + 8) - 1;
    *(int *)(iStack_58 + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8(iStack_58);
    }
    lVar3 = (unsigned __int64)*(unsigned int *)(stack_pair_54.first + 8) - 1;
    *(int *)(stack_pair_54.first + 8) = (int)lVar3;
    if (lVar3 == 0) {
      fn_826944C8(stack_pair_54.first);
    }
    fn_826824B0(iVar2);
  }
  fn_826B1150(param_1 + 0x27c);
  fn_826B10D8(param_1 + 0x280);
  fn_826A4BB0(param_1 + 0x278);
  *(unsigned int *)(param_1 + 0x284) = 0;
  return;
}

