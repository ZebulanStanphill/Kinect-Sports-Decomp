extern int fn_82BE1A10();
extern int fn_82BE1FF0();
extern int fn_82BE5240();
extern int fn_82BE5340();
extern int fn_82BE5350();
extern int fn_82BE5378();
extern int fn_82BF14A8();
extern int fn_82BF5418();
extern int fn_82BF8F68();


unsigned __int64 fn_82BF18C8(int param_1)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  int iVar6;
  unsigned __int64 uVar5;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  
  fn_82BE1A10();
  iVar6 = fn_82BE1FF0();
  if (iVar6 == 0) {
    uVar5 = fn_82BE5240(param_1,0x260,0xffffffff82196582);
  }
  else {
    iVar9 = param_1 + 0x3c;
    fn_82BE5340(iVar9);
    while (*(int *)(param_1 + 0x44) != 0) {
      iVar7 = fn_82BE5378(iVar9);
      if ((*(short *)(iVar7 + 0x78) != 0) && (*(int *)(iVar7 + 0x54) != 0)) {
        fn_82BF14A8(param_1,*(unsigned int *)(iVar7 + 0x18),1);
      }
      if ((*(short *)(iVar7 + 0xd8) != 0) && (*(int *)(iVar7 + 0xb4) != 0)) {
        fn_82BF14A8(param_1,*(unsigned int *)(iVar7 + 0x18),0);
      }
      if (*(int *)(iVar7 + 0xf0) != 0) {
        iVar10 = iVar7 + 0xe4;
        fn_82BE5340(iVar10);
        while (*(int *)(iVar7 + 0xec) != 0) {
          uVar2 = *(unsigned int *)(iVar6 + 0x4c);
          iVar8 = fn_82BE5378(iVar10);
          uVar1 = *(unsigned short *)(iVar8 + 0x20);
          iVar8 = fn_82BE5378(iVar10);
          uVar5 = *(unsigned __int64 *)(iVar8 + 0x18);
          uVar3 = *(unsigned int *)(iVar7 + 0x14);
          uVar4 = *(unsigned int *)(iVar7 + 0x18);
          iVar8 = fn_82BE5378(iVar10);
          fn_82BF5418(uVar2,*(unsigned int *)(iVar8 + 0x14),uVar4,uVar3,uVar5,uVar1);
          fn_82BE5350(iVar10);
        }
      }
      fn_82BF8F68(iVar7);
      fn_82BE5350(iVar9);
    }
    uVar5 = 0;
  }
  return uVar5;
}

