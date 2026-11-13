typedef unsigned char bool;
#define true 1
extern unsigned int __imp__VdGlobalDevice;
extern unsigned int __imp__VdGlobalXamDevice;
extern unsigned int *auStack_60;
extern int fn_82647C20();
extern int fn_82648160();
extern int fn_8264EAC0();
extern int fn_82A1E508();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64 fn_8264ED80(unsigned int *param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  int *piVar3;
  unsigned int uVar4;
  bool bVar5;
  int iVar6;
  unsigned int uVar7;
  __int64 lVar8;
  unsigned int *puVar9;
  unsigned __int64 in_MSR;
  char in_RESERVE;
  unsigned char in_cr0;
  unsigned __int64 auStack_60 [12];
  
  fn_82A1E508(0xfffffffffffffffe,param_1[1]);
  while( true ) {
    uVar1 = *param_1;
    uVar2 = param_1[0x16];
    auStack_60[0] = 0xfffffffffffb6c20;
    uVar7 = -(unsigned int)(*(unsigned int *)(uVar1 + 0x178) == param_1[1]) & (unsigned int)auStack_60;
    if (uVar2 == param_1[0x15]) {
      lVar8 = (unsigned __int64)uVar1 + 0x2c;
      do {
        puVar9 = (unsigned int *)lVar8;
        if (in_RESERVE != '\0') {
          uVar4 = storeWordConditionalIndexed((unsigned __int64)*puVar9 + 1,0,lVar8);
          *puVar9 = uVar4;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      iVar6 = KeWaitForSingleObject(param_1 + 0xf,3,1,0,uVar7,uVar2,auStack_60,in_MSR);
      do {
        if (in_RESERVE != '\0') {
          uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar9 - 1,0,lVar8);
          *puVar9 = uVar2;
          in_cr0 = 2;
        }
      } while (!(bool)(in_cr0 >> 1 & 1));
      while (iVar6 == 0x102) {
        iVar6 = KeGetCurrentProcessType();
        piVar3 = __imp__VdGlobalDevice;
        if (iVar6 == 2) {
          piVar3 = __imp__VdGlobalXamDevice;
        }
        iVar6 = *piVar3;
        RtlEnterCriticalSection(iVar6 + 0x3b34);
        bVar5 = (*(unsigned char *)(iVar6 + 0x2abe) & 2) == 0;
        in_cr0 = bVar5 << 1;
        if (!bVar5) {
          fn_82647C20(iVar6,0);
          fn_82648160(iVar6,iVar6 + 0x3ad0,0);
        }
        RtlLeaveCriticalSection(iVar6 + 0x3b34);
        do {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar9 + 1,0,lVar8);
            *puVar9 = uVar2;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
        iVar6 = KeWaitForSingleObject(param_1 + 0xf,3,1,0,uVar7);
        do {
          if (in_RESERVE != '\0') {
            uVar2 = storeWordConditionalIndexed((unsigned __int64)*puVar9 - 1,0,lVar8);
            *puVar9 = uVar2;
            in_cr0 = 2;
          }
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
    KeResetEvent(param_1 + 0xf);
    if (*(int *)(uVar1 + 4) == 0) break;
    fn_8264EAC0(param_1);
  }
  return 0;
}

