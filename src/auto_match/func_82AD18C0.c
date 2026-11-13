extern int fn_82AD17B0();


void fn_82AD18C0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int param_3)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82AD17B0();
  *puVar1 = (param_3 & 0x1b) << 5 | 0x2001c80 | *puVar1 & 0xf3fffc9f;
  return;
}

