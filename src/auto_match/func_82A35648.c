extern unsigned int __imp__ExThreadObjectType;
extern unsigned int *__imp__KeDebugMonitorData;
extern unsigned int *auStack_7c;
extern int fn_82A1BBE8();
extern int fn_82A1BC40();
extern int fn_82A343B0();
extern int fn_82A344D8();
extern int fn_82A35450();
extern int fn_82A371C0();
extern int fn_82A37560();
extern int fn_82A37600();
extern int fn_82A37608();
extern int fn_82A37A90();
extern int fn_82A37F58();
extern int fn_82A37F68();
extern int fn_82F68CC0();
extern int iRam8321959c;
extern unsigned int uStack_80;


unsigned __int64 fn_82A35648(int param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar6;
  __int64 lVar2;
  __int64 lVar3;
  __int64 lVar4;
  unsigned __int64 uVar5;
  int iVar7;
  unsigned int uVar8;
  unsigned __int64 uVar9;
  int *piVar10;
  unsigned int *puVar11;
  unsigned int uStack_80;
  unsigned char auStack_7c [124];
  
  piVar10 = (int *)(param_1 + 0x17c);
  if ((param_2 & 0xffffffff) == 0) {
    *(unsigned int *)(param_1 + 0x17c) = 0;
    *(unsigned int *)(param_1 + 0x180) = 0;
    *(unsigned int *)(param_1 + 0x188) = 4;
    *(unsigned int *)(param_1 + 0x184) = 0;
    *(unsigned int *)(param_1 + 0x18c) = 0;
    *(unsigned int *)(param_1 + 400) = 0x20000;
    *(unsigned int *)(param_1 + 0x198) = 0x40;
    *(unsigned int *)(param_1 + 0x194) = 0x10;
    *(unsigned int *)(param_1 + 0x19c) = 0x40000;
  }
  else {
    fn_82F68CC0(piVar10,param_2,0x24);
  }
  if (*piVar10 == 0) {
    *piVar10 = 1;
  }
  *(int *)(param_1 + 0x1ac) = (int)param_3;
  if (*__imp__KeDebugMonitorData == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (**(int (***)())(*__imp__KeDebugMonitorData + 0x18))(0x7e,0);
  }
  if ((iVar6 == 1) || (iRam8321959c != 0)) {
    *(unsigned int *)(param_1 + 0x4c) = 1;
  }
  iVar6 = param_1 + 0x1a0;
  if (*(int *)(param_1 + 0x180) == 0) {
    *(unsigned int *)(param_1 + 0x1a0) = 0;
    *(unsigned int *)(param_1 + 0x1a4) = 0;
    *(unsigned int *)(param_1 + 0x1a8) = 0;
    *(unsigned int *)(param_1 + 0x1a4) = 0x80000;
  }
  else {
    fn_82F68CC0(iVar6,*(int *)(param_1 + 0x180),0xc);
  }
  *(int *)(param_1 + 0x180) = iVar6;
  lVar2 = fn_82A37F58(param_1 + 0x50,*(unsigned int *)(param_1 + 0x198));
  uVar1 = *(unsigned int *)(param_1 + 0x19c);
  lVar3 = fn_82A37600(param_1 + 0xc4,*(unsigned int *)(param_1 + 0x194));
  lVar4 = fn_82A371C0(param_1 + 0x10c,*(unsigned int *)(param_1 + 400));
  uVar5 = fn_82A1BBE8(1,iVar6,0xffffffff80000000);
  fn_82A37F68(param_1 + 0x50,param_1,*(unsigned int *)(param_1 + 0x198),param_3,lVar2);
  iVar7 = fn_82A37A90(param_1 + 0x8c,param_1,lVar2 + param_3,(unsigned __int64)uVar1,
                            *(unsigned int *)(param_1 + 400));
  if (-1 < iVar7) {
    lVar2 = (unsigned __int64)uVar1 + lVar2 + param_3;
    iVar7 = fn_82A37608(param_1 + 0xc4,*(unsigned int *)(param_1 + 0x194),lVar2,lVar3);
    if (-1 < iVar7) {
      lVar3 = lVar3 + lVar2;
      iVar7 = fn_82A37560(param_1 + 0x10c,param_1,lVar3,lVar4,*(unsigned int *)(param_1 + 400));
      if (-1 < iVar7) {
        lVar4 = lVar4 + lVar3;
        uVar8 = fn_82A1BC40(1,iVar6,0xffffffff80000000,lVar4,uVar5);
        *(unsigned int *)(param_1 + 0x168) = uVar8;
        *(int *)(param_1 + 0x16c) = (int)lVar4;
        *(int *)(param_1 + 0x170) = (int)uVar5;
        puVar11 = (unsigned int *)(param_1 + 0x178);
        *(unsigned int *)(param_1 + 0x174) = *(unsigned int *)(param_1 + 0x1a4);
        iVar6 = ExCreateThread(puVar11,0,auStack_7c,0xffffffff82a33cc8,0xffffffff82a35640,param_1,
                               (1 << (*(unsigned int *)(param_1 + 0x188) & 0x3f)) << 0x18 | 1);
        if (-1 < iVar6) {
          iVar6 = ObReferenceObjectByHandle(*puVar11,__imp__ExThreadObjectType,&uStack_80);
          if (iVar6 < 0) {
            uVar5 = 0;
          }
          else {
            uVar1 = *(unsigned int *)(param_1 + 0x18c);
            uVar9 = (unsigned __int64)uVar1;
            if (uVar1 == 0xf) {
              uVar9 = 0x10;
            }
            else if (uVar1 == 0xfffffff1) {
              uVar9 = 0xfffffffffffffff0;
            }
            KeSetBasePriorityThread(uStack_80,uVar9);
            ObDereferenceObject(uStack_80);
            uVar5 = NtResumeThread(*puVar11,0);
            if (-1 < (int)uVar5) {
              *(unsigned int *)(param_1 + 0x1b0) = 1;
              fn_82A343B0(param_1);
              fn_82A344D8(param_1);
              return 1;
            }
          }
          fn_82A35450(param_1);
          return uVar5;
        }
      }
    }
  }
  fn_82A35450(param_1);
  return 0;
}

