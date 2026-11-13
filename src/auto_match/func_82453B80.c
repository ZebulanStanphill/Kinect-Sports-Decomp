#define true 1
extern unsigned int *auStack_10;
extern int fn_82454710();


unsigned __int64 fn_82453B80(int param_1,int param_2,int param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  unsigned int uVar6;
  unsigned char auStack_10 [1];
  
  iVar3 = *(int *)(*(int *)(param_1 + 0x44) + 0x6c);
  while( true ) {
    if (iVar3 == *(int *)(*(int *)(param_1 + 0x44) + 0x70)) {
      return 0;
    }
    if (*(int *)(iVar3 + 8) == param_2) break;
    iVar3 = iVar3 + 0x30;
  }
  *(unsigned int *)(param_3 + 4) = *(unsigned int *)(iVar3 + 4);
  *(unsigned int *)(param_3 + 8) = *(unsigned int *)(iVar3 + 8);
  *(unsigned int *)(param_3 + 0xc) = *(unsigned int *)(iVar3 + 0xc);
  puVar1 = (unsigned int *)(iVar3 + 0x10U & 0xfffffff0);
  uVar4 = puVar1[1];
  uVar5 = puVar1[2];
  uVar6 = puVar1[3];
  puVar2 = (unsigned int *)(param_3 + 0x10U & 0xfffffff0);
  *puVar2 = *puVar1;
  puVar2[1] = uVar4;
  puVar2[2] = uVar5;
  puVar2[3] = uVar6;
  *(unsigned int *)(param_3 + 0x20) = *(unsigned int *)(iVar3 + 0x20);
  *(unsigned char *)(param_3 + 0x24) = *(unsigned char *)(iVar3 + 0x24);
  fn_82454710(auStack_10,(unsigned __int64)*(unsigned int *)(param_1 + 0x44) + 0x6c);
  return 1;
}

