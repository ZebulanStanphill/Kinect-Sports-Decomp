#define true 1
extern int fn_82A476E0();
extern int fn_82A4F4E0();
extern int fn_82A5C878();


unsigned __int64 fn_82A5C960(__int64 param_1)

{
  int iVar1;
  int iVar2;
  unsigned __int64 uVar3;
  int aiStack_30 [12];
  
  aiStack_30[0] = 0;
  do {
    uVar3 = 0;
    while( true ) {
      iVar2 = fn_82A476E0(param_1,aiStack_30);
      iVar1 = aiStack_30[0];
      if ((iVar2 == 0) || ((int)uVar3 < 0)) {
        return uVar3;
      }
      iVar2 = fn_82A5C878(param_1 + 8,aiStack_30[0]);
      if (iVar2 != 0) break;
      uVar3 = 0xffffffff8007000e;
      if (*(int *)(iVar1 + 8) != 5) {
        fn_82A4F4E0(iVar1);
      }
    }
  } while( true );
}

