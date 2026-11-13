extern int fn_8265C990();
extern int fn_82BA02A8();


unsigned __int64 fn_82F174E0(unsigned int *param_1)

{
  fn_82BA02A8();
  if (*param_1 != 0) {
    fn_8265C990(*param_1,0x248c8000);
    *param_1 = 0;
  }
  if (param_1[1] != 0) {
    fn_8265C990(param_1[1],0x248c8000);
    param_1[1] = 0;
  }
  fn_8265C990(param_1,0x248c8000);
  return 0;
}

