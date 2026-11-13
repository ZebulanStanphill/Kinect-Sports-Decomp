extern int fn_8267A820();
extern int fn_8267B890();
extern unsigned int lbl_831E7E64;
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;


unsigned __int64 fn_8267A998(char *param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  unsigned int uStack0000001c;
  int aiStack_20 [4];
  
  if (*(int *)(param_1 + 4) == 0) {
    *(unsigned int *)(param_1 + 4) = param_2;
  }
  else {
    uStack0000001c = param_2;
    if (*param_1 == '\0') {
      aiStack_20[0] = *(int *)(param_1 + 4);
      puVar1 = (unsigned int *)fn_8267B890(lbl_831E7E64,0xc,0);
      if (puVar1 == (unsigned int *)0x0) {
        puVar1 = (unsigned int *)0x0;
      }
      else {
        *puVar1 = 0;
        puVar1[1] = 0;
        puVar1[2] = 0;
      }
      *(unsigned int **)(param_1 + 4) = puVar1;
      if (puVar1 == (unsigned int *)0x0) {
        return 0;
      }
      fn_8267A820(puVar1,aiStack_20);
      *param_1 = '\x01';
    }
    fn_8267A820(*(unsigned int *)(param_1 + 4),&stack0x0000001c);
  }
  return 1;
}

