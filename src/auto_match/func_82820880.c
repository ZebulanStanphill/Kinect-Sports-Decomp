extern int fn_828202C8();
extern int fn_82820368();
extern int fn_828204F8();
extern int fn_82820680();
extern int fn_82820718();


int fn_82820880(int param_1)

{
  int iVar1;
  int iVar3;
  int iVar2;
  int uVar4;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  int lVar8;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar6 = 0;
  iVar7 = 0;
  lVar8 = 2;
  **(unsigned int **)(iVar1 + 0x2c) = *(unsigned int *)(param_1 + 0x1c);
  for (lVar8=0;lVar8<2;lVar8++) {
    *(int *)(*(int *)(iVar1+0x2c)+4+lVar8*4) = *(int *)(*(int *)(param_1+0x1c)+0x5c+lVar8*0x14);
  }
  uVar5 = 0;
  if (*(char *)(*(int *)(param_1 + 0x1c) + 0x51) != '\0') {
    iVar7 = 0;
    iVar6 = 0xc;
    do {
      uVar5 = uVar5 + 1;
      iVar2 = *(int *)(param_1 + 0x30) + iVar7;
      iVar7 = iVar7 + 0x21;
      *(unsigned int *)(iVar6 + *(int *)(iVar1 + 0x2c)) = *(unsigned int *)(iVar2 + 0xd);
      iVar6 = iVar6 + 4;
    } while (uVar5 < *(unsigned char *)(*(int *)(param_1 + 0x1c) + 0x51));
  }
  fn_82820680(param_1);
  fn_82820718(param_1);
  fn_828202C8(param_1);
  uVar4 = fn_82820368(param_1);
  if ((int)uVar4 == 0) {
    fn_828204F8(param_1);
    uVar4 = 0;
  }
  return uVar4;
}

