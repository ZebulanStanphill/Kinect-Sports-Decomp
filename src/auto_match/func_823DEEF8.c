extern unsigned char fn_82308E08();
extern unsigned char fn_8230C220();
extern int fn_8236BB40();
extern int fn_823CF8B0();
extern int fn_823D1358();
extern int fn_823D9428();
extern int fn_823D9538();

typedef struct { unsigned int first; int second; } Pair;

void fn_823DEEF8(int param_1)
{
  int iVar1;
  int *piVar2;
  unsigned char bVar3;
  int iVar4;
  int uVar6;
  int iVar7;
  unsigned int uVar8;
  Pair p60, p58, p50;

  iVar1 = *(int *)(param_1 + 8);
  if ((((*(int *)(param_1 + 0x10) == 0) || (*(int *)(iVar1 + 0x9a0) == 0)) ||
      (iVar4 = fn_823D9428(iVar1,*(int *)(iVar1 + 0x9a0)), iVar4 == 0)) ||
     (iVar4 = fn_823D9538(iVar1,*(int *)(iVar1 + 0x9a0)), iVar4 == 0)) {
    uVar6 = -1;
    if (*(int *)(iVar1 + 0x9a0) != 0) {
      uVar6 = *(int *)(*(int *)(iVar1 + 0x9a0) + 0x28);
    }
    *(int *)(iVar1 + 0xe28) = uVar6;
  }
  else if (*(unsigned char *)(iVar1 + 0xd84) == 0) {
    fn_823CF8B0(iVar1,*(int *)(*(int *)(iVar1 + 0x9a0) + 0x2c),
                  *(int *)(*(int *)(iVar1 + 0x9a0) + 0x28));
  }
  if (*(int *)(iVar1 + 0x9a0) != 0 && *(unsigned int *)(iVar1 + 0x9a0) != *(unsigned int *)(param_1 + 0xc)) {
    uVar6 = 1;
  } else {
    uVar6 = 0;
  }
  *(int *)(param_1 + 0x10) = uVar6;
  bVar3 = 0;
  if (fn_82308E08(iVar1 + 0xab8) != 0) {
    bVar3 = 1;
  }
  iVar7 = 0;
  iVar4 = 0;
  do {
    uVar8 = 0;
    piVar2 = *(int **)(**(int **)(iVar1 + 8) + iVar4);
    if (*(unsigned int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8) > 0) {
      do {
        if (!bVar3) {
          p60.first = uVar8; p60.second = iVar7;
          if (fn_8230C220(iVar1 + 0xa18,&p60) != 0) goto set;
          p58.first = uVar8; p58.second = iVar7;
          if (fn_8230C220(iVar1 + 0xa08,&p58) != 0) goto set;
          p50.first = uVar8; p50.second = iVar7;
          if (fn_8230C220(iVar1 + 0x9f8,&p50) != 0) {
set:
            bVar3 = 1;
          }
        }
        uVar8 = uVar8 + 1;
      } while (uVar8 < *(unsigned int *)(*(int *)(piVar2[4] * 4 + *piVar2) + 8));
    }
    iVar4 = iVar4 + 4;
    iVar7 = iVar7 + 1;
  } while (iVar4 < 8);
  if ((((!bVar3) && (fn_82308E08(iVar1 + 0xa88) == 0)) &&
      (fn_82308E08(iVar1 + 0xb48) == 0)) &&
     ((((fn_82308E08(iVar1 + 0xb18) == 0 &&
        (fn_82308E08(iVar1 + 0xb78) == 0)) &&
       (((fn_82308E08(iVar1 + 0xba8) == 0 &&
         ((fn_82308E08(iVar1 + 0xbd8) == 0 &&
          (fn_82308E08(iVar1 + 0xc08) == 0)))) &&
        (fn_82308E08(iVar1 + 0xc68) == 0)))) &&
      (iVar4 = fn_8236BB40(iVar1), iVar4 != 0)))) {
    fn_823D1358(iVar1);
  }
  *(int *)(param_1 + 0xc) = *(int *)(iVar1 + 0x9a0);
  return;
}
