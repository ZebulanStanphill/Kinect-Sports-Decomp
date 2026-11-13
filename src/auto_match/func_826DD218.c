typedef unsigned char bool;
extern int fn_8267BC98();
extern int fn_8267BE38();
extern int fn_8267C488();
extern int fn_8267C498();
extern int fn_8267C4F0();
extern int fn_826D6420();
extern int fn_826D6780();
extern int fn_826D96A8();
extern int fn_826DA0A0();
extern int fn_826DA118();
extern int fn_826DA190();
extern int fn_826DCDA8();
extern int fn_826EA050();
extern int fn_82758FE8();
extern int fn_8275F258();
extern unsigned int lbl_8200C6D8;
extern unsigned __int64 storeWordConditionalIndexed();


void fn_826DD218(unsigned int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  unsigned int uVar5;
  __int64 lVar6;
  char in_RESERVE;
  unsigned char in_cr0;
  
  *param_1 = &lbl_8200C6D8;
  puVar4 = (unsigned int *)0x0;
  if ((int)param_1[0x1d] < 2) {
    RtlEnterCriticalSection(param_1 + 0x2b);
    puVar4 = param_1;
  }
  uVar5 = 0;
  if (param_1[0x3d] != 0) {
    lVar6 = 0;
    do {
      fn_82758FE8(lVar6 + (unsigned __int64)(unsigned int)param_1[0x3c]);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (uVar5 < (unsigned int)param_1[0x3d]);
  }
  uVar5 = 0;
  if (param_1[0x40] != 0) {
    lVar6 = 0;
    do {
      fn_82758FE8((unsigned __int64)(unsigned int)param_1[0x3f] + lVar6);
      uVar5 = uVar5 + 1;
      lVar6 = lVar6 + 8;
    } while (uVar5 < (unsigned int)param_1[0x40]);
  }
  iVar1 = param_1[6];
  if (iVar1 != 0) {
    fn_8275F258(iVar1);
    fn_8267BE38(iVar1);
  }
  if (param_1[0x1b] != 0) {
    fn_8267BE38();
    param_1[0x1b] = 0;
  }
  if (param_1[0x45] != 0) {
    fn_8267C498();
  }
  if (puVar4 != (unsigned int *)0x0) {
    RtlLeaveCriticalSection(puVar4 + 0x2b);
  }
  fn_826DA0A0(param_1 + 0x43);
  fn_8267BE38(param_1[0x3f]);
  fn_8267BE38(param_1[0x3c]);
  fn_826EA050(param_1 + 0x35);
  fn_826DA190(param_1 + 0x34);
  fn_826DA118(param_1 + 0x33);
  fn_826D96A8(param_1 + 0x32);
  fn_826EA050(param_1 + 0x2b);
  fn_826DCDA8(param_1 + 0x22);
  if (param_1[0x21] != 0) {
    fn_8267C4F0();
  }
  fn_826D6780(param_1 + 0x13);
  lVar6 = ((unsigned __int64)(unsigned int)param_1[9] & 0xfffffffc) + 4;
  do {
    puVar2 = (unsigned int *)lVar6;
    uVar3 = (unsigned __int64)*puVar2;
    if (in_RESERVE != '\0') {
      uVar5 = storeWordConditionalIndexed(uVar3 - 1,0,lVar6);
      *puVar2 = uVar5;
      in_cr0 = 2;
    }
  } while (!(bool)(in_cr0 >> 1 & 1));
  if (uVar3 == 1) {
    fn_8267BE38();
  }
  if (param_1[8] != 0) {
    fn_8267BC98();
  }
  fn_826D6420(param_1 + 2);
  fn_8267C488(param_1);
  return;
}

