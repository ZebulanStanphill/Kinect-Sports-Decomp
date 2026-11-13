extern int fn_826824B0();
extern int fn_826C3378();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


unsigned char * fn_826961B0(unsigned char *param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iStack_30;
  int iStack_2c;
  unsigned char bStack_28;
  
  if (param_2 != 0) {
    piVar2 = (int *)(param_2 + 0x10);
    iVar1 = (**(int (***)())(*(int *)(param_2 + 0x10) + 8))(piVar2);
    if (iVar1 == 0x17) {
      *param_1 = 8;
      piVar2 = (int *)(**(int (***)())(*piVar2 + 0x30))(&iStack_30,piVar2);
      param_1[0xc] = 0;
      iVar1 = *piVar2;
      *(int *)(param_1 + 4) = iVar1;
      if (iVar1 != 0) {
        *(unsigned int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1U & 0x8fffffff;
      }
      *(unsigned int *)(param_1 + 8) = 0;
      if (piVar2[1] != 0) {
        fn_826C3378(param_1 + 4,piVar2[1],*(unsigned char *)(piVar2 + 2) & 1);
      }
      if (((bStack_28 & 2) == 0) && (iStack_30 != 0)) {
        fn_826824B0();
      }
      iStack_30 = 0;
      if ((bStack_28 & 1) != 0) {
        return param_1;
      }
      if (iStack_2c == 0) {
        return param_1;
      }
      fn_826824B0();
      return param_1;
    }
  }
  *(int *)(param_1 + 4) = param_2;
  *param_1 = 6;
  if (param_2 != 0) {
    *(unsigned int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1U & 0x8fffffff;
  }
  return param_1;
}

