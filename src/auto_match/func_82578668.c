extern unsigned int *auStack_70;
extern unsigned int *auStack_74;
extern unsigned int *auStack_78;
extern int fn_825480E0();
extern int fn_8262FBD8();
extern int fn_8263BDD8();
extern int fn_8265CA60();
extern int fn_82837D98();
extern int fn_8284C850();
extern int fn_8284C858();
extern int fn_8284C860();
extern unsigned int iStack_80;
extern unsigned int uStack_7c;


void fn_82578668(int param_1)

{
  unsigned char extraout_var;
  unsigned __int64 uVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar5;
  __int64 lVar6;
  __int64 lVar7;
  int iVar8;
  int iVar9;
  struct { int first; unsigned int second; } stack_pair_80;

  unsigned char auStack_78 [4];
  unsigned char auStack_74 [4];
  unsigned char auStack_70 [112];
  
  uVar1 = fn_8284C850(*(unsigned int *)(*(int *)(param_1 + 0x7c) + 0x14));
  iVar2 = fn_8284C858(*(unsigned int *)(*(int *)(param_1 + 0x7c) + 0x14));
  uVar3 = fn_8284C860(*(unsigned int *)(*(int *)(param_1 + 0x7c) + 0x14));
  uVar3 = uVar3 & 0xff;
  fn_82837D98(*(unsigned int *)(*(int *)(param_1 + 0x7c) + 0x14),0,&stack_pair_80.first);
  iVar8 = (int)uVar1;
  *(int *)(param_1 + 0x84) = iVar8;
  *(int *)(param_1 + 0x88) = iVar2;
  *(unsigned int *)(param_1 + 0x8c) = uVar3;
  uVar4 = fn_8265CA60((__int64)(int)(uVar3 * iVar2) * (__int64)iVar8);
  *(unsigned int *)(param_1 + 0x90) = uVar4;
  lVar6 = 0;
  if (uVar3 != 0) {
    iVar5 = 0;
    do {
      fn_8263BDD8(stack_pair_80.first,lVar6,0,0x10,&stack_pair_80.second,auStack_70,auStack_74,auStack_78);
      lVar7 = 0;
      if (0 < iVar2) {
        do {
          iVar9 = 0;
          if (0 < iVar8) {
            do {
              fn_825480E0(stack_pair_80.second,uVar1,iVar9,lVar7);
              *(unsigned char *)((iVar5 + (int)lVar7) * iVar8 + *(int *)(param_1 + 0x90) + iVar9) =
                   extraout_var;
              iVar9 = iVar9 + 1;
            } while (iVar9 < iVar8);
          }
          lVar7 = lVar7 + 1;
        } while ((int)lVar7 < iVar2);
      }
      fn_8262FBD8(stack_pair_80.first,*(unsigned int *)(stack_pair_80.first + 0x20) & 0xfffff000,
                        *(unsigned int *)(stack_pair_80.first + 0x30) & 0xfffff000);
      lVar6 = lVar6 + 1;
      iVar5 = iVar5 + iVar2;
    } while ((int)lVar6 < (int)uVar3);
  }
  return;
}

