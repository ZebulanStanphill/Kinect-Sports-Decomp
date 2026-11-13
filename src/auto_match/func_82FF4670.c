extern void *fn_82FA5060(unsigned, unsigned);


unsigned int * fn_82FF4670(unsigned int *param_1,unsigned param_2,int param_3)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  
  puVar2 = (unsigned int *)fn_82FA5060(*param_1,0x40);
  if (!puVar2) return 0;
  {
    uVar1 = param_1[param_3 + 1];
    puVar2[2] = param_2;
    *puVar2 = uVar1;
    param_1[param_3 + 1] = puVar2;
    param_1[0x20] = param_1[0x20] + 1;
    puVar2 = puVar2 + 4;
  }
  return puVar2;
}

