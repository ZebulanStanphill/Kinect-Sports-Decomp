extern int fn_82230218();
extern int fn_82515798();


void fn_82515570(unsigned __int64 param_1,unsigned int *param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_82515798();
  *puVar1 = *param_2;
  fn_82230218(puVar1 + 1,param_2 + 1,0,0xffffffffffffffff);
  puVar1[8] = param_2[8];
  puVar1[9] = param_2[9];
  puVar1[10] = param_2[10];
  puVar1[0xb] = param_2[0xb];
  puVar1[0xc] = param_2[0xc];
  puVar1[0xd] = param_2[0xd];
  return;
}

