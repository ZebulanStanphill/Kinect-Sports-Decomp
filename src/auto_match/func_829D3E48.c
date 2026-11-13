extern int fn_829D3C80();
extern int fn_829D3D08();
extern int fn_829DBCE0();
extern int fn_829DC470();
extern int fn_829DD3F8();
extern int fn_829DDDB8();


void fn_829D3E48(int param_1)

{
  int iVar1;
  
  fn_829DC470(param_1 + 0x24);
  fn_829DDDB8(param_1 + 0x70);
  fn_829DD3F8(param_1 + 0x94);
  fn_829DBCE0(param_1 + 0xb0);
  fn_829D3D08(param_1);
  iVar1 = fn_829D3C80("NuiV1TitlePanCfg",0x11,param_1 + 0x244);
  if (iVar1 >= 0) {
    fn_829D3C80("NuiV1GuidePanCfg",0x11,param_1 + 0xd8);
  }
  return;
}

