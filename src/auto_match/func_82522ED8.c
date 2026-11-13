extern int fn_82522838();
extern int fn_82558B08();
extern int fn_8259A230();
extern int fn_8259C458();
extern int fn_8259C4C0();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int fn_82A277E0();
extern int fn_82A28E60();
extern unsigned int lbl_8326B7D0;
extern unsigned int lbl_832767CC;


void fn_82522ED8(unsigned __int64 param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar3;
  int iVar5;
  __int64 lVar4;
  unsigned int uVar6;
  int iVar7;
  int iVar8;
  
  if (lbl_832767CC == 0) {
    fn_82522838();
  }
  iVar3 = lbl_832767CC;
  if (lbl_832767CC == 0) {
    fn_82522838();
  }
  if (*(char *)(lbl_832767CC + 0xfc) != '\0') {
    fn_82A1BB18();
    iVar5 = fn_8259A230();
    if (iVar5 == 0) {
      fn_82558B08();
    }
  }
  lVar4 = fn_82A1BB18();
  fn_8259C5D8(iVar3 + 8,1,lVar4 + 1);
  uVar6 = fn_8259C4C0(param_1);
  iVar5 = fn_8259C458();
  fn_82A1BB18();
  iVar7 = fn_8259A230();
  uVar1 = *(unsigned int *)(iVar5 + 0x24);
  uVar2 = *(unsigned int *)(&lbl_8326B7D0 + iVar7 * 4);
  *(unsigned int *)(&lbl_8326B7D0 + iVar7 * 4) = uVar6;
  iVar7 = fn_82A277E0(uVar1,0,param_1);
  iVar8 = fn_82A28E60(*(unsigned int *)(iVar5 + 0x24),0,param_1);
  if (iVar8 != 0) {
    *(int *)(iVar5 + 0x30) = *(int *)(iVar5 + 0x30) + -1;
    *(int *)(iVar5 + 0x2c) = (*(int *)(iVar5 + 0x2c) - iVar7) + 4;
  }
  fn_82A1BB18();
  iVar5 = fn_8259A230();
  *(unsigned int *)(&lbl_8326B7D0 + iVar5 * 4) = uVar2;
  fn_82A1BB18();
  fn_8259C738(iVar3 + 8);
  return;
}

