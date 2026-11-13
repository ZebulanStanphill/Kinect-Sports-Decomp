extern int fn_826824B0();
extern int fn_826B0E90();
extern int fn_826C3378();
extern unsigned int iStack_34;
extern unsigned int iStack_38;
extern unsigned int iStack_44;
extern unsigned int iStack_48;
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


int fn_826B1330(unsigned __int64 param_1,int *param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  unsigned int *puVar6;
  struct { int first; int second; } stack_pair_50;

  struct { int first; int second; } stack_pair_48;

  unsigned char bStack_40;
  struct { int first; int second; } stack_pair_38;

  unsigned char bStack_30;

  stack_pair_50.first = *param_2;
  *(int *)(stack_pair_50.first + 8) = *(int *)(stack_pair_50.first + 8) + 1;
  puVar2 = (unsigned int *)fn_826B0E90(param_1,&stack_pair_50.first);
  if (puVar2 == (unsigned int *)0x0) {
    iVar5 = 0;
  }
  else {
    piVar3 = puVar2 + 1;
    if (puVar2[1] == 0) {
      piVar3 = (int *)(*(int (**)())*puVar2)(&stack_pair_38.first,param_1);
      bStack_40 = 0;
      stack_pair_48.first = *piVar3;
      if (stack_pair_48.first != 0) {
        puVar6 = (unsigned int *)(stack_pair_48.first + 8);
        uVar1 = *puVar6;
        *puVar6 = uVar1 + 1;
        *puVar6 = uVar1 + 1 & 0x8fffffff;
      }
      stack_pair_48.second = 0;
      if (piVar3[1] != 0) {
        fn_826C3378(&stack_pair_48.first,piVar3[1],*(unsigned char *)(piVar3 + 2) & 1);
      }
      if (((bStack_30 & 2) == 0) && (stack_pair_38.first != 0)) {
        fn_826824B0();
      }
      stack_pair_38.first = 0;
      if (((bStack_30 & 1) == 0) && (stack_pair_38.second != 0)) {
        fn_826824B0();
      }
      stack_pair_50.second = *param_2;
      stack_pair_38.second = 0;
      *(int *)(stack_pair_50.second + 8) = *(int *)(stack_pair_50.second + 8) + 1;
      iVar4 = fn_826B0E90(param_1,&stack_pair_50.second);
      iVar5 = stack_pair_48.first;
      piVar3 = (int *)(iVar4 + 4);
      if (stack_pair_48.first != 0) {
        puVar6 = (unsigned int *)(stack_pair_48.first + 8);
        uVar1 = *puVar6;
        *puVar6 = uVar1 + 1;
        *puVar6 = uVar1 + 1 & 0x8fffffff;
      }
      if (*piVar3 != 0) {
        fn_826824B0();
      }
      *piVar3 = iVar5;
      if (((bStack_40 & 2) == 0) && (stack_pair_48.first != 0)) {
        fn_826824B0();
      }
      stack_pair_48.first = 0;
      if (((bStack_40 & 1) == 0) && (stack_pair_48.second != 0)) {
        fn_826824B0();
      }
    }
    iVar5 = *piVar3;
  }
  return iVar5;
}
