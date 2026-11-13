extern int fn_82815578();
extern int fn_8283FF08();
extern int fn_82849D18();
extern unsigned int iStack_60;
extern unsigned int iStack_64;
extern unsigned int lbl_821C81F4;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;


void fn_825B15C0(int param_1,int param_2,unsigned int param_3,unsigned int param_4)

{
  int iVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  int iVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned char *puStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  int iStack_64;
  int iStack_60;
  
  if (((*(int *)(param_1 + 300) != 0) && (*(int *)(*(int *)(param_1 + 0x128) + 4) != 0)) &&
     (uVar5 = 0, *(int *)(param_1 + 300) != 0)) {
    iVar7 = 0;
    iVar6 = 0;
    do {
      iStack_60 = iVar7 + *(int *)(param_1 + 0x128);
      puStack_70 = &lbl_821C81F4;
      if (*(int *)(iStack_60 + 4) != 0) {
        iVar4 = iVar7 + *(int *)(param_1 + 0x128);
        iVar1 = *(int *)(iVar4 + 0xc);
        uVar2 = *(unsigned int *)(iVar4 + 4);
        uVar3 = *(unsigned int *)(*(int *)(param_2 + 0x4c) + iVar6 + 4);
        uStack_6c = param_3;
        uStack_68 = param_4;
        iStack_64 = param_1;
        if ((iVar1 != 0) && (*(int *)(iVar1 + 0x20) != 0)) {
          fn_82849D18();
        }
        fn_8283FF08(uVar2,uVar3,&puStack_70);
        fn_82815578(uVar3);
      }
      uVar5 = uVar5 + 1;
      iVar6 = iVar6 + 0x10;
      iVar7 = iVar7 + 0x20;
    } while (uVar5 < *(unsigned int *)(param_1 + 300));
  }
  return;
}

