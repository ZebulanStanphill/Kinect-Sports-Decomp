#define true 1
extern unsigned int *auStack_60;
extern int fn_82BF9620();
extern int fn_82F68CC0();
extern unsigned int lbl_8322BCF8;


unsigned __int64 fn_82BF9EC0(unsigned int *param_1,__int64 param_2,unsigned __int64 param_3)

{
  char cVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  unsigned int auStack_60 [24];
  
  RtlEnterCriticalSection(0xffffffff83231d48);
  uVar5 = *param_1;
  uVar4 = (unsigned __int64)uVar5;
  uVar3 = (unsigned int)*(unsigned short *)((int)param_1 + 6);
  uVar6 = (unsigned __int64)*(unsigned short *)(param_1 + 2);
  uVar7 = param_3 & 0xffffffff;
  while( true ) {
    if ((uVar7 == 0) || (uVar5 = (unsigned int)uVar4, *(char *)((int)param_1 + 0xf) != '\0'))
    goto LAB_82bf9f84;
    if ((uVar6 & 0xffffffff) == 0x2000) {
      uVar6 = 0;
      uVar3 = (unsigned int)(unsigned short)(&lbl_8322BCF8)[uVar3];
    }
    iVar2 = fn_82BF9620(uVar3,0,0,auStack_60);
    if (iVar2 == 0) break;
    uVar7 = 0x2000 - uVar6;
    if ((param_3 & 0xffffffff) < (0x2000 - uVar6 & 0xffffffff)) {
      uVar7 = param_3;
    }
    fn_82F68CC0(param_2,auStack_60[0] + uVar6,uVar7);
    param_3 = param_3 - uVar7;
    param_2 = uVar7 + param_2;
    uVar6 = uVar7 + uVar6;
    uVar4 = uVar4 - uVar7;
    uVar5 = (unsigned int)uVar4;
    uVar7 = param_3;
  }
  *(unsigned char *)((int)param_1 + 0xf) = 1;
LAB_82bf9f84:
  *param_1 = uVar5;
  *(short *)((int)param_1 + 6) = (short)uVar3;
  *(short *)(param_1 + 2) = (short)uVar6;
  cVar1 = *(char *)((int)param_1 + 0xf);
  RtlLeaveCriticalSection(0xffffffff83231d48);
  return -(unsigned __int64)(cVar1 != '\0') & 0x8008;
}

