extern unsigned int *auStack_40;
extern int fn_823B8A50();
extern int fn_823B9248();
extern int fn_823B9890();
extern int fn_823B9968();
extern unsigned int iStack_50;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned int * fn_823B8E78(unsigned int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  __int64 lVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  struct { int first; unsigned int second; } stack_pair_50;

  unsigned int uStack_48;
  unsigned char auStack_40 [32];

  uStack_58 = *(unsigned int *)(param_3 + 8);
  piVar6 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    piVar6 = (int *)*param_2;
  }
  uStack_68 = *(unsigned int *)(param_4 + 8);
  piVar4 = (int *)0x0;
  if (param_2 != (int *)0x0) {
    piVar4 = (int *)*param_2;
  }
  uStack_48 = param_2[3];
  uVar8 = (unsigned __int64)uStack_68 - (unsigned __int64)uStack_58;
  lVar5 = (unsigned __int64)(unsigned int)param_2[4] + (unsigned __int64)uStack_48;
  uVar7 = (unsigned __int64)uStack_58 - (unsigned __int64)uStack_48;
  if ((uVar7 & 0xffffffff) < (lVar5 - (unsigned __int64)uStack_68 & 0xffffffff)) {
    uStack_70 = 0;
    uStack_6c = 0;
    if ((piVar4 != (int *)0x0) && ((unsigned int *)*piVar4 != (unsigned int *)0x0)) {
      uStack_70 = *(unsigned int *)*piVar4;
    }
    stack_pair_60.first = 0;
    stack_pair_60.second = 0;
    if ((piVar6 != (int *)0x0) && ((unsigned int *)*piVar6 != (unsigned int *)0x0)) {
      stack_pair_60.first = *(unsigned int *)*piVar6;
    }
    stack_pair_50.first = *param_2;
    stack_pair_50.second = 0;
    fn_823B9890(auStack_40,&stack_pair_50.first,&stack_pair_60.first,&uStack_70);
    uVar3 = uVar8 & 0xffffffff;
    while (uVar3 != 0) {
      fn_823B8A50(param_2);
      uVar8 = uVar8 - 1;
      uVar3 = uVar8;
    }
  }
  else {
    stack_pair_60.first = 0;
    stack_pair_60.second = 0;
    if ((piVar6 != (int *)0x0) && ((unsigned int *)*piVar6 != (unsigned int *)0x0)) {
      stack_pair_60.first = *(unsigned int *)*piVar6;
    }
    stack_pair_50.first = *param_2;
    stack_pair_50.second = 0;
    uStack_48 = (unsigned int)lVar5;
    uStack_70 = 0;
    uStack_6c = 0;
    if ((piVar4 != (int *)0x0) && ((unsigned int *)*piVar4 != (unsigned int *)0x0)) {
      uStack_70 = *(unsigned int *)*piVar4;
    }
    fn_823B9968(auStack_40,&uStack_70,&stack_pair_50.first,&stack_pair_60.first);
    uVar3 = uVar8 & 0xffffffff;
    while (uVar3 != 0) {
      fn_823B9248(param_2);
      uVar8 = uVar8 - 1;
      uVar3 = uVar8;
    }
  }
  piVar6 = (int *)0x0;
  iVar1 = param_2[3];
  if (((int *)*param_2 != (int *)0x0) &&
     (puVar2 = *(unsigned int **)*param_2, puVar2 != (unsigned int *)0x0)) {
    piVar6 = (int *)*puVar2;
  }
  *param_1 = 0;
  param_1[1] = 0;
  if ((piVar6 != (int *)0x0) && ((unsigned int *)*piVar6 != (unsigned int *)0x0)) {
    *param_1 = *(unsigned int *)*piVar6;
  }
  param_1[2] = iVar1 + (int)uVar7;
  return param_1;
}
