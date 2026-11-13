extern int fn_82AB15D0();
extern unsigned int lbl_820E4F08[];


unsigned int fn_82BC6820(char param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = (int)param_1;
  iVar2 = iVar1 + -0x30;
  if (1 < iVar2) {
    if (iVar1 == 0x5f) {
      iVar2 = 2;
      goto LAB_82bc6888;
    }
    iVar2 = iVar1 + -0x74;
  }
  if ((iVar2 < 0) || (6 < iVar2)) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","i >= 0 && i <= 6","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\expansion.cpp",0x3f7);
  }
LAB_82bc6888:
  return lbl_820E4F08[iVar2];
}

