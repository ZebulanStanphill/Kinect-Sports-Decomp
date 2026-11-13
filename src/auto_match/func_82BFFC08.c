extern int fn_8262FEC8();
extern int fn_82631578();
extern int fn_82639F78();
extern int fn_82647460();


unsigned __int64 fn_82BFFC08(int *param_1)

{
  if (param_1[0xe] != 0) {
    fn_82639F78(param_1[0xe],0,0,0,0,1);
                    /* WARNING: Subroutine does not return */
    fn_82631578(param_1[0xe],0);
  }
  if (param_1[0x13] != 0) {
    fn_8262FEC8();
    param_1[0x13] = 0;
  }
  if (param_1[0x12] != 0) {
    fn_8262FEC8();
    param_1[0x12] = 0;
  }
  if (param_1[0x11] != 0) {
    fn_8262FEC8();
    param_1[0x11] = 0;
  }
  if (param_1[0x10] != 0) {
    fn_8262FEC8();
    param_1[0x10] = 0;
  }
  if (param_1[0xf] != 0) {
    fn_8262FEC8();
    param_1[0xf] = 0;
  }
  if (param_1[0xe] != 0) {
    fn_82647460();
    param_1[0xe] = 0;
  }
  (**(int (***)())(*param_1 + 0x3c))(param_1);
  (**(int (***)())(*param_1 + 0x58))(param_1);
  return 0;
}

