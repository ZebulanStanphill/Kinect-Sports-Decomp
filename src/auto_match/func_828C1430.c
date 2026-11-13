extern int fn_825089A0();
extern int fn_828C01A0();
extern int fn_828C10D0();
extern unsigned int lbl_8202603C;


unsigned int *
fn_828C1430(unsigned int *param_1,unsigned __int64 param_2,unsigned int *param_3,unsigned __int64 param_4,
             unsigned __int64 param_5)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned char auStack_50 [16];
  
  piVar1 = (int *)fn_825089A0();
  puVar2 = (unsigned int *)(*(int (**)())(*piVar1 + 0x24))(piVar1,0x98,2);
  if (puVar2 != (unsigned int *)0x0) {
    puVar2[1] = 1;
    *puVar2 = &lbl_8202603C;
    puVar2[2] = 1;
    if (puVar2 + 4 != (unsigned int *)0x0) {
      fn_828C01A0(auStack_50,param_5);
      fn_828C10D0(puVar2 + 4,*param_3,param_4,auStack_50);
    }
  }
  param_1[1] = puVar2;
  *param_1 = puVar2 + 4;
  return param_1;
}

