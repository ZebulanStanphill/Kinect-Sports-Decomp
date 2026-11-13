extern unsigned int *auStack_80;
extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int *auStack_b8;
extern int fn_82230110();
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822315A0();
extern int fn_822C7578();
extern int fn_822C8B40();
extern int fn_822EA970();
extern int fn_82365BD8();
extern int fn_82376640();
extern unsigned int iStack_b4;
extern unsigned int stack0x00000054;
extern unsigned int uStack_bc;
extern unsigned int uStack_c0;


void fn_822FEE60(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4,
                  unsigned int *param_5,unsigned int *param_6,unsigned int *param_7,int *param_8)

{
  unsigned int uVar1;
  unsigned int *puVar3;
  unsigned __int64 uVar2;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned int uVar6;
  int iVar7;
  struct { unsigned int first; unsigned int second; } stack_pair_c0;

  unsigned char auStack_b8 [4];
  int iStack_b4;
  unsigned char auStack_b0 [16];
  unsigned char auStack_a0 [32];
  unsigned char auStack_80 [32];
  
  puVar3 = (unsigned int *)fn_822EA970(auStack_b8,param_4,param_3,param_2,param_4,&stack0x00000054);
  stack_pair_c0.first = *puVar3;
  uVar5 = (unsigned __int64)stack_pair_c0.first;
  uVar6 = 0;
  stack_pair_c0.second = puVar3[1];
  *puVar3 = 0;
  puVar3[1] = 0;
  if (iStack_b4 != 0) {
    fn_822315A0();
  }
  uVar1 = *param_6;
  uVar2 = fn_822C7578(uVar5 + 0x40,(unsigned __int64)*param_7 + 4);
  fn_82230218(uVar2,(unsigned __int64)uVar1 + 4,0,0xffffffffffffffff);
  iVar4 = fn_82365BD8(auStack_b0,param_7);
  fn_82376640(uVar5 + 0x30,iVar4);
  if (*(int *)(iVar4 + 4) != 0) {
    fn_822315A0();
  }
  fn_822C8B40(param_1,&stack_pair_c0.first);
  uVar2 = fn_822C7578((unsigned __int64)*param_5 + 0x40,param_4);
  fn_82230218(uVar2,param_4,0,0xffffffffffffffff);
  uVar2 = fn_822C7578((unsigned __int64)*param_6 + 0x40,param_4);
  fn_82230218(uVar2,param_4,0,0xffffffffffffffff);
  iVar4 = *param_8;
  if (param_8[1] - iVar4 >> 2 != 0) {
    uVar5 = (unsigned __int64)stack_pair_c0.first;
    iVar7 = 0;
    do {
      fn_82230110(auStack_80,*(unsigned int *)(iVar7 + iVar4));
      fn_82230110(auStack_a0,*(unsigned int *)(iVar7 + *param_8));
      uVar2 = fn_822C7578(uVar5 + 0x40,auStack_a0);
      fn_82230218(uVar2,auStack_80,0,0xffffffffffffffff);
      fn_82230300(auStack_a0,1,0);
      fn_82230300(auStack_80,1,0);
      iVar4 = *param_8;
      uVar6 = uVar6 + 1;
      iVar7 = iVar7 + 4;
    } while (uVar6 < (unsigned int)(param_8[1] - iVar4 >> 2));
  }
  if (stack_pair_c0.second != 0) {
    fn_822315A0();
  }
  if (param_5[1] != 0) {
    fn_822315A0();
  }
  if (param_6[1] != 0) {
    fn_822315A0();
  }
  if (param_7[1] != 0) {
    fn_822315A0();
  }
  return;
}

