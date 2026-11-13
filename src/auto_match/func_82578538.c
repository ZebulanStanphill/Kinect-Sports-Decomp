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
extern unsigned int iStack_80;
extern unsigned int uStack_7c;


void fn_82578538(int param_1)

{
  unsigned char extraout_var;
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  int iVar4;
  __int64 lVar5;
  __int64 lVar6;
  int iVar7;
  struct { int first; unsigned int second; } stack_pair_80;

  unsigned char auStack_78 [4];
  unsigned char auStack_74 [4];
  unsigned char auStack_70 [16];
  
  iVar1 = fn_8284C850(*(unsigned int *)(*(int *)(param_1 + 100) + 0x14));
  iVar1 = iVar1 >> 3;
  iVar2 = fn_8284C858(*(unsigned int *)(*(int *)(param_1 + 100) + 0x14));
  iVar2 = iVar2 >> 3;
  fn_82837D98(*(unsigned int *)(*(int *)(param_1 + 100) + 0x14),0,&stack_pair_80.first);
  *(int *)(param_1 + 0x94) = iVar1;
  *(int *)(param_1 + 0x98) = iVar2;
  *(unsigned int *)(param_1 + 0x9c) = 0xc;
  uVar3 = fn_8265CA60((__int64)iVar2 * (__int64)iVar1 * 0xc);
  *(unsigned int *)(param_1 + 0xa0) = uVar3;
  lVar5 = 0;
  iVar4 = 0;
  do {
    fn_8263BDD8(stack_pair_80.first,lVar5,3,0x10,&stack_pair_80.second,auStack_70,auStack_74,auStack_78);
    lVar6 = 0;
    if (0 < iVar2) {
      do {
        iVar7 = 0;
        if (0 < iVar1) {
          do {
            fn_825480E0(stack_pair_80.second,iVar1,iVar7,lVar6);
            *(unsigned char *)(*(int *)(param_1 + 0xa0) + (iVar4 + (int)lVar6) * iVar1 + iVar7) =
                 extraout_var;
            iVar7 = iVar7 + 1;
          } while (iVar7 < iVar1);
        }
        lVar6 = lVar6 + 1;
      } while ((int)lVar6 < iVar2);
    }
    fn_8262FBD8(stack_pair_80.first,*(unsigned int *)(stack_pair_80.first + 0x20) & 0xfffff000,
                      *(unsigned int *)(stack_pair_80.first + 0x30) & 0xfffff000);
    lVar5 = lVar5 + 1;
    iVar4 = iVar4 + iVar2;
  } while ((int)lVar5 < 0xc);
  return;
}

