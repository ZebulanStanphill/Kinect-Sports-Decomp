extern unsigned int *auStack_40;
extern int fn_828B3640();
extern int fn_828B36D0();
extern int fn_828D6A20();
extern int fn_828D6AF8();
extern unsigned int iStack_50;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;


unsigned int * fn_828D6D60(unsigned int *param_1,int *param_2,int param_3,int param_4)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  int *piVar4;
  __int64 lVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  unsigned __int64 uVar8;
  struct { unsigned int first; unsigned int second; } stack_pair_70;

  unsigned int uStack_68;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  int iStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned char auStack_40 [48];
  
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
    stack_pair_70.first = 0;
    stack_pair_70.second = 0;
    if ((piVar4 != (int *)0x0) && ((unsigned int *)*piVar4 != (unsigned int *)0x0)) {
      stack_pair_70.first = *(unsigned int *)*piVar4;
    }
    uStack_60 = 0;
    uStack_5c = 0;
    if ((piVar6 != (int *)0x0) && ((unsigned int *)*piVar6 != (unsigned int *)0x0)) {
      uStack_60 = *(unsigned int *)*piVar6;
    }
    iStack_50 = *param_2;
    uStack_4c = 0;
    fn_828D6A20(auStack_40,&iStack_50,&uStack_60,&stack_pair_70.first);
    uVar3 = uVar8 & 0xffffffff;
    while (uVar3 != 0) {
      fn_828B3640(param_2);
      uVar8 = uVar8 - 1;
      uVar3 = uVar8;
    }
  }
  else {
    uStack_60 = 0;
    uStack_5c = 0;
    if ((piVar6 != (int *)0x0) && ((unsigned int *)*piVar6 != (unsigned int *)0x0)) {
      uStack_60 = *(unsigned int *)*piVar6;
    }
    iStack_50 = *param_2;
    uStack_4c = 0;
    uStack_48 = (unsigned int)lVar5;
    stack_pair_70.first = 0;
    stack_pair_70.second = 0;
    if ((piVar4 != (int *)0x0) && ((unsigned int *)*piVar4 != (unsigned int *)0x0)) {
      stack_pair_70.first = *(unsigned int *)*piVar4;
    }
    fn_828D6AF8(auStack_40,&stack_pair_70.first,&iStack_50,&uStack_60);
    uVar3 = uVar8 & 0xffffffff;
    while (uVar3 != 0) {
      fn_828B36D0(param_2);
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
  param_1[2] = iVar1 + (int)uVar7;
  if ((piVar6 != (int *)0x0) && ((unsigned int *)*piVar6 != (unsigned int *)0x0)) {
    *param_1 = *(unsigned int *)*piVar6;
  }
  return param_1;
}

