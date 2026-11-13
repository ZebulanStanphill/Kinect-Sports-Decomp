extern int fn_8267B890();
extern int fn_82680978();
extern int fn_8273D528();
void *memcpy(void *, const void *, unsigned int);
extern unsigned int lbl_831E7E64;


void fn_82681648(int param_1,unsigned int *param_2)

{
  unsigned int iVar1;
  
  if (param_2[4] != 0) {
    iVar1 = fn_8267B890(lbl_831E7E64,param_2[5],0);
    *(int *)(param_1 + 0x18) = iVar1;
    if (iVar1 != 0) {
      *(unsigned int *)(param_1 + 0x1c) = param_2[5];
      *(unsigned int *)(param_1 + 8) = *param_2;
      *(unsigned int *)(param_1 + 0xc) = param_2[1];
      *(unsigned int *)(param_1 + 0x10) = param_2[2];
      *(unsigned int *)(param_1 + 0x14) = param_2[3];
      *(unsigned int *)(param_1 + 0x20) = param_2[6];
      fn_82680978(param_1 + 0x24,param_2 + 7);
      memcpy(*(void **)(param_1 + 0x18),(void *)param_2[4],param_2[5]);
      return;
    }
  }
  *(unsigned int *)(param_1 + 8) = 0;
  *(unsigned int *)(param_1 + 0x14) = 0;
  *(unsigned int *)(param_1 + 0x10) = 0;
  *(unsigned int *)(param_1 + 0xc) = 0;
  *(unsigned int *)(param_1 + 0x18) = 0;
  *(unsigned int *)(param_1 + 0x1c) = 0;
  *(unsigned int *)(param_1 + 0x20) = 1;
  fn_8273D528(param_1 + 0x24,0);
  return;
}

