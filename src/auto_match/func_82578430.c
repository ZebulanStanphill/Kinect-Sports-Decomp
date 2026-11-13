extern unsigned int *auStack_50;
extern unsigned int *auStack_54;
extern unsigned int *auStack_58;
extern int fn_825480E0();
extern int fn_8262FBD8();
extern int fn_8263BDD8();
extern int fn_8265CA60();
extern int fn_82837D98();
extern int fn_8284C850();
extern int fn_8284C858();
extern unsigned int iStack_60;
extern unsigned int uStack_5c;


void fn_82578430(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned char uVar5;
  int iVar6;
  __int64 lVar7;
  int iVar8;
  struct { int first; unsigned int second; } stack_pair_60;

  unsigned char auStack_58 [4];
  unsigned char auStack_54 [4];
  unsigned char auStack_50 [16];
  
  iVar2 = fn_8284C850(*(unsigned int *)(*(int *)(param_1 + 0x78) + 0x14));
  iVar3 = fn_8284C858(*(unsigned int *)(*(int *)(param_1 + 0x78) + 0x14));
  fn_82837D98(*(unsigned int *)(*(int *)(param_1 + 0x78) + 0x14),0,&stack_pair_60.first);
  *(int *)(param_1 + 0xa4) = iVar2;
  *(int *)(param_1 + 0xa8) = iVar3;
  *(unsigned int *)(param_1 + 0xac) = 1;
  uVar4 = fn_8265CA60((__int64)iVar3 * (__int64)iVar2);
  *(unsigned int *)(param_1 + 0xb0) = uVar4;
  fn_8263BDD8(stack_pair_60.first,0,0,0x10,&stack_pair_60.second,auStack_50,auStack_54,auStack_58);
  lVar7 = 0;
  if (0 < iVar3) {
    iVar6 = 0;
    do {
      iVar8 = 0;
      if (0 < iVar2) {
        do {
          uVar5 = fn_825480E0(stack_pair_60.second,iVar2,iVar8,lVar7);
          iVar1 = iVar6 + iVar8;
          iVar8 = iVar8 + 1;
          *(unsigned char *)(iVar1 + *(int *)(param_1 + 0xb0)) = uVar5;
        } while (iVar8 < iVar2);
      }
      lVar7 = lVar7 + 1;
      iVar6 = iVar6 + iVar2;
    } while ((int)lVar7 < iVar3);
  }
  fn_8262FBD8(stack_pair_60.first,*(unsigned int *)(stack_pair_60.first + 0x20) & 0xfffff000,
                    *(unsigned int *)(stack_pair_60.first + 0x30) & 0xfffff000);
  return;
}

