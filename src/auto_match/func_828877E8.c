extern int fn_8265CA20();
extern int fn_8287FFD0();
extern unsigned int lbl_82022FE8;


void fn_828877E8(unsigned int *param_1)

{
  int iVar1;
  int *piVar2;
  
  *param_1 = &lbl_82022FE8;
  if (*(char *)(param_1 + 9) != '\0') {
    *(unsigned char *)(param_1 + 9) = 0;
    *(unsigned short *)((int)param_1 + 0x26) = 0;
  }
  if (param_1[0xe] != 0) {
    fn_8265CA20(param_1[0xe]);
    param_1[0xe] = 0;
  }
  if (param_1[0xb] != 0) {
    fn_8287FFD0(param_1[0xb],param_1);
  }
  iVar1 = param_1[2];
  if (iVar1 != 0) {
    piVar2 = (int *)param_1[3];
    *piVar2 = iVar1;
    *(int **)(iVar1 + 4) = piVar2;
  }
  param_1[2] = 0;
  param_1[3] = 0;
  return;
}

