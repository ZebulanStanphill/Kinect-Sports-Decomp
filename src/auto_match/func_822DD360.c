extern int fn_822DB770();
extern int fn_8265CAA0();
extern int fn_82F64538();
extern unsigned int lbl_831D90A0;


void fn_822DD360(unsigned int *param_1,unsigned int *param_2,int param_3)

{
  unsigned int uVar1;
  char cVar2;
  
  if ((param_3 == 0) || (param_3 == 1)) {
    if (param_2 != (unsigned int *)0x0) {
      fn_822DB770(param_2,param_1);
      param_2[3] = param_1[3];
    }
    if (param_3 != 1) {
      return;
    }
    if (param_1[2] < 9) {
      return;
    }
    uVar1 = *param_1;
  }
  else {
    if (param_3 != 2) {
      if (param_3 == 3) {
        cVar2 = fn_82F64538(*param_2,0xffffffff831d90a0);
        *param_2 = -(unsigned int)(cVar2 != '\0') & (unsigned int)param_1;
        return;
      }
      *(unsigned char *)(param_2 + 1) = 0;
      *param_2 = (unsigned int)&lbl_831D90A0;
      *(unsigned char *)((int)param_2 + 5) = 0;
      return;
    }
    if (param_2[2] < 9) {
      return;
    }
    uVar1 = *param_2;
  }
  if (uVar1 != 0) {
    fn_8265CAA0();
  }
  return;
}

