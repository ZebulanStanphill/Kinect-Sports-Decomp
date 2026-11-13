extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82A8B5F8();
extern int fn_82A8F178();
extern int fn_82A8F3C0();


int fn_82A8F440(int param_1)

{
  unsigned int uVar1;
  int lVar2;
  unsigned int uVar3;
  unsigned int auStack_40 [4];
  unsigned char auStack_30 [24];
  
  uVar3 = *(unsigned int *)(param_1 + 0x5988);
  uVar1 = fn_82A8F3C0(param_1);
  if (uVar3 >= uVar1) {
    uVar3 = fn_82A8F3C0(param_1);
  }
  fn_82A8B5F8(auStack_30,*(unsigned int *)(param_1 + 0x598c),*(unsigned int *)(param_1 + 0x5988),uVar3
               );
  auStack_40[0] = 0;
  lVar2 = fn_82A8F178(auStack_40,auStack_30);
  return lVar2 + uVar3;
}

