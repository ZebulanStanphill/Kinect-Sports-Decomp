extern int fn_82AB15D0();
extern int fn_82BA0540();
extern int fn_82BC5580();
extern int (*lbl_820E3A58[])();
extern unsigned int lbl_8316FF50[];


void fn_82BA3038(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (lbl_820E3A58[lbl_8316FF50[0x742] * 2])(0x8e,*(unsigned int *)(param_1 + 0xc));
  *(unsigned int *)(iVar2 + 0x38) = 0;
  *(unsigned int *)(iVar2 + 0x50) = 0x2e;
  *(unsigned int *)(iVar2 + 0xa8) = 0;
  if ((*(char *)(param_1 + 0x860) != '\0') && (*(unsigned int *)(param_1 + 0x74) != 0)) {
    iVar1 = *(unsigned int *)(*(unsigned int *)(param_1 + 0x74) + 0x3b4);
    fn_82BC5580(iVar1,iVar2);
    fn_82BA0540(*(unsigned int *)(param_1 + 0x74),iVar2);
    if (*(unsigned int *)(param_1 + 0x78) != 0) {
      *(unsigned int *)(iVar2 + 0xa8) = 1;
      if (*(unsigned int *)(*(unsigned int *)(param_1 + 0x78) + 0x3b4) != iVar1) {
        fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","position_export_2->GetOwningBlock() == alloc_block","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\cfg.cpp",0xb07);
      }
      fn_82BA0540(*(unsigned int *)(param_1 + 0x78),iVar2);
    }
  }
  return;
}

