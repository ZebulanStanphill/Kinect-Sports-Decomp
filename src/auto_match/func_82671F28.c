typedef unsigned char bool;
extern int fn_822315A0();
extern int fn_82517978();
extern int fn_82540288();
extern int fn_8265C9E0();
extern int fn_82671578();
extern int fn_82A1BB18();
extern int fn_82BFE128();
extern unsigned int iStack_3c;
extern unsigned int *lbl_831E7B40;
extern unsigned int lbl_831E7B44;
extern unsigned int uStack_40;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_82671F28(__int64 param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar5;
  __int64 lVar4;
  unsigned int uVar6;
  unsigned int *puVar7;
  unsigned __int64 uVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned int uStack_40;
  int iStack_3c;
  
  uVar8 = 0;
  uStack_40 = 0;
  iVar5 = fn_82A1BB18();
  iVar3 = (int)param_1;
  if (iVar5 == lbl_831E7B44) {
    do {
      puVar7 = (unsigned int *)(param_1 + 0x104);
      uVar1 = *puVar7;
      if (in_RESERVE != '\0') {
        uVar2 = storeWordConditionalIndexed((unsigned __int64)uVar1,0,param_1 + 0x104);
        *puVar7 = uVar2;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if (uVar1 != 0) {
      if (*(unsigned int **)(iVar3 + 0xb8) == (unsigned int *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = **(unsigned int **)(iVar3 + 0xb8);
      }
      fn_82540288(param_2,uVar6);
    }
  }
  else if (*(int *)(iVar3 + 0xe8) == 0) {
    lVar4 = fn_8265C9E0(0x18);
    if (lVar4 != 0) {
      uStack_40 = 0;
      iStack_3c = 0;
      fn_82517978(&uStack_40,*(unsigned int *)(iVar3 + 4),*(unsigned int *)(iVar3 + 8),1);
      uVar8 = fn_82671578(lVar4,&uStack_40,param_2);
      if (iStack_3c != 0) {
        fn_822315A0();
      }
    }
    fn_82BFE128(*lbl_831E7B40,uVar8);
  }
  return;
}

