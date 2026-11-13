typedef unsigned char bool;
extern unsigned int *auStack_4c;
extern unsigned int *auStack_5c;
extern unsigned int *auStack_68;
extern unsigned int *auStack_70;
extern int fn_822315A0();
extern int fn_8265C9E0();
extern int fn_828A1D70();
extern int fn_828B5580();
extern int fn_828B55B0();
extern int fn_828B55F8();
extern int fn_828CCCC0();
extern int fn_828DF918();
extern int fn_828E4988();
extern int fn_828E6EC0();
extern int fn_828E7140();
extern int fn_828E7708();
extern int fn_828E8EF8();
extern int fn_828E8F80();
extern int fn_828E97F8();
extern unsigned int iStack_44;
extern unsigned int iStack_64;
extern unsigned int lbl_82027474;
extern unsigned int uStack_50;
extern unsigned int uStack_60;
extern unsigned int uStack_74;
extern unsigned int uStack_78;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned __int64 storeWordConditionalIndexed();


int fn_828E9B20(int param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  int iVar6;
  unsigned __int64 uVar7;
  unsigned int *puVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  struct { unsigned int first; unsigned int second; } stack_pair_78;

  unsigned char auStack_70 [8];
  unsigned char auStack_68 [4];
  int iStack_64;
  unsigned int uStack_60;
  unsigned char auStack_5c [12];
  unsigned int uStack_50;
  unsigned char auStack_4c [8];
  int iStack_44;
  
  fn_828B5580(auStack_70,param_2 + 0x14);
  uVar1 = *(unsigned int *)(param_2 + 0x10);
  uVar4 = fn_828B55F8(auStack_70);
  uVar4 = fn_828E97F8(uVar1,uVar4);
  fn_828E4988(param_1,uVar4);
  fn_828B55B0(auStack_70);
  fn_828B5580(param_1 + 0x38,param_2 + 0x14);
  uVar1 = *(unsigned int *)(param_2 + 8);
  uVar4 = fn_828E8F80();
  fn_828DF918(&stack_pair_78.first,uVar1,uVar4);
  uVar3 = stack_pair_78.second;
  uVar7 = (unsigned __int64)stack_pair_78.second;
  if (uVar7 != 0) {
    do {
      puVar8 = (unsigned int *)(uVar7 + 4);
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar8 + 1,0,uVar7 + 4);
        *puVar8 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
  }
  uStack_7c = stack_pair_78.second;
  uStack_80 = stack_pair_78.first;
  puVar5 = (unsigned int *)fn_8265C9E0(0x18);
  if (puVar5 == (unsigned int *)0x0) {
    puVar5 = (unsigned int *)0x0;
  }
  else {
    fn_828E6EC0(puVar5,0xffffffff8315a35c,&uStack_80);
    *puVar5 = &lbl_82027474;
  }
  puVar5 = (unsigned int *)fn_828E7140(auStack_68,puVar5);
  uStack_80 = 0;
  uStack_7c = 0;
  fn_828CCCC0(&uStack_80,*puVar5,puVar5[1],0);
  iVar6 = *(int *)(param_1 + 0xc);
  *(unsigned int *)(param_1 + 0xc) = uStack_7c;
  *(unsigned int *)(param_1 + 8) = uStack_80;
  if (iVar6 != 0) {
    fn_822315A0();
  }
  if (iStack_64 != 0) {
    fn_822315A0();
  }
  uStack_60 = *(unsigned int *)(*(int *)(param_2 + 0x10) + 0x28);
  fn_828B5580(auStack_5c,param_1 + 0x38);
  uStack_50 = uStack_60;
  fn_828B5580(auStack_4c,auStack_5c);
  iStack_44 = param_1;
  uVar4 = fn_828E8EF8();
  iVar6 = fn_828A1D70();
  if ((unsigned int *)(iVar6 + 0xc) != (unsigned int *)0x0) {
    *(unsigned int *)(iVar6 + 0xc) = uStack_50;
    fn_828B5580(iVar6 + 0x10,auStack_4c);
    *(int *)(iVar6 + 0x18) = iStack_44;
  }
  fn_828E7708(&uStack_80,uVar4,iVar6,0);
  fn_828B55B0(auStack_4c);
  fn_828B55B0(auStack_5c);
  if (uVar3 != 0) {
    fn_822315A0(uVar7);
  }
  if (stack_pair_78.second != 0) {
    fn_822315A0();
  }
  return param_1;
}

