extern int fn_8267BE38();
extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_826944C8();
extern int fn_82695370();
extern int fn_826957D0();
extern int fn_826959C8();
extern int fn_82696958();
extern int fn_82696B20();
extern int fn_82696D38();
extern int fn_8269A608();
extern int fn_8269F500();
extern int fn_826A7398();
extern int fn_82709BF8();
extern unsigned int iStack_44;
extern unsigned int iStack_48;


void fn_8274C758(int param_1)

{
  unsigned char *puVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  char *pcVar6;
  int iVar7;
  unsigned int *puVar8;
  int iVar9;
  __int64 lVar10;
  int aiStack_50 [2];
  struct { int first; int second; } stack_pair_48;

  unsigned char bStack_40;
  
  puVar1 = *(unsigned char **)(param_1 + 4);
  fn_826959C8(puVar1);
  *puVar1 = 0;
  if (2 < *(int *)(param_1 + 0x1c)) {
    uVar4 = fn_826A7398(*(unsigned int *)(param_1 + 0x18));
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar5 = fn_826957D0(param_1,0);
    fn_82696D38(aiStack_50,uVar5,uVar2,0xffffffffffffffff,0);
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar5 = fn_826957D0(param_1,2);
    fn_82696B20(&stack_pair_48.first,uVar5,uVar2);
    puVar8 = (unsigned int *)0x0;
    iVar9 = 0;
    pcVar6 = (char *)fn_826957D0(param_1,1);
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    if (*pcVar6 == '\a') {
      uVar5 = fn_826957D0(param_1,1);
      iVar7 = fn_82695370(uVar5,uVar2);
      if (iVar7 != 0) {
        *(int *)(iVar7 + 4) = *(int *)(iVar7 + 4) + 1;
        puVar8 = *(unsigned int **)(iVar7 + 0x80);
        if (puVar8 == (unsigned int *)0x0) {
          puVar8 = (unsigned int *)fn_8269F500(iVar7);
        }
        if (puVar8 != (unsigned int *)0x0) {
          *puVar8 = *puVar8 + 1;
        }
        fn_8267C498(iVar7);
      }
    }
    else {
      uVar5 = fn_826957D0(param_1,1);
      iVar9 = fn_82696958(uVar5,uVar2);
      if (iVar9 != 0) {
        *(unsigned int *)(iVar9 + 8) = *(int *)(iVar9 + 8) + 1U & 0x8fffffff;
      }
    }
    fn_82709BF8(uVar4,aiStack_50,puVar8,iVar9,&stack_pair_48.first);
    puVar1 = *(unsigned char **)(param_1 + 4);
    fn_826959C8(puVar1);
    *puVar1 = 2;
    puVar1[4] = 1;
    if (iVar9 != 0) {
      fn_826824B0(iVar9);
    }
    if ((puVar8 != (unsigned int *)0x0) &&
       (uVar3 = *puVar8, *puVar8 = (unsigned int)((unsigned __int64)uVar3 - 1),
       (__int64)((unsigned __int64)uVar3 - 1) < 1)) {
      fn_8269A608(puVar8);
      fn_8267BE38(puVar8);
    }
    if (((bStack_40 & 2) == 0) && (stack_pair_48.first != 0)) {
      fn_826824B0();
    }
    stack_pair_48.first = 0;
    if (((bStack_40 & 1) == 0) && (stack_pair_48.second != 0)) {
      fn_826824B0();
    }
    stack_pair_48.second = 0;
    lVar10 = (unsigned __int64)*(unsigned int *)(aiStack_50[0] + 8) - 1;
    *(int *)(aiStack_50[0] + 8) = (int)lVar10;
    if (lVar10 == 0) {
      fn_826944C8(aiStack_50[0]);
    }
  }
  return;
}

