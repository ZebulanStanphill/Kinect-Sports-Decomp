extern unsigned int *auStack_30;
extern unsigned int *auStack_40;
extern int fn_822E83E0();
extern int fn_8240DEC0();


void fn_82563B08(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  int in_r0;
  unsigned int in_register_00010010;
  unsigned int in_register_00010014;
  unsigned int in_register_00010018;
  unsigned int in_vr1;
  unsigned int in_register_00010020;
  unsigned int in_register_00010024;
  unsigned int in_register_00010028;
  unsigned int in_vr2;
  unsigned char auStack_40 [16];
  unsigned char auStack_30 [32];
  
  puVar1 = (unsigned int *)((unsigned int)(auStack_40 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010010;
  puVar1[1] = in_register_00010014;
  puVar1[2] = in_register_00010018;
  puVar1[3] = in_vr1;
  fn_822E83E0(param_1,auStack_40);
  puVar1 = (unsigned int *)((unsigned int)(auStack_30 + in_r0) & 0xfffffff0);
  *puVar1 = in_register_00010020;
  puVar1[1] = in_register_00010024;
  puVar1[2] = in_register_00010028;
  puVar1[3] = in_vr2;
  fn_8240DEC0(param_1,auStack_30);
  return;
}

