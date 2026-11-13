extern unsigned int *auStack_4c;
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82BA0C40();
extern int fn_82BAF560();
extern int fn_82BC0088();
extern int fn_82BC2958();
extern int fn_82BC3738();
extern int fn_82BC5580();
extern unsigned int lbl_820E33A0;
extern unsigned int lbl_820E33A4;
extern unsigned int lbl_820E3424;
extern unsigned int uStack_50;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

unsigned int fn_82BC0F08(int param_1,unsigned int param_2,int param_3,int param_4)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  unsigned int uStack_50;
  unsigned int auStack_4c [19];
  
  if (*(int *)(param_1 + 0x34) == 0) {
    *(int *)(param_4 + 0x5e4) = *(int *)(param_4 + 0x5e4) + -1;
    uVar3 = fn_82BAF560(*(unsigned int *)(param_3 + 0xac),0);
    *(unsigned int *)(param_1 + 0x34) = uVar3;
  }
  uVar3 = *(unsigned int *)(param_4 + 0x5ac);
  uVar2 = *(unsigned int *)(param_1 + 0x34);
  puVar4 = (unsigned int *)fn_82B7BD28(uVar3,0x3c4);
  *puVar4 = uVar3;
  if (puVar4 + 1 == (unsigned int *)0x0) {
    iVar5 = 0;
  }
  else {
    iVar5 = fn_82BC3738(puVar4 + 1,*(unsigned int *)(param_3 + 0xc));
  }
  fn_82BC2958(iVar5,0,param_1);
  *(int *)(param_1 + 0x30) = iVar5;
  if (*(int *)(param_1 + 0x20) == 5) {
    *(int *)(param_3 + 0x74) = iVar5;
  }
  if (*(int *)(param_1 + 0x20) == 6) {
    *(int *)(param_3 + 0x78) = iVar5;
    *(unsigned char *)(param_3 + 0x7e) = 1;
  }
  if (*(int *)(param_1 + 0x20) == 7) {
    *(unsigned int *)(iVar5 + 0x84) = lbl_820E33A4;
    *(int *)(param_3 + 0x70) = iVar5;
    piVar6 = (int *)fn_82BC0088(*(int *)(param_3 + 0x60),
                                  *(unsigned int *)(*(int *)(param_3 + 0x60) + 4));
    *piVar6 = iVar5;
  }
  if (*(int *)(param_1 + 0x20) == 8) {
    *(int *)(param_3 + 0x6c) = iVar5;
    piVar6 = (int *)fn_82BC0088(*(int *)(param_3 + 0x60),
                                  *(unsigned int *)(*(int *)(param_3 + 0x60) + 4));
    *piVar6 = iVar5;
  }
  fn_82BC2958(iVar5,1,uVar2);
  fn_82BA0C40(param_3,iVar5);
  fn_82BC5580(*(unsigned int *)(param_3 + 0xa8),iVar5);
  iVar7 = 0;
  uStack_50 = lbl_820E33A0;
  auStack_4c[0] = param_2;
  do {
    bVar1 = *(unsigned char *)((int)auStack_4c + iVar7);
    if (7 < bVar1) {
      fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3404,0xffffffff820e33a8,0x169);
    }
    *(char *)((int)auStack_4c + iVar7 + -4) = (char)*(unsigned int *)(&lbl_820E3424 + (unsigned int)bVar1 * 4)
    ;
    iVar7 = iVar7 + 1;
  } while (iVar7 < 4);
  *(unsigned int *)(iVar5 + 0x80) = uStack_50;
  return uVar2;
}

