extern int fn_82681838();
extern int fn_82693A98();
extern int fn_82693B08();
extern int fn_826944C8();
extern int fn_82694928();
extern int fn_82695468();
extern int fn_826954C0();
extern int fn_826957D0();
extern int fn_826972E0();
extern unsigned int iStack_2c;
extern unsigned int iStack_30;


void fn_82710990(int param_1)

{
  int iVar1;
  unsigned int uVar2;
  char cVar6;
  unsigned __int64 uVar3;
  int iVar4;
  int *piVar5;
  __int64 lVar7;
  double dVar8;
  int iStack_30;
  int iStack_2c;
  __int64 lStack_28;
  
  cVar6 = fn_82695468(param_1,8);
  if (cVar6 == '\0') {
    fn_826954C0(param_1,0xffffffff82005ea4,0,0);
  }
  else {
    lVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 8) - 0x10;
    if ((unsigned __int64)*(unsigned int *)(param_1 + 8) == 0) {
      lVar7 = 0;
    }
    iStack_30 = *(int *)(*(int *)(*(int *)(param_1 + 0x18) + 0x78) + 8);
    *(int *)(iStack_30 + 8) = *(int *)(iStack_30 + 8) + 1;
    uVar2 = *(unsigned int *)(param_1 + 0x18);
    uVar3 = fn_826957D0(param_1,0);
    dVar8 = (double)fn_826972E0(uVar3,uVar2);
    iVar1 = (int)dVar8;
    lStack_28 = (__int64)iVar1;
    if ((-1 < iVar1) && (iVar4 = fn_82693A98(lVar7 + 0x30), iVar1 < iVar4)) {
      uVar3 = fn_82693B08(lVar7 + 0x30,iVar1);
      piVar5 = (int *)fn_82694928(&iStack_2c,&iStack_30,uVar3);
      iVar1 = *piVar5;
      *(int *)(iVar1 + 8) = *(int *)(iVar1 + 8) + 1;
      lVar7 = (unsigned __int64)*(unsigned int *)(iStack_30 + 8) - 1;
      *(int *)(iStack_30 + 8) = (int)lVar7;
      if (lVar7 == 0) {
        fn_826944C8(iStack_30);
      }
      lVar7 = (unsigned __int64)*(unsigned int *)(iStack_2c + 8) - 1;
      *(int *)(iStack_2c + 8) = (int)lVar7;
      iStack_30 = iVar1;
      if (lVar7 == 0) {
        fn_826944C8(iStack_2c);
      }
    }
    fn_82681838(*(unsigned int *)(param_1 + 4),&iStack_30);
    lVar7 = (unsigned __int64)*(unsigned int *)(iStack_30 + 8) - 1;
    *(int *)(iStack_30 + 8) = (int)lVar7;
    if (lVar7 == 0) {
      fn_826944C8(iStack_30);
    }
  }
  return;
}

