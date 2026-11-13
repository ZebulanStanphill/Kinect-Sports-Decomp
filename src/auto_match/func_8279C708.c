extern int fn_8279C5F0();
extern unsigned int uStack_20;


void fn_8279C708(int param_1,int param_2)

{
  int iVar1;
  unsigned int uStack_20;
  
  iVar1 = fn_8279C5F0();
  if ((*(unsigned char *)(iVar1 + 0x24) & 8) == 0) {
    uStack_20 = 0;
  }
  else {
    uStack_20 = *(int *)(iVar1 + 0x18);
  }
  if (uStack_20 != param_2) {
    *(int *)(iVar1 + 0x18) = param_2;
    *(unsigned char *)(iVar1 + 0x24) = *(unsigned char *)(iVar1 + 0x24) | 8;
    iVar1 = *(int *)(param_1 + 0x14);
    *(unsigned char *)(iVar1 + 0x18) = 0;
    *(unsigned char *)(iVar1 + 0x19) = 0;
  }
  return;
}

