extern unsigned int *auStack_40;
extern unsigned int *auStack_48;
extern unsigned int *auStack_50;
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_826961B0();
extern int fn_82696330();
extern int fn_8269A190();
extern int fn_826A2F80();
extern int fn_826B32D0();
extern int fn_8273D588();
extern unsigned int iStack_4c;


void fn_8273DDA8(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned char auStack_50;
  int iStack_4c;
  unsigned int auStack_48 [2];
  unsigned char auStack_40 [16];
  
  iVar1 = *(int *)(*(int *)(param_1 + 8) + 0x78);
  iVar2 = *(int *)(*(int *)(param_1 + 0x14) * 4 + *(int *)(param_1 + 0x10) + -4);
  uVar3 = fn_826B32D0(*(int *)(param_1 + 8),*(unsigned int *)(iVar1 + 0x2a0),iVar1 + 0x10,0,
                            0xffffffffffffffff);
  if (*(char *)(param_1 + 0x1c) == '\0') {
    auStack_50 = 0;
    fn_8269A190(&iStack_4c,(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 8) + 0x78) + 0x254,param_2)
    ;
    iVar1 = *(int *)(iVar2 + 0x10);
    uVar4 = fn_826961B0(auStack_40,uVar3);
    (**(int (***)())(iVar1 + 0xc))
              (iVar2 + 0x10,*(unsigned int *)(param_1 + 8),&iStack_4c,uVar4,&auStack_50);
    lVar5 = (unsigned __int64)*(unsigned int *)(iStack_4c + 8) - 1;
    *(int *)(iStack_4c + 8) = (int)lVar5;
    if (lVar5 == 0) {
      fn_826944C8(iStack_4c);
    }
  }
  else {
    uVar4 = fn_826961B0(auStack_40,uVar3);
    fn_826A2F80(iVar2,uVar4);
  }
  fn_82696330(auStack_40);
  auStack_48[0] = (unsigned int)uVar3;
  *(unsigned char *)(param_1 + 0x1c) = 1;
  fn_8273D588(param_1 + 0x10,auStack_48);
  if ((uVar3 & 0xffffffff) != 0) {
    fn_826824B0(uVar3);
  }
  return;
}

