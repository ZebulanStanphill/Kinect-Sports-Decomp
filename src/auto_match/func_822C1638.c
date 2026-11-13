extern int fn_822315A0();
extern int fn_8251F720();
extern int fn_8265C9E0();
extern unsigned int lbl_821ACDEC;


unsigned int * fn_822C1638(unsigned int *param_1,unsigned __int64 param_2)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  
  uVar1 = fn_8251F720(param_2,0);
  *param_1 = 0;
  param_1[1] = 0;
  puVar2 = (unsigned int *)fn_8265C9E0(0x14);
  puVar3 = (unsigned int *)0x0;
  if (puVar2 != (unsigned int *)0x0) {
    puVar2[3] = uVar1;
    puVar2[1] = 1;
    *puVar2 = &lbl_821ACDEC;
    puVar2[2] = 1;
    puVar3 = puVar2;
  }
  if (param_1[1] != 0) {
    fn_822315A0(param_1[1]);
  }
  param_1[1] = puVar3;
  *param_1 = uVar1;
  return param_1;
}

