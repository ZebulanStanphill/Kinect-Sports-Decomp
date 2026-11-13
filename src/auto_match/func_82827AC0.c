#define true 1
extern int fn_828223C8();
extern int fn_8282D640();


void fn_82827AC0(int param_1)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  char cVar3;
  int iVar4;
  int aiStack_20 [2];
  
  cVar3 = '\0';
  iVar4 = param_1 + 0x2f4;
  while( true ) {
    fn_828223C8(iVar4,aiStack_20);
    if (aiStack_20[0] == 0) break;
    cVar3 = cVar3 + '\x01';
    *(char *)((unsigned int)*(unsigned char *)(aiStack_20[0] + 0x14) + *(int *)(param_1 + 0x3cc) + -1) = cVar3;
    *(char *)(aiStack_20[0] + 0x14) = cVar3;
    iVar4 = aiStack_20[0];
  }
  iVar4 = 0;
  puVar1 = (unsigned int *)**(int **)(param_1 + 0x2ec);
  for (puVar2 = (unsigned int *)*puVar1; puVar2 != puVar1; puVar2 = (unsigned int *)*puVar2) {
    iVar4 = iVar4 + 1;
    *(int *)(puVar2[0x42] * 4 + *(int *)(param_1 + 0x3d0) + -4) = iVar4;
    puVar2[0x42] = iVar4;
  }
  fn_828223C8(param_1 + 0x2fc,aiStack_20);
  iVar4 = 0;
  while( true ) {
    if (aiStack_20[0] == 0) break;
    iVar4 = iVar4 + 1;
    *(int *)(*(int *)(aiStack_20[0] + 0xc) * 4 + *(int *)(param_1 + 0x3d4) + -4) = iVar4;
    *(int *)(aiStack_20[0] + 0xc) = iVar4;
    *(unsigned char *)(aiStack_20[0] + 0x28) =
         *(unsigned char *)((unsigned int)*(unsigned char *)(aiStack_20[0] + 0x28) + *(int *)(param_1 + 0x3cc) + -1);
    *(unsigned int *)(aiStack_20[0] + 0x10) =
         *(unsigned int *)(*(int *)(aiStack_20[0] + 0x10) * 4 + *(int *)(param_1 + 0x3d0) + -4);
    fn_828223C8(aiStack_20[0],aiStack_20);
  }
  fn_8282D640(param_1,param_1 + 0x318,0xffffffff8282b920,0);
  fn_8282D640(param_1,param_1 + 0x344,0xffffffff8282ae98,0);
  fn_8282D640(param_1,param_1 + 0x36c,0xffffffff8282a008,0);
  return;
}

