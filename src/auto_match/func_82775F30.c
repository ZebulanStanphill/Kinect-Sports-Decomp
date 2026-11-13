typedef unsigned char bool;
#define true 1
#define false 0
extern int fn_8276D860();
extern int fn_827742D0();
extern int fn_82774430();
extern int fn_82774D50();
extern int fn_82774DB8();
extern int fn_82775EB0();
extern int fn_827B8208();
extern unsigned int stack0x0000001c;
extern unsigned int uStack0000001c;
extern unsigned int uStack_4a;
extern unsigned int uStack_4c;
extern unsigned int uStack_50;


void fn_82775F30(int param_1,unsigned __int64 param_2)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  bool bVar5;
  unsigned int uVar6;
  int iVar7;
  unsigned int uStack0000001c;
  unsigned int uStack_50;
  unsigned short uStack_4c;
  unsigned char uStack_4a;
  unsigned char bStack_49;
  
  uStack0000001c = (unsigned int)param_2;
  RtlEnterCriticalSection(param_1 + 0x9e4);
  iVar4 = fn_82774D50(param_1 + 0x8e0,&stack0x0000001c);
  if (iVar4 != 0) {
    fn_827B8208(param_1 + 0x40,param_2);
    fn_8276D860(param_2,param_1 + 8);
    fn_82774430(param_1 + 0x8e0,&stack0x0000001c);
    for (iVar4 = *(int *)(param_1 + 0x3c); iVar4 != param_1 + 0x38; iVar4 = *(int *)(iVar4 + 4)) {
      iVar1 = *(int *)(iVar4 + 8);
      bVar5 = false;
      if ((iVar1 != 0) && (uVar6 = 0, *(int *)(iVar1 + 0x14) != 0)) {
        iVar7 = 0;
        do {
          if ((unsigned __int64)*(unsigned int *)(*(int *)(iVar1 + 0x10) + iVar7) == (param_2 & 0xffffffff)) {
            bVar5 = true;
            break;
          }
          uVar6 = uVar6 + 1;
          iVar7 = iVar7 + 0x1c;
        } while (uVar6 < *(unsigned int *)(*(int *)(iVar4 + 8) + 0x14));
      }
      if (bVar5) {
        if (iVar1 != 0) {
          fn_82775EB0(iVar1,1);
        }
        *(unsigned int *)(iVar4 + 8) = 0;
      }
    }
  }
  piVar2 = *(int **)(param_1 + 0x8fc);
  uVar6 = uStack_50;
  while (piVar3 = piVar2, piVar3 != (int *)(param_1 + 0x8f8)) {
    uStack_50 = piVar3[2];
    piVar2 = (int *)piVar3[1];
    if ((unsigned __int64)uStack_50 == (param_2 & 0xffffffff)) {
      uStack_4c = *(unsigned short *)(piVar3 + 3);
      uStack_4a = *(unsigned char *)((int)piVar3 + 0xe);
      bStack_49 = *(unsigned char *)((int)piVar3 + 0xf) & 3;
      fn_82774DB8(param_1 + 0x900,&uStack_50);
      *(int *)(*piVar3 + 4) = piVar3[1];
      *(int *)piVar3[1] = *piVar3;
      fn_827742D0(piVar3,0);
      *piVar3 = *(int *)(param_1 + 0x8f0);
      *(int **)(param_1 + 0x8f0) = piVar3;
      uVar6 = uStack_50;
    }
  }
  uStack_50 = uVar6;
  RtlLeaveCriticalSection(param_1 + 0x9e4);
  return;
}

