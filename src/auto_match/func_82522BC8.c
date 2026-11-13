extern int fn_82522A48();
extern int fn_8259A230();
extern int fn_8259C458();
extern int fn_8259C4C0();
extern int fn_8259C5D8();
extern int fn_8259C738();
extern int fn_82A1BB18();
extern int fn_82A277E0();
extern int fn_82A29158();
extern unsigned int lbl_8326B7D0;


int fn_82522BC8(__int64 param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int iVar4;
  __int64 lVar3;
  unsigned int uVar5;
  int iVar6;
  int iVar7;
  unsigned short *puVar8;
  unsigned int uVar9;
  unsigned int uVar10;
  
  if ((param_2 & 0xffffffff) == 0) {
    iVar4 = fn_82522A48(param_1,param_3);
  }
  else {
    lVar3 = fn_82A1BB18();
    fn_8259C5D8(param_1 + 8,1,lVar3 + 1);
    uVar5 = fn_8259C4C0(param_2);
    iVar6 = fn_8259C458();
    fn_82A1BB18();
    iVar4 = fn_8259A230();
    uVar1 = *(unsigned int *)(iVar6 + 0x24);
    uVar2 = *(unsigned int *)(&lbl_8326B7D0 + iVar4 * 4);
    *(unsigned int *)(&lbl_8326B7D0 + iVar4 * 4) = uVar5;
    iVar4 = fn_82A277E0(uVar1,0,param_2);
    uVar10 = iVar4 - 4;
    iVar4 = fn_82A29158(*(unsigned int *)(iVar6 + 0x24),0,param_2,param_3 + 4);
    if (iVar4 != 0) {
      iVar7 = fn_82A277E0(*(unsigned int *)(iVar6 + 0x24),0,iVar4);
      puVar8 = (unsigned short *)(iVar7 + iVar4 + -4);
      *puVar8 = 0x9876;
      *(char *)(puVar8 + 1) = (char)*(unsigned int *)(iVar6 + 0x20);
      iVar7 = fn_82A277E0(*(unsigned int *)(iVar6 + 0x24),0,iVar4);
      uVar9 = iVar7 - 4;
      if (uVar10 < uVar9) {
        iVar7 = (uVar9 - uVar10) + *(int *)(iVar6 + 0x2c);
      }
      else {
        iVar7 = (uVar9 - uVar10) + *(int *)(iVar6 + 0x2c);
      }
      *(int *)(iVar6 + 0x2c) = iVar7;
    }
    fn_82A1BB18();
    iVar6 = fn_8259A230();
    *(unsigned int *)(&lbl_8326B7D0 + iVar6 * 4) = uVar2;
    fn_82A1BB18();
    fn_8259C738(param_1 + 8);
  }
  return iVar4;
}

