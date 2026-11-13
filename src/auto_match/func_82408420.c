extern int fn_82359C18();
extern int fn_82408A28();
extern int fn_824550A8();
extern int fn_8288B760();
extern int fn_82F56790();
extern unsigned int iStack_3c;
extern unsigned int lbl_821B7F9C;


void fn_82408420(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  char cVar3;
  unsigned __int64 uVar4;
  unsigned char **ppuStack_40;
  int iStack_3c;
  unsigned char ***pppuStack_30;
  
  fn_824550A8(*(unsigned int *)(param_1 + 0x3c));
  uVar4 = (unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 0x20) + 0x84);
  if ((uVar4 != 0) && (cVar3 = fn_8288B760(uVar4), cVar3 == '\0')) {
    pppuStack_30 = &ppuStack_40;
    ppuStack_40 = &lbl_821B7F9C;
    iStack_3c = param_1 + 0x18;
    fn_82F56790(uVar4 + 0x88,&ppuStack_40);
    fn_82359C18(&ppuStack_40);
  }
  iVar2 = *(int *)(param_1 + 8);
  uVar1 = *(unsigned int *)(param_1 + 0x1c);
  *(unsigned int *)(iVar2 + 200) = uVar1;
  *(unsigned int *)(iVar2 + 0xbc) = 1;
  *(unsigned int *)(iVar2 + 0xc4) = uVar1;
  *(unsigned int *)(iVar2 + 0xc0) = 0xffffffff;
  fn_82408A28(param_1,*(int *)(*(int *)(param_1 + 0x10) + 0xec) != 0);
  *(unsigned int *)(*(int *)(param_1 + 8) + 0xf0) = 1;
  return;
}

