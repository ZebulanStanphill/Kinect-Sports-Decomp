extern int fn_8267C498();
extern int fn_826824B0();
extern int fn_82696958();
extern int fn_82696D38();
extern int fn_826972E0();
extern int fn_826C6070();
extern int fn_826C64E0();
extern int fn_826C65A0();
extern int fn_826C6638();
extern int fn_826CC2A0();


void fn_826CFFF0(unsigned __int64 param_1,int *param_2,int *param_3,unsigned __int64 param_4)

{
  unsigned int uVar1;
  int *piVar3;
  unsigned __int64 uVar2;
  int iVar4;
  int iVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  double dVar8;
  int *apiStack_90 [4];
  float afStack_80 [32];
  
  fn_826CC2A0(apiStack_90,param_1);
  if ((apiStack_90[0] == (int *)0x0) ||
     (piVar3 = (int *)(**(int (***)())(*apiStack_90[0] + 0x54))(apiStack_90[0],0),
     piVar3 != apiStack_90[0])) {
    fn_826C6070(param_1,param_2,param_3,0);
  }
  if (apiStack_90[0] != (int *)0x0) {
    iVar4 = *param_3;
    if (*(int *)(iVar4 + 0xc) < 0) {
      iVar5 = *param_2;
      if (iVar4 == *(int *)(iVar5 + 0x244)) {
        uVar2 = (**(int (***)())(*apiStack_90[0] + 0x5c))(apiStack_90[0]);
        fn_82696D38(apiStack_90,param_4,uVar2,0xffffffffffffffff,0);
        fn_826C64E0(apiStack_90[0],apiStack_90);
      }
      else if (iVar4 == *(int *)(iVar5 + 0x248)) {
        uVar2 = (**(int (***)())(*apiStack_90[0] + 0x5c))(apiStack_90[0]);
        dVar8 = (double)fn_826972E0(param_4,uVar2);
        fn_826C65A0((double)(float)dVar8,apiStack_90[0]);
      }
      else if (iVar4 == *(int *)(iVar5 + 0x24c)) {
        uVar2 = (**(int (***)())(*apiStack_90[0] + 0x5c))(apiStack_90[0]);
        iVar4 = fn_82696958(param_4,uVar2);
        if (iVar4 != 0) {
          *(unsigned int *)(iVar4 + 8) = *(int *)(iVar4 + 8) + 1U & 0x8fffffff;
          iVar5 = (**(int (***)())(*(int *)(iVar4 + 0x10) + 8))(iVar4 + 0x10);
          if (iVar5 == 7) {
            uVar6 = 0x10;
            if ((int)*(unsigned int *)(iVar4 + 0x38) < 0x11) {
              uVar6 = (unsigned __int64)*(unsigned int *)(iVar4 + 0x38);
            }
            if (uVar6 != 0) {
              iVar5 = 0;
              uVar7 = uVar6;
              do {
                uVar1 = *(unsigned int *)(*(int *)(iVar4 + 0x34) + iVar5);
                uVar2 = (**(int (***)())(*apiStack_90[0] + 0x5c))(apiStack_90[0]);
                dVar8 = (double)fn_826972E0(uVar1,uVar2);
                uVar7 = uVar7 - 1;
                *(float *)((int)afStack_80 + iVar5) = (float)dVar8;
                iVar5 = iVar5 + 4;
              } while (uVar7 != 0);
            }
            fn_826C6638(apiStack_90[0],afStack_80,uVar6);
          }
          fn_826824B0(iVar4);
        }
      }
    }
    fn_8267C498(apiStack_90[0]);
  }
  return;
}

