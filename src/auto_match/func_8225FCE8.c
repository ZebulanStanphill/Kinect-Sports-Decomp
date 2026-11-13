extern unsigned int *auStack_810;
extern unsigned int fStack00000020;
extern unsigned int fStack00000024;
extern unsigned int fStack00000028;
extern int fn_82526C70();
extern int fn_82E1CC60();


void fn_8225FCE8(unsigned __int64 param_1)

{
  float in_register_00010010;
  float in_register_00010014;
  float in_register_00010018;
  float fStack00000020;
  float fStack00000024;
  float fStack00000028;
  unsigned char auStack_810 [2048];
  
  fStack00000020 = in_register_00010010;
  fStack00000024 = in_register_00010014;
  fStack00000028 = in_register_00010018;
  fn_82526C70(auStack_810,0x800,0xffffffff821a6810,param_1);
  fn_82E1CC60((double)fStack00000020,auStack_810);
  fn_82526C70(auStack_810,0x800,0xffffffff821a6818,param_1);
  fn_82E1CC60((double)fStack00000024,auStack_810);
  fn_82526C70(auStack_810,0x800,0xffffffff821a6820,param_1);
  fn_82E1CC60((double)fStack00000028,auStack_810);
  return;
}

