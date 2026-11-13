extern int fn_82AD1270();
extern int fn_82AD17B0();


unsigned int * fn_82AD1918(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned __int64 param_4)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82AD17B0();
  *puVar1 = *puVar1 & 0xf1ffffff | 0x2000000;
  fn_82AD1270(puVar1,param_4);
  *puVar1 = (param_3 & 0x1b) << 5 | 0x1c80 | *puVar1 & 0xfffffc9f;
  return puVar1;
}

