extern int fn_82AD1270();
extern int fn_82AD17B0();


unsigned int * fn_82AD1870(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3,unsigned int param_4,
                    unsigned __int64 param_5)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82AD17B0();
  *puVar1 = (param_3 & 7) << 0x19 | *puVar1 & 0xf1ffffff;
  fn_82AD1270(puVar1,param_5);
  *puVar1 = (param_4 & 0xff) << 5 | *puVar1 & 0xffffe01f;
  return puVar1;
}

