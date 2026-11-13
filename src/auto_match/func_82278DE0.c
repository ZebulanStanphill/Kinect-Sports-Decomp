extern void fn_822315A0(unsigned int);
extern int fn_82278E58();
extern int fn_82359C18();
extern void fn_8251FA58(unsigned int);
extern int fn_8266F6B8();
extern unsigned int lbl_821A8228;


void fn_82278DE0(unsigned int *param_1)

{
  unsigned int uVar1;
  
  *param_1 = &lbl_821A8228;
  uVar1 = fn_8266F6B8();
  fn_82278E58(param_1,uVar1);
  if (param_1[0x16] != 0) {
    fn_8251FA58(param_1[0x16]);
    param_1[0x16] = 0;
  }
  fn_82359C18(param_1 + 0x98);
  if (param_1[3] != 0) {
    fn_822315A0(param_1[3]);
  }
  return;
}

