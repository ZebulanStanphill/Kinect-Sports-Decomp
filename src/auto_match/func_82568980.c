extern int fn_825BC908();
extern unsigned int lbl_821CAB38;
extern unsigned int lbl_831C03EC;


void fn_82568980(int param_1)

{
  short sVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = *(int *)(*(int *)(param_1 + 0xd0) + 0x1c);
  *(unsigned int *)(param_1 + 0xf0) = 0;
  *(unsigned int *)(param_1 + 0xf4) = 0;
  iVar3 = 0;
  if (iVar2 != 0) {
    sVar1 = *(short *)(iVar2 + 0xc);
    iVar3 = iVar2;
    while (sVar1 != 0) {
      if (*(int (***)())(&lbl_831C03EC + (unsigned int)*(unsigned short *)(iVar3 + 0xc) * 8) != (int (**)())0x0) {
        (**(int (***)())(&lbl_831C03EC + (unsigned int)*(unsigned short *)(iVar3 + 0xc) * 8))(iVar3);
      }
      iVar3 = *(int *)(&lbl_821CAB38 + (unsigned int)*(unsigned short *)(iVar3 + 0xc) * 4) + iVar3;
      sVar1 = *(short *)(iVar3 + 0xc);
    }
    fn_825BC908(iVar2);
    iVar3 = iVar2;
  }
  *(int *)(param_1 + 0x70) = iVar3;
  return;
}

