extern int fn_82F68B70();
extern unsigned int lbl_832179FC;


void fn_829D37C8(unsigned int param_1,unsigned int param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(lbl_832179FC + 0x8f404);
  iVar2 = iVar1 * 0x1c + lbl_832179FC;
  *(int *)(lbl_832179FC + 0x8f404) = iVar1 + 1;
  *(unsigned int *)(iVar2 + 0x8f408) = param_1;
  *(unsigned int *)(iVar2 + 0x8f40c) = param_2;
  fn_82F68B70(iVar2 + 0x8f410,param_3,0x14);
  return;
}

