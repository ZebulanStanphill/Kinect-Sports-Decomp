extern unsigned int *auStack_40;
extern int fn_822315A0();
extern int fn_824C0330();
extern int fn_8265CA20();
extern int fn_828A1D58();
extern int fn_828C03E8();
extern unsigned int lbl_821C250C;
extern unsigned int uStack_30;


unsigned int * fn_82230C18(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned __int64 uVar1;
  unsigned char auStack_40 [16];
  unsigned int uStack_30;
  
  uStack_30 = 0;
  uVar1 = fn_828A1D58();
  fn_828C03E8(uVar1,auStack_40);
  if (param_1[0x15] != 0) {
    fn_822315A0();
  }
  fn_824C0330(param_1 + 3);
  *param_1 = &lbl_821C250C;
  if ((param_2 & 1) != 0) {
    fn_8265CA20(param_1);
  }
  return param_1;
}

