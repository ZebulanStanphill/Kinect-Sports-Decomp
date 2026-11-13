extern unsigned int *auStack_50;
extern unsigned int *auStack_58;
extern unsigned int *auStack_60;
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_8269A190();
extern int fn_826A2F80();
extern int fn_826B32D0();
extern int fn_8273D588();
extern unsigned int iStack_5c;


void fn_8273DC88(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned char auStack_60 [4];
  int iStack_5c;
  unsigned int auStack_58 [2];
  unsigned char auStack_50 [80];
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x78);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) * 4 + *(int *)(param_1 + 0x10) + -4);
  uVar3 = fn_826B32D0(*(int *)(param_1 + 8),*(unsigned int *)(iVar1 + 0x2a0),iVar1 + 0xc,0,
                            0xffffffffffffffff);
  if (*(char *)(param_1 + 0x1c) == '\0') {
    auStack_60[0] = 0;
    fn_8269A190(&iStack_5c,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 8) + 0x78) + 0x254,param_2)
    ;
    iVar1 = *(int *)(iVar2 + 0x10);
    uVar4 = fn_826961B0(auStack_50,uVar3);
    (**(int (***)())(iVar1 + 0xc))
              (iVar2 + 0x10,*(unsigned int *)(param_1 + 8),&iStack_5c,uVar4,auStack_60);
    lVar5 = (unsigned __int64)*(unsigned int *)(iStack_5c + 8) - 1;
    *(int *)(iStack_5c + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(iStack_5c);
    }
  }
  else {
    uVar4 = fn_826961B0(auStack_50,uVar3);
    fn_826A2F80(iVar2,uVar4);
  }
  fn_82696330(auStack_50);
  auStack_58[0] = (unsigned int)uVar3;
  *(unsigned char *)(param_1 + 0x1c) = 0;
  fn_8273D588(param_1 + 0x10,auStack_58);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_826824B0(uVar3);
  }
  return;
}

