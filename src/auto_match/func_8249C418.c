typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8225F160();
extern int fn_8225F3C0();
extern int fn_8249C848();
extern int fn_8249CB58();
extern int fn_8249D600();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


unsigned __int64 fn_8249C418(int param_1,unsigned __int64 param_2,int param_3,int param_4,int param_5)

{
  bool bVar1;
  unsigned char bVar2;
  bool bVar3;
  int iVar5;
  unsigned int *puVar6;
  unsigned __int64 uVar4;
  unsigned int *puVar7;
  int iVar8;
  unsigned __int64 uVar9;
  unsigned __int64 uVar10;
  unsigned int uStack0000001c;
  int aiStack_50 [20];
  
  uStack0000001c = (unsigned int)param_2;
  aiStack_50[0] = 0;
  uVar9 = 1;
  if ((param_3 != 0) || (iVar5 = fn_8249C848(param_1,param_2,aiStack_50), iVar5 == 0)) {
    puVar7 = (unsigned int *)fn_8249CB58(param_1 + 0x34,&stack0x0000001c);
    (**(int (***)())(*(int *)*puVar7 + 0xc))((int *)*puVar7,*(unsigned int *)(param_1 + 0xb0));
    return 1;
  }
  if (param_4 != 0) {
    bVar1 = *(int *)(param_1 + 8) == 2;
    if ((!bVar1) || (uVar10 = 1, *(int *)(param_1 + 0x88) != 0)) {
      uVar10 = 0;
    }
    if (param_5 == 0) {
      puVar7 = (unsigned int *)fn_8249CB58(param_1 + 0x34,&stack0x0000001c);
      uVar9 = (**(int (***)())(*(int *)*puVar7 + 4))
                        ((int *)*puVar7,*(unsigned int *)(param_1 + 0xb0),0,bVar1,uVar10);
      uVar9 = uVar9 & 1;
    }
    else {
      fn_8225F160();
      iVar5 = fn_8225F3C0();
      if ((((*(int *)(param_1 + 8) == 2) || (*(int *)(param_1 + 8) == 1)) ||
          ((*(unsigned int *)(param_1 + 0x6c) & param_2) != 0)) || (bVar3 = true, iVar5 != 1)) {
        bVar3 = false;
      }
      iVar5 = 0;
      puVar7 = (unsigned int *)(param_1 + 0x14);
      do {
        if ((!bVar3) || (iVar5 == *(int *)(param_1 + 0x20))) {
          puVar6 = (unsigned int *)fn_8249CB58(param_1 + 0x34,&stack0x0000001c);
          uVar4 = (**(int (***)())(*(int *)*puVar6 + 4))
                            ((int *)*puVar6,*(unsigned int *)(param_1 + 0xb0),*puVar7,bVar1,uVar10);
          uVar9 = uVar4 & uVar9;
        }
        iVar5 = iVar5 + 1;
        puVar7 = puVar7 + 1;
      } while (iVar5 < 2);
    }
  }
  if (aiStack_50[0] == 0) {
    return uVar9;
  }
  iVar5 = *(int *)(*(int *)(param_1 + 0x110) + 0x2c);
  if (*(int *)(param_1 + 8) == 0) {
    iVar8 = fn_8249D600(*(int *)(param_1 + 0x110),*(unsigned int *)(param_1 + 4));
    bVar2 = 0;
    if (iVar8 == 0) goto LAB_8249c5a4;
  }
  bVar2 = 1;
LAB_8249c5a4:
  if ((bool)(iVar5 == 0 & bVar2)) {
    *(unsigned int *)(param_1 + 0x8c) = 1;
  }
  return uVar9;
}

