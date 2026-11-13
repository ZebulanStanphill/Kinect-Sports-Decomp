extern int fn_8266CA00();
extern unsigned int uStack_1c;
extern unsigned int uStack_20;


unsigned int fn_8266CBF0(int param_1)

{
  unsigned int uStack_20;
  unsigned int uStack_1c;
  
  if ((**(int **)(param_1 + 0x10) == 0) && (0 < (*(int **)(param_1 + 0x10))[3])) {
    fn_8266CA00(&uStack_20);
    **(unsigned int **)(param_1 + 0x10) = uStack_20;
    *(unsigned int *)(*(int *)(param_1 + 0x10) + 4) = uStack_20;
    *(unsigned int *)(*(int *)(param_1 + 0x10) + 8) = uStack_20;
    *(unsigned int *)(*(int *)(param_1 + 0x10) + 0xc) = uStack_1c;
  }
  return *(unsigned int *)(*(int *)(param_1 + 0x10) + 0xc);
}

