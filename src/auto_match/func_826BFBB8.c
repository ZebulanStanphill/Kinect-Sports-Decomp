extern unsigned int *auStack_30;
extern int fn_826824B0();
extern int fn_826959C8();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82695FA0();
extern int fn_82696330();
extern int fn_82696B20();
extern int fn_82696D38();
extern unsigned int iStack_44;
extern unsigned int iStack_48;


void fn_826BFBB8(int param_1)

{
  unsigned int uVar1;
  unsigned char *puVar2;
  unsigned __int64 uVar3;
  unsigned char uVar4;
  __int64 lVar5;
  int aiStack_50 [2];
  struct { int first; int second; } stack_pair_48;

  unsigned char bStack_40;
  unsigned char auStack_30 [16];

  if (*(int *)(param_1 + 0x1c) < 2) {
    puVar2 = *(unsigned char **)(param_1 + 4);
    fn_826959C8(puVar2);
    *puVar2 = 2;
    puVar2[4] = 0;
  }
  else {
    uVar1 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,1);
    fn_82696B20(&stack_pair_48.first,uVar3,uVar1);
    if (stack_pair_48.first == 0) {
      puVar2 = *(unsigned char **)(param_1 + 4);
      fn_826959C8(puVar2);
      puVar2[4] = 0;
      *puVar2 = 2;
    }
    else {
      auStack_30[0] = 0;
      if (2 < *(int *)(param_1 + 0x1c)) {
        uVar3 = fn_826957D0(param_1,2);
        fn_82695FA0(auStack_30,uVar3);
      }
      uVar1 = *(unsigned int *)(param_1 + 0x18);
      uVar3 = fn_826957D0(param_1,0);
      fn_82696D38(aiStack_50,uVar3,uVar1,0xffffffffffffffff,0);
      uVar4 = (**(int (***)())(**(int **)(param_1 + 8) + 0x4c))
                        (*(int **)(param_1 + 8),(unsigned __int64)*(unsigned int *)(param_1 + 0x18) + 0x78,
                         aiStack_50,&stack_pair_48.first,auStack_30);
      puVar2 = *(unsigned char **)(param_1 + 4);
      fn_826959C8(puVar2);
      puVar2[4] = uVar4;
      *puVar2 = 2;
      lVar5 = (unsigned __int64)*(unsigned int *)(aiStack_50[0] + 8) - 1;
      *(int *)(aiStack_50[0] + 8) = (int)lVar5;
      if (lVar5 == 0) {
        fn_826959C8(aiStack_50[0]);
      }
      fn_82696330(auStack_30);
    }
    if (((bStack_40 & 2) == 0) && (stack_pair_48.first != 0)) {
      fn_826824B0();
    }
    stack_pair_48.first = 0;
    if (((bStack_40 & 1) == 0) && (stack_pair_48.second != 0)) {
      fn_826824B0();
    }
  }
  return;
}
