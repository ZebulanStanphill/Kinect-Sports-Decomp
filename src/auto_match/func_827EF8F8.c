extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_82811238();
extern int fn_82811438();


extern char lbl_8320A3E0[];
void fn_827EF8F8(int param_1)

{
  unsigned int iVar1;
  unsigned int uVar2;
  unsigned int auStack_40 [4];
  unsigned char auStack_30 [32];
  
  iVar1 = *(int *)(param_1 + 0x114);
  *(unsigned int *)(param_1 + 0x114) = 0;
  *(unsigned int *)(param_1 + 0x11c) = 0;
  *(unsigned int *)(param_1 + 0x120) = 0;
  *(unsigned short *)(param_1 + 0x124) = 0;
  if (iVar1 != 0) {
    auStack_40[0] = 3;
    uVar2 = fn_82811438(auStack_30,auStack_40,0x10);
    fn_82811238(lbl_8320A3E0,iVar1,uVar2);
  }
  return;
}

