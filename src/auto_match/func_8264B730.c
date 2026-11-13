extern int fn_8265C940();
extern int fn_8265C990();


unsigned int * fn_8264B730(unsigned __int64 param_1)

{
  unsigned int *puVar1;
  int iVar2;
  
  puVar1 = (unsigned int *)fn_8265C940(0xb8,0x64800000);
  if (puVar1 != (unsigned int *)0x0) {
    iVar2 = fn_8265C940(param_1,(-(unsigned __int64)((param_1 & 0xffff) != 0) & 3) << 0x1c |
                                      0xffffffff85800000);
    if (iVar2 != 0) {
      puVar1[0x26] = iVar2;
      puVar1[0x27] = (int)param_1;
      puVar1[1] = 1;
      *puVar1 = 0x500009;
      puVar1[5] = 0xffff0000;
      return puVar1;
    }
    fn_8265C990(puVar1,0x24800000);
  }
  return (unsigned int *)0x0;
}

