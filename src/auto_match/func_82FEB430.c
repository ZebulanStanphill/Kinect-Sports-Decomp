extern int fn_82A1DDC0();
extern int fn_82FA5190();
extern int fn_8301A7B8();
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642EC;


unsigned __int64 fn_82FEB430(unsigned __int64 param_1,unsigned __int64 param_2,unsigned int *param_3)

{
  unsigned int uVar1;
  unsigned int uVar2;
  unsigned int *puVar3;
  int *piVar4;
  unsigned __int64 uVar5;
  int iVar6;
  unsigned __int64 uVar7;
  
  uVar7 = 1;
  if ((*param_3 == 0) || ((param_2 & 0xffffffff) == 0)) {
    uVar7 = 0x1f;
  }
  else {
    RtlEnterCriticalSection(0xffffffff8326434c);
    puVar3 = (unsigned int *)fn_8301A7B8(lbl_832642EC,param_1);
    if (puVar3 == (unsigned int *)0x0) {
      RtlLeaveCriticalSection(0xffffffff8326434c);
      uVar7 = 0xf;
    }
    else {
      uVar1 = puVar3[0x17];
      puVar3[0x17] = (int)((unsigned __int64)uVar1 - 1);
      uVar2 = lbl_831BC768;
      if ((__int64)((unsigned __int64)uVar1 - 1) < 1) {
        (**(int (***)())*puVar3)(puVar3,0);
        fn_82FA5190(uVar2,puVar3);
      }
      uVar5 = 0;
      iVar6 = 0;
      piVar4 = puVar3 + 5;
      do {
        if (*piVar4 == 0) break;
        iVar6 = iVar6 + 1;
        uVar5 = uVar5 + 1;
        piVar4 = piVar4 + 2;
      } while (iVar6 < 4);
      if ((unsigned __int64)*param_3 < (uVar5 & 0xffffffff)) {
        uVar7 = 3;
        uVar5 = (unsigned __int64)*param_3;
      }
      *param_3 = (unsigned int)uVar5;
      fn_82A1DDC0(param_2,puVar3 + 5,(uVar5 & 0x1fffffff) << 3);
      RtlLeaveCriticalSection(0xffffffff8326434c);
    }
  }
  return uVar7;
}

