void fn_8303BAD8(int *param_1,unsigned int *param_2)

{
  char cVar1;
  unsigned char bVar2;
  
  cVar1 = *(char *)*param_2;
  *param_2 = (char *)*param_2 + 1;
  *(char *)(param_1 + 10) = '\x01' - (cVar1 == '\0');
  bVar2 = *(unsigned char *)*param_2;
  *param_2 = (unsigned char *)*param_2 + 1;
  param_1[0xb] = (unsigned int)bVar2;
                    /* WARNING: Could not recover jumptable at 0x8303bb14. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(int (***)())(*param_1 + 0x20))();
  return;
}

