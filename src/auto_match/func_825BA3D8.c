extern int fn_82522838();
extern int fn_82522BC8();
extern int fn_82522D98();
extern int XMemSet();
extern int fn_82F63CA0();
extern unsigned int lbl_821C8578;
extern unsigned int lbl_832767CC;


void fn_825BA3D8(int *param_1,unsigned int param_2,unsigned short param_3)

{
  unsigned int *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned int *puVar6;
  int iVar7;
  
  if (*param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    fn_82522D98(8);
  }
  puVar1 = (unsigned int *)*param_1;
  uVar5 = 0;
  puVar6 = puVar1 + 2;
  if (*puVar1 != 0) {
    do {
      if (param_3 < *(unsigned short *)((int)puVar6 + 6)) break;
      uVar5 = uVar5 + 1;
      puVar6 = (unsigned int *)(*puVar6 + (int)puVar6);
    } while (uVar5 < *puVar1);
  }
  uVar5 = puVar1[1];
  iVar3 = (param_2 & 0xffff) * 4;
  iVar2 = *(int *)(&lbl_821C8578 + iVar3);
  if (lbl_832767CC == 0) {
    fn_82522838();
  }
  iVar4 = fn_82522BC8(lbl_832767CC,puVar1,uVar5 + iVar2);
  iVar7 = ((int)puVar6 - (int)puVar1) + iVar4;
  if (*(int *)(iVar4 + 4) != (int)puVar6 - (int)puVar1) {
    fn_82F63CA0(iVar2 + iVar7,iVar7);
  }
                    /* WARNING: Subroutine does not return */
  XMemSet(iVar7,0,*(unsigned int *)(&lbl_821C8578 + iVar3));
}

