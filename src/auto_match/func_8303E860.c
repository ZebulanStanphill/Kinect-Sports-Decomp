extern int fn_830080D8();


char fn_8303E860(__int64 param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)fn_830080D8(param_1 + 4);
  if (puVar1 != (unsigned int *)0x0) {
    *puVar1 = param_2;
  }
  return (puVar1 == (unsigned int *)0x0) + '\x01';
}

