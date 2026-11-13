#define true 1
extern int fn_828223C8();
extern int fn_828252D0();
extern int fn_828281C8();
extern int fn_82828720();


void fn_82830520(int param_1,int param_2)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned char uVar4;
  int iVar5;
  int iVar6;
  unsigned int aiStack_30;
  
  uVar3 = fn_828252D0(*(unsigned char *)(param_2 + 0x51));
  *(unsigned int *)(param_1 + 0x3cc) = uVar3;
  uVar3 = fn_828252D0(*(int *)(param_2 + 0x24) << 2);
  *(unsigned int *)(param_1 + 0x3d0) = uVar3;
  uVar3 = fn_828252D0(*(int *)(param_2 + 0x28) << 2);
  *(unsigned int *)(param_1 + 0x3d4) = uVar3;
  iVar5 = 0;
  *(unsigned int *)(param_2 + 0x3cc) = *(unsigned int *)(param_1 + 0x3cc);
  *(unsigned int *)(param_2 + 0x3d0) = *(unsigned int *)(param_1 + 0x3d0);
  *(unsigned int *)(param_2 + 0x3d4) = *(unsigned int *)(param_1 + 0x3d4);
  iVar6 = param_2 + 0x2f4;
  while( true ) {
    fn_828223C8(iVar6,&aiStack_30);
    if (aiStack_30 == 0) break;
    uVar4 = fn_828281C8(param_1,*(unsigned int *)(aiStack_30 + 8),0);
    *(unsigned char *)(iVar5 + *(int *)(param_1 + 0x3cc)) = uVar4;
    iVar5 = iVar5 + 1;
    iVar6 = aiStack_30;
  }
  puVar1 = (unsigned int *)**(int **)(param_2 + 0x2ec);
  for (puVar2 = (unsigned int *)*puVar1; puVar2 != puVar1; puVar2 = (unsigned int *)*puVar2) {
    (*(int **)(param_1 + 0x3d0))[puVar2[0x42] - 1] = fn_82828720(param_1,puVar2 + 2);
  }
  iVar6 = 0;
  fn_828223C8(param_2 + 0x2fc,&aiStack_30);
  if (aiStack_30 != 0) {
    iVar5 = 0;
    do {
      if (**(unsigned int **)(aiStack_30 + 0x40) == aiStack_30) {
        *(unsigned int *)(iVar5 + *(int *)(param_1 + 0x3d4)) = 0;
      }
      else {
        iVar6 = iVar6 + 1;
        *(int *)(iVar5 + *(int *)(param_1 + 0x3d4)) = *(int *)(param_1 + 0x28) + iVar6;
      }
      iVar5 = iVar5 + 4;
      fn_828223C8(aiStack_30,&aiStack_30);
    } while (aiStack_30 != 0);
  }
  return;
}

