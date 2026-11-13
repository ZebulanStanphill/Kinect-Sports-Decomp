extern unsigned int *auStack_4c;
extern int fn_82AB15D0();
extern int fn_82B7BD28();
extern int fn_82BA0310();
extern int fn_82BA0C40();
extern int fn_82BAF560();
extern int fn_82BC0088();
extern int fn_82BC2958();
extern int fn_82BC3738();
extern int fn_82BC5538();
extern unsigned int lbl_820E33A0;
extern unsigned int lbl_820E3424;
extern unsigned int uStack_50;


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int fn_82BC10C0(int param_1,unsigned int param_2,int param_3,int param_4)

{
  unsigned char bVar1;
  int iVar2;
  unsigned int uVar4;
  char cVar6;
  unsigned int *puVar5;
  unsigned __int64 uVar3;
  int iVar7;
  unsigned int uStack_50;
  unsigned int auStack_4c [19];
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    *(int *)(param_4 + 0x5e4) = *(int *)(param_4 + 0x5e4) + -1;
    uVar4 = fn_82BAF560(*(unsigned int *)(param_3 + 0xac),0);
    *(unsigned int *)(param_1 + 0x3c) = uVar4;
  }
  cVar6 = fn_82BA0310(param_3);
  if (cVar6 != '\0') {
    uVar4 = *(unsigned int *)(param_4 + 0x5ac);
    iVar2 = *(int *)(param_1 + 0x3c);
    puVar5 = (unsigned int *)fn_82B7BD28(uVar4,0x3c4);
    *puVar5 = uVar4;
    if (puVar5 + 1 == (unsigned int *)0x0) {
      uVar3 = 0;
    }
    else {
      uVar3 = fn_82BC3738(puVar5 + 1,*(unsigned int *)(param_3 + 0xc));
    }
    *(int *)(param_1 + 0x38) = (int)uVar3;
    fn_82BC2958(uVar3,0,param_1);
    fn_82BC2958(*(unsigned int *)(param_1 + 0x38),1,iVar2);
    fn_82BA0C40(param_3,*(unsigned int *)(param_1 + 0x38));
    fn_82BC5538(*(unsigned int *)(param_3 + 0xa8),*(unsigned int *)(param_1 + 0x38));
    uVar4 = *(unsigned int *)(param_1 + 0x38);
    puVar5 = (unsigned int *)
             fn_82BC0088(*(int *)(param_3 + 0x60),*(unsigned int *)(*(int *)(param_3 + 0x60) + 4));
    *puVar5 = uVar4;
    iVar7 = 0;
    uStack_50 = lbl_820E33A0;
    auStack_4c[0] = param_2;
    do {
      bVar1 = *(unsigned char *)((int)auStack_4c + iVar7);
      if (7 < bVar1) {
        fn_82AB15D0(0,0xffffffff820d2ea4,0xffffffff820e3404,0xffffffff820e33a8,0x169);
      }
      *(char *)((int)auStack_4c + iVar7 + -4) =
           (char)*(unsigned int *)(&lbl_820E3424 + (unsigned int)bVar1 * 4);
      iVar7 = iVar7 + 1;
    } while (iVar7 < 4);
    *(unsigned int *)(*(int *)(param_1 + 0x38) + 0x80) = uStack_50;
    param_1 = iVar2;
  }
  return param_1;
}

