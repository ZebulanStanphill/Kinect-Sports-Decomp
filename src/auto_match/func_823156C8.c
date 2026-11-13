typedef unsigned char bool;
extern int fn_822BD338();
extern int fn_822C8C08();
extern int fn_8236C6A0();


void fn_823156C8(int param_1)

{
  unsigned int iVar1;
  bool bVar2;
  unsigned char cVar3;
  
  bVar2 = (*(int *)(param_1 + 0x660) != 2) || (*(char *)(param_1 + 0x5d5) == 0) || (*(char *)(param_1 + 0x5d4) != 0);
  if ((bVar2) && (iVar1 = *(int *)(*(int *)(param_1 + 0xc) + 0x24), iVar1 != 0)) {
    *(unsigned char *)(iVar1 + 0xe0) = 1;
  }
  cVar3 = fn_822BD338((unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(param_1 + 0xc) + 0x114) + 0x20) +
                            4,"pass_locomotion");
  if (cVar3 != '\0') {
    fn_822C8C08(*(unsigned int *)(*(int *)(param_1 + 0xc) + 0x114),"idle");
  }
  fn_8236C6A0(*(unsigned int *)(param_1 + 0x10),*(unsigned int *)(param_1 + 0xc));
  return;
}

