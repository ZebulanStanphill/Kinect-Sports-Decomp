extern int fn_8267BE38();
extern unsigned int lbl_820053DC;
extern unsigned int lbl_82005414;


void fn_8267AAC0(unsigned int *param_1)

{
  unsigned int *puVar1;
  
  puVar1 = (unsigned int *)param_1[6];
  *param_1 = &lbl_82005414;
  if ((puVar1 != (unsigned int *)0x0) && (*(char *)(param_1 + 5) != '\0')) {
    fn_8267BE38(*puVar1);
    fn_8267BE38(puVar1);
  }
  if (param_1[3] != 0) {
    *(unsigned int *)(param_1[2] + 4) = param_1[3];
    *(unsigned int *)param_1[3] = param_1[2];
    param_1[2] = 0;
    param_1[3] = 0;
  }
  *param_1 = &lbl_820053DC;
  return;
}

