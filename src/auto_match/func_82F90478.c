extern unsigned int iStack0000001c;


void fn_82F90478(unsigned int *param_1,int param_2,unsigned int *param_3)

{
  unsigned int *puStack00000014;
  int iStack0000001c;
  
  puStack00000014 = param_1;
  for (iStack0000001c = param_2; iStack0000001c != 0; iStack0000001c = iStack0000001c + -1) {
    *puStack00000014 = *param_3;
    puStack00000014 = puStack00000014 + 1;
  }
  return;
}

