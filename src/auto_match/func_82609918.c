extern unsigned int *auStack_40;
extern int fn_8253D5A0();
extern int fn_82D82E28();
extern int fn_82D86660();
extern int fn_82D890C8();
extern int fn_82D891F0();


void fn_82609918(int param_1,int param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned char auStack_40 [1];
  
  uVar1 = *(unsigned int *)(param_2 + 8);
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x18)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 0x14));
      if (iVar2 != 0) {
        fn_82D890C8(auStack_40,uVar1,iVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x18));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x24)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 0x20));
      if (iVar2 != 0) {
        fn_82D891F0(uVar1,iVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x24));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0xc)) {
    iVar4 = 0;
    do {
      iVar2 = *(int *)(iVar4 + *(int *)(param_1 + 8));
      if (iVar2 != 0) {
        fn_8253D5A0(param_2,param_3,iVar2);
      }
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0xc));
  }
  iVar3 = 0;
  if (0 < *(int *)(param_1 + 0x30)) {
    iVar4 = 0;
    do {
      if (*(int *)(iVar4 + *(int *)(param_1 + 0x2c)) == 0) goto LAB_82609a40;
      iVar3 = iVar3 + 1;
      iVar4 = iVar4 + 4;
    } while (iVar3 < *(int *)(param_1 + 0x30));
  }
  iVar3 = -1;
LAB_82609a40:
  if (iVar3 == -1) {
    fn_82D86660(uVar1,*(unsigned int *)(param_1 + 0x2c),*(unsigned int *)(param_1 + 0x30));
  }
  else {
    iVar3 = 0;
    if (0 < *(int *)(param_1 + 0x30)) {
      iVar4 = 0;
      do {
        iVar2 = *(int *)(*(int *)(param_1 + 0x2c) + iVar4);
        if (iVar2 != 0) {
          fn_82D82E28(uVar1,iVar2);
        }
        iVar3 = iVar3 + 1;
        iVar4 = iVar4 + 4;
      } while (iVar3 < *(int *)(param_1 + 0x30));
    }
  }
  return;
}

