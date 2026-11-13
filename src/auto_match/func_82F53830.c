extern int memset();
extern unsigned int lbl_832625F0;


void fn_82F53830(int param_1)

{
  unsigned int *puVar1;
  int in_r0;
  __int64 lVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  
  *(unsigned __int64 *)(param_1 + 2000) = 0;
  *(unsigned char *)(param_1 + 0x7e8) = 0;
  memset(param_1,0,2000);
  param_1 = param_1 + 0x20;
  lVar2 = 0x19;
  puVar1 = (unsigned int *)((unsigned int)(&lbl_832625F0 + in_r0) & 0xfffffff0);
  uVar3 = *puVar1;
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  do {
    puVar1 = (unsigned int *)(in_r0 + param_1 & 0xfffffff0);
    *puVar1 = uVar3;
    puVar1[1] = uVar4;
    puVar1[2] = uVar5;
    puVar1[3] = uVar6;
    param_1 = param_1 + 0x50;
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

