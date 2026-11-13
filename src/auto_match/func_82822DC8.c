extern unsigned int *puRam8320a768;
extern unsigned int lbl_8320A778;
extern unsigned int uRam8320a76c;
extern unsigned int uRam8320a770;
extern unsigned int uRam8320a774;


void fn_82822DC8(unsigned int *param_1)

{
  uRam8320a76c = 0x8320a768;
  uRam8320a770 = 0x8320a768;
  lbl_8320A778 = 0x8320a768;
  uRam8320a774 = 1;
  param_1[1] = 0x8320a768;
  param_1[2] = 0x8320a768;
  *param_1 = 0x8320a768;
  param_1[3] = 1;
  puRam8320a768 = param_1;
  return;
}
