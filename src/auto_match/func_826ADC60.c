extern int fn_8267B890();
extern int fn_826AA378();


void fn_826ADC60(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  unsigned int *allocated;

  
  if (param_1[1] == 0) {
    allocated = (unsigned int *)fn_8267B890(*param_1,0xc,0);
    if (allocated != (unsigned int *)0x0) {
      puVar1 = allocated;
      *allocated = 0;
      allocated[1] = 0;
      allocated[2] = 0;
    } else { puVar1 = 0; }
    param_1[1] = puVar1;
  }
  fn_826AA378(param_1[1],param_2);
  return;
}

