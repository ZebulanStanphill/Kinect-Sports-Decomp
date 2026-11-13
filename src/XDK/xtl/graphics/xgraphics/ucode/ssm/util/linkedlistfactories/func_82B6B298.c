extern int fn_82AB15D0();
extern int fn_82B6B0C8();


void fn_82B6B298(unsigned int *param_1)

{
  if (param_1 == (unsigned int *)0x0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d96e4,0xffffffff820d97e8,0x96);
  }
  if (param_1[3] != 0) {
    fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820d97c8,0xffffffff820d97e8,0x97);
  }
  if (param_1[5] != 0) {
    fn_82B6B0C8();
  }
  if (param_1[4] != 0) {
    fn_82B6B0C8();
  }
  (*(int (**)())param_1[2])(*param_1,param_1);
  return;
}

