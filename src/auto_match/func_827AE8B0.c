extern unsigned int *auStack_50;
extern unsigned int *auStack_7c;
extern unsigned int *auStack_80;
extern int fn_8267B890();
extern int fn_826824B0();
extern int fn_82695750();
extern int fn_82696330();
extern int fn_826A5E30();
extern int fn_826B14D8();
extern int fn_826C3378();
extern int fn_827AE7D0();
extern int fn_827AE860();
extern unsigned int iStack_64;
extern unsigned int iStack_68;
extern unsigned int iStack_70;
extern unsigned int uStack_6c;


/* WARNING: Type propagation algorithm not settling */

unsigned int * fn_827AE8B0(unsigned int *param_1,int param_2)

{
  unsigned __int64 uVar1;
  unsigned int uVar4;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned int uVar5;
  int iVar6;
  unsigned int uVar7;
  int iVar8;
  unsigned char auStack_80;
  unsigned int auStack_7c [3];
  int iStack_70;
  unsigned char uStack_6c;
  struct { int first; int second; } stack_pair_68;

  unsigned char bStack_60;
  unsigned char auStack_50 [32];
  
  uStack_6c = 8;
  iStack_70 = param_2;
  uVar1 = fn_8267B890(*(unsigned int *)(param_2 + 0x288),0x34,0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar4 = 0;
  }
  else {
    uVar4 = fn_827AE860(uVar1,&iStack_70);
  }
  *param_1 = uVar4;
  *(unsigned char *)(param_1 + 2) = 0;
  param_1[1] = 0;
  lVar2 = fn_8267B890(*(unsigned int *)(param_2 + 0x288),0x60,0);
  if (lVar2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar3 = fn_826B14D8(param_2,1);
    uVar5 = fn_827AE7D0(lVar2,&iStack_70,uVar3,param_1);
  }
  if (uVar5 != 0) {
    *(unsigned int *)(uVar5 + 8) = *(int *)(uVar5 + 8) + 1U & 0x8fffffff;
  }
  auStack_7c[1] = 0x21;
  auStack_7c[0] = uVar5;
  fn_826A5E30(param_2 + 0x278,auStack_7c + 1,auStack_7c);
  if (auStack_7c[0] != 0) {
    fn_826824B0();
  }
  iVar6 = fn_826B14D8(param_2,10);
  bStack_60 = 0;
  stack_pair_68.first = *(int *)(iVar6 + 0x3c);
  iVar8 = 0;
  if (stack_pair_68.first != 0) {
    uVar7 = *(int *)(stack_pair_68.first + 8) + 1;
    *(unsigned int *)(stack_pair_68.first + 8) = uVar7;
    *(unsigned int *)(stack_pair_68.first + 8) = uVar7 & 0x8fffffff;
    iVar8 = stack_pair_68.first;
  }
  stack_pair_68.second = 0;
  if (*(int *)(iVar6 + 0x40) != 0) {
    fn_826C3378(&stack_pair_68.first,*(int *)(iVar6 + 0x40),*(unsigned char *)(iVar6 + 0x44) & 1);
    iVar8 = stack_pair_68.first;
  }
  auStack_80 = 0;
  iVar6 = *(int *)(iVar8 + 0x10);
  uVar3 = fn_82695750(auStack_50,param_1);
  (**(int (***)())(iVar6 + 0x28))(iVar8 + 0x10,&iStack_70,param_2 + 0x8c,uVar3,&auStack_80);
  fn_82696330(auStack_50);
  if (((bStack_60 & 2) == 0) && (stack_pair_68.first != 0)) {
    fn_826824B0();
  }
  stack_pair_68.first = 0;
  if (((bStack_60 & 1) == 0) && (stack_pair_68.second != 0)) {
    fn_826824B0();
  }
  stack_pair_68.second = 0;
  if (uVar5 != 0) {
    fn_826824B0(uVar5);
  }
  return param_1;
}

