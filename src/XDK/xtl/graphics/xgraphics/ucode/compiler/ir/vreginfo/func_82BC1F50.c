extern int fn_82AB15D0();
extern int fn_82BC0928();
extern unsigned int lbl_820E3564;


unsigned int * fn_82BC1F50(unsigned int *param_1,int param_2)

{
  fn_82BC0928();
  *param_1 = &lbl_820E3564;
  if (param_2 != 0) {
    fn_82AB15D0(0,"Assertion failed: %s (%s:%u)","_usage == 0","e:\\xenon\\xdk-main-jul10\\core\\private\\xtl\\graphics\\xgraphics\\ucode\\compiler\\ir\\vreginfo.cpp",0x353);
  }
  *(unsigned char *)((int)param_1 + 5) = 1;
  param_1[4] = 0x20;
  return param_1;
}

