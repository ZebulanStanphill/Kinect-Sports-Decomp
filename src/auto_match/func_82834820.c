extern unsigned int *auStack_20;
extern int fn_82828828();


unsigned int * fn_82834820(unsigned int *param_1,int param_2,int param_3,char param_4)

{
  unsigned int uVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned __int64 uVar4;
  unsigned char auStack_20 [16];
  
  puVar3 = *(unsigned int **)(param_2 + 4);
  uVar4 = 1;
  if (*(char *)((int)puVar3[1] + 0x11) == '\0') {
    uVar1 = *(unsigned int *)(*(int *)(param_3 + 0xc) + 0x20);
    puVar2 = (unsigned int *)puVar3[1];
    do {
      puVar3 = puVar2;
      if (param_4 == '\0') {
        uVar4 = -(unsigned __int64)(uVar1 < *(unsigned int *)(puVar3[3] + 0x20)) & 1;
      }
      else {
        uVar4 = -((unsigned __int64)(*(unsigned int *)(puVar3[3] + 0x20) < uVar1) - 1);
      }
      if ((uVar4 & 0xff) == 0) {
        puVar2 = (unsigned int *)puVar3[2];
      }
      else {
        puVar2 = (unsigned int *)*puVar3;
      }
    } while (*(char *)((int)puVar2 + 0x11) == '\0');
  }
  puVar3 = (unsigned int *)fn_82828828(auStack_20,param_2,uVar4,puVar3,param_3);
  *(unsigned char *)(param_1 + 1) = 1;
  *param_1 = *puVar3;
  return param_1;
}

