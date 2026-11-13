typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_822315A0();
extern int fn_82358058();
extern int fn_82359BB0();
extern int fn_82374590();
extern int fn_82376508();
extern int fn_82382090();
extern int fn_82388020();
extern int fn_8251FA58();
extern int fn_82529320();
extern int fn_82536590();
extern int fn_8265CA20();
extern int fn_8266F6B8();
extern int fn_826728E8();
extern unsigned int lbl_821B3678;
extern unsigned int lbl_821B4200;
extern unsigned int ltcg_pool_0_0f;
extern unsigned int lbl_831D44F8;
extern unsigned int lbl_831D4508;
extern unsigned int lbl_831D450C;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8236F2B8(unsigned int *param_1)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar3;
  unsigned int uVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned int *puVar7;
  __int64 lVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  
  *param_1 = &lbl_821B3678;
  if (param_1[0x21] != 0) {
    fn_82382090();
  }
  if (param_1[0x81] == 0) {
    fn_82376508(param_1);
  }
  else {
    fn_82388020(param_1[0x180]);
  }
  if (((param_1[0x28] == 0) || (*(int *)(param_1[0x28] + 0x40) != 1)) && (param_1[0x312] != 0)) {
    fn_82536590(param_1 + 0x311,0);
    param_1[0x312] = 0;
  }
  puVar1 = (unsigned int *)param_1[0x1f9];
  if (puVar1 != (unsigned int *)0x0) {
    (**(int (***)())*puVar1)(puVar1,1);
  }
  piVar2 = (int *)param_1[0xcc];
  param_1[0x1f9] = 0;
  if (piVar2 != (int *)0x0) {
    iVar3 = *piVar2;
    if (iVar3 != 0) {
      uVar5 = fn_8266F6B8();
      fn_826728E8(iVar3,0xffffffff821abdb8,uVar5);
      iVar3 = *piVar2;
      uVar5 = fn_8266F6B8();
      fn_826728E8(iVar3,0xffffffff821abdc4,uVar5);
    }
    if (piVar2[1] != 0) {
      fn_822315A0();
    }
    fn_8265CA20(piVar2);
    param_1[0xcc] = 0;
  }
  if (param_1[0x95] != 0) {
    fn_8251FA58();
    param_1[0x95] = 0;
  }
  if (param_1[0x199] != 0) {
    fn_8265CA20();
  }
  if (param_1[0x1f7] != 0) {
    fn_8265CA20();
  }
  if ((unsigned int *)param_1[0x153] != (unsigned int *)0x0) {
    *(unsigned int *)param_1[0x153] = 0;
    fn_8265CA20();
  }
  param_1[0x153] = 0;
  fn_82374590(param_1);
  if (param_1[0xa4] != 0) {
    fn_82529320(param_1[0xa4],0);
    param_1[0xa4] = 0;
  }
  param_1[0x285] = &lbl_821B4200;
  if (lbl_831D4508 == 0) {
    lbl_831D4508 = 0;
    lbl_831D450C = 0xff;
    lbl_831D44F8 = ltcg_pool_0_0f;
  }
  if (param_1[0x181] != 0) {
    fn_822315A0();
  }
  piVar2 = (int *)param_1[0x6d];
  if (ZEXT48(piVar2) != 0) {
    lVar6 = ZEXT48(piVar2) + 8;
    do {
      puVar7 = (unsigned int *)lVar6;
      lVar8 = (unsigned __int64)*puVar7 - 1;
      if (in_RESERVE != '\0') {
        uVar4 = storeWordConditionalIndexed(lVar8,0,lVar6);
        *puVar7 = uVar4;
        in_cr0 = 2;
      }
    } while (!(bool)(in_cr0 >> 1 & 1));
    if ((int)lVar8 == 0) {
      (**(int (***)())(*piVar2 + 4))();
    }
  }
  fn_82359BB0(param_1 + 0x61);
  fn_82358058(param_1);
  return;
}

