extern int fn_8267B890();
extern int fn_8267C498();
extern int fn_82684338();
extern int fn_82687270();
extern int fn_826D74A0();
extern int fn_826D8580();
extern int fn_826DEB00();
extern int fn_826E4D70();
extern unsigned int uStack_34;
extern unsigned int uStack_38;
extern unsigned int uStack_3c;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;
extern unsigned int uStack_54;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


void fn_826E5868(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  int *piVar3;
  int iVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned int uVar8;
  unsigned __int64 uVar7;
  unsigned __int64 uVar9;
  struct { unsigned int first; unsigned int second; } stack_pair_60;

  unsigned int uStack_58;
  unsigned int uStack_54;
  unsigned int uStack_50;
  unsigned int uStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  unsigned int uStack_3c;
  unsigned int uStack_38;
  unsigned char uStack_34;
  
  iVar1 = *(int *)(param_1 + 0x10);
  uVar8 = 0;
  uVar9 = 0;
  uVar2 = *(unsigned int *)(*(int *)(iVar1 + 0x38) + 0x2c);
  uVar5 = fn_82684338(*(unsigned int *)(param_1 + 0x1c),*(unsigned int *)(param_1 + 0x20),1,
                            *(unsigned int *)(iVar1 + 0xc),*(unsigned int *)(iVar1 + 0x24),
                            *(unsigned int *)(iVar1 + 0x2c),uVar2);
  if (uVar5 != 0) {
    iVar1 = *(int *)(param_1 + 0x10);
    uStack_34 = 1;
    uStack_48 = *(unsigned int *)(iVar1 + 0x20);
    stack_pair_60.first = 1;
    uStack_58 = 0;
    stack_pair_60.second = 0;
    uStack_54 = 1;
    uStack_4c = 0;
    uStack_44 = 0;
    uStack_40 = 0;
    uStack_3c = 0;
    if ((*(char *)(iVar1 + 0x44) == '\0') && (*(int *)(iVar1 + 0x18) == 0)) {
      uStack_34 = 0;
    }
    piVar3 = *(int **)(*(int *)(*(int *)(param_1 + 0x10) + 8) + 0x10);
    uStack_50 = (int)uVar5;
    uStack_38 = uVar2;
    uVar9 = (**(int (***)())(*piVar3 + 4))(piVar3,&stack_pair_60.first);
    if (uVar9 != 0) {
      uVar6 = fn_8267B890(uVar2,0x1c,0);
      if ((uVar6 & 0xffffffff) != 0) {
        uVar8 = fn_826E4D70(uVar6,uVar9,1);
      }
      if (*(int *)(param_1 + 0x24) != 0) {
        fn_82687270();
      }
      *(unsigned int *)(param_1 + 0x24) = uVar8;
    }
  }
  iVar1 = *(int *)(param_1 + 0x24);
  if (iVar1 == 0) {
    uVar7 = 4;
  }
  else {
    iVar4 = *(int *)(param_1 + 0x14);
    uVar7 = (**(int (***)())(**(int **)(param_1 + 0x1c) + 0x18))();
    fn_826DEB00(*(unsigned int *)(iVar4 + 0x20),uVar7,iVar1,1);
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 0x18) + 0x1c);
    uVar8 = *(unsigned int *)((*(int **)(param_1 + 0x14))[8] + 0x28);
    uVar7 = (**(int (***)())(**(int **)(param_1 + 0x14) + 0x40))();
    fn_826D8580(uVar2,uVar7,uVar8);
    uVar7 = 0x302;
  }
  fn_826D74A0(*(unsigned int *)(*(int *)(param_1 + 0x18) + 0x1c),uVar7);
  if ((uVar9 & 0xffffffff) != 0) {
    fn_8267C498(uVar9);
  }
  if ((uVar5 & 0xffffffff) != 0) {
    fn_8267C498(uVar5);
  }
  return;
}

