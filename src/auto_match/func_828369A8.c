extern unsigned int *auStack_130;
extern int fn_828358A8();
extern int fn_828358F8();
extern int fn_82835EE8();
extern int fn_82836098();
extern int fn_828365F8();
extern int fn_82836840();
extern int fn_82F64020();
extern int fn_82F664B0();


unsigned __int64 fn_828369A8(int param_1,__int64 param_2,unsigned __int64 param_3)

{
  char cVar1;
  char cVar2;
  int iVar3;
  unsigned int uVar4;
  char *pcVar8;
  unsigned __int64 uVar5;
  __int64 lVar6;
  unsigned __int64 uVar7;
  char *pcVar9;
  unsigned char auStack_130 [304];
  
  iVar3 = *(int *)(param_1 + 8);
  if (iVar3 == 0) {
    return 0;
  }
  if (*(int *)(iVar3 + 0xc) != 0) {
    return 0;
  }
  uVar4 = *(unsigned int *)(*(int *)(iVar3 + 0x10) + 8);
  if (((uVar4 & 2) == 0) && ((uVar4 & 4) == 0)) {
    if ((uVar4 & 8) == 0) {
      if ((uVar4 & 0x40) == 0) {
        return 0;
      }
      lVar6 = fn_828358F8(iVar3,param_1);
      uVar5 = fn_828358A8(param_1);
      fn_82F664B0(param_3,0x100,uVar5);
      fn_828365F8(*(unsigned int *)(param_1 + 8),lVar6 + param_2,auStack_130);
      uVar5 = 0xffffffff8201f488;
    }
    else {
      pcVar8 = (char *)fn_828358A8();
      pcVar9 = "char[]";
      do {
        cVar1 = *pcVar8;
        cVar2 = *pcVar9;
        if (cVar1 == '\0') break;
        pcVar8 = pcVar8 + 1;
        pcVar9 = pcVar9 + 1;
      } while (cVar1 == cVar2);
      if (cVar1 != cVar2) {
        return 0;
      }
      uVar5 = fn_828358A8(param_1);
      fn_82F664B0(param_3,0x100,uVar5);
      fn_82836840(*(unsigned int *)(param_1 + 8),param_2,auStack_130);
      uVar5 = 0xffffffff8201f480;
    }
    fn_82F64020(param_3,0x100,uVar5,param_3,auStack_130);
  }
  else {
    lVar6 = fn_828358F8(iVar3,param_1);
    uVar5 = fn_828358A8(*(unsigned int *)(param_1 + 8));
    if ((uVar4 & 2) == 0) {
      uVar7 = fn_828358A8(param_1);
      fn_82F664B0(param_3,0x100,uVar7);
      fn_82835EE8(*(unsigned int *)(param_1 + 8),lVar6 + param_2,auStack_130);
    }
    else {
      uVar7 = fn_828358A8(param_1);
      fn_82F664B0(param_3,0x100,uVar7);
      fn_82836098(*(unsigned int *)(param_1 + 8),lVar6 + param_2,auStack_130);
    }
    fn_82F64020(param_3,0x100,0xffffffff8201f46c,param_3,uVar5,auStack_130);
  }
  return 1;
}

