extern int fn_82AB15D0();
extern int fn_82AB7550();
extern unsigned int lbl_8316E57C;


unsigned __int64
fn_82B9A900(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3,int (**param_4)(),unsigned __int64 param_5
             )

{
  if ((param_1 & 0xffffffff) == 0) {
    fn_82AB15D0(param_1,0xffffffff820d2ea4,0xffffffff820d2ff0,0xffffffff820ddb08,0x3dc);
  }
  if ((param_3 & 0xffffffff) != 0) {
    fn_82AB7550(param_3,0x26,0,0);
  }
  if ((param_4 != (int (**)())0x0) && ((param_5 & 0xffffffff) != 0)) {
    (*param_4)(param_5,0xffffffff820ddb70,lbl_8316E57C,0x3f,param_2,0);
  }
  return 0;
}

