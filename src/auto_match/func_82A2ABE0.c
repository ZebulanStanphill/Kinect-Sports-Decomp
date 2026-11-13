#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern unsigned int *__imp__KeDebugMonitorData;
extern int fn_82F68CC0();
extern int fn_82F6E8D4();
extern unsigned int iStack_4c;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;
extern unsigned int uStack_40;
extern unsigned int uStack_44;
extern unsigned int uStack_48;
extern unsigned int uStack_58;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;


unsigned __int64 fn_82A2ABE0(unsigned int param_1,unsigned __int64 param_2,__int64 param_3)

{
  unsigned int *puVar1;
  unsigned int *puVar2;
  int iVar3;
  unsigned __int64 uVar4;
  int iVar6;
  unsigned __int64 uVar5;
  unsigned __int64 uVar7;
  __int64 lVar8;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  unsigned int uStack_58;
  unsigned int *puStack_50;
  int iStack_4c;
  unsigned int uStack_48;
  unsigned int uStack_44;
  unsigned int uStack_40;
  
  uVar4 = ZEXT48(&stack0x00000000);
  puVar1 = (unsigned int *)(uVar4 - 0xb0);
  *puVar1 = register0x0000000c;
  uStack_48 = (unsigned int)param_2;
  uVar7 = (param_3 + 3U & 0xffffffff) >> 2;
  uStack_58 = (unsigned int)param_3;
  lVar8 = uVar7 + 3;
  uStack_44 = (unsigned int)uVar7;
  puStack_50 = &uStack_60;
  iStack_4c = 3;
  iVar3 = (int)lVar8;
  uStack_60 = iVar3 * 0x1000000 | 0x62;
  uStack_40 = 0;
  uStack_5c = param_1;
  if (*__imp__KeDebugMonitorData == 0) {
    iVar6 = 0;
  }
  else {
    iVar6 = (**(int (***)())(*__imp__KeDebugMonitorData + 0x18))(0x5e,uVar4 - 0x50);
  }
  if (iVar6 < 1) {
    if (-1 < iVar6) {
      uVar7 = -(lVar8 * 4 & 0xfffffffcU) & 0xfffffff0;
      fn_82F6E8D4();
      lVar8 = (uVar4 - 0xb0) + uVar7;
      puVar2 = (unsigned int *)lVar8;
      *puVar2 = *puVar1;
      puVar2[0x14] = uStack_60;
      puVar2[0x15] = uStack_5c;
      puVar2[0x16] = uStack_58;
      fn_82F68CC0(lVar8 + 0x5c,param_2,param_3);
      if (*__imp__KeDebugMonitorData != 0) {
        puStack_50 = puVar2 + 0x14;
        iStack_4c = iVar3;
        uVar5 = (**(int (***)())(*__imp__KeDebugMonitorData + 0x18))(0x43,uVar4 - 0x50);
        return uVar5;
      }
    }
    uVar5 = 0;
  }
  else {
    uVar5 = 1;
  }
  return uVar5;
}

