extern int fn_82A1E658();
extern int fn_82F909F0();
extern int fn_82F93988();
extern unsigned int lbl_8216B72C;
extern unsigned int lbl_8216B770;
extern unsigned int lbl_8216B79C;


void fn_82F8E3D8(unsigned int *param_1)

{
  unsigned int *puStack00000014;
  
  *param_1 = &lbl_8216B79C;
  param_1[1] = &lbl_8216B72C;
  param_1[2] = &lbl_8216B770;
  puStack00000014 = param_1;
  if (param_1[0x26] != 0) {
    fn_82F93988(param_1[0x26]);
  }
  if (puStack00000014[0x25] != 0) {
    fn_82A1E658(puStack00000014[0x25]);
  }
  fn_82F909F0(puStack00000014);
  return;
}

