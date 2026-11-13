extern int fn_8265C9E0();
extern int fn_82897ED8();
extern int memcpy();
extern unsigned int lbl_82197140;


unsigned int * fn_82899030(unsigned int *param_1,__int64 param_2,__int64 param_3)

{
  unsigned int uVar1;
  int iVar2;
  unsigned __int64 uVar3;
  unsigned int *puVar4;
  
  *param_1 = &lbl_82197140;
  puVar4 = param_1 + 2;
  iVar2 = (int)param_2;
  param_1[1] = *(unsigned int *)(iVar2 + 4);
  param_1[2] = 0;
  uVar1 = *(unsigned int *)(iVar2 + 0x18);
  param_1[3] = uVar1;
  if (param_1[1] == 7) {
    if (4 < uVar1) {
      uVar3 = fn_8265C9E0();
      *puVar4 = (int)uVar3;
      if (*(unsigned int *)(iVar2 + 0x18) < 5) {
        memcpy(uVar3,(param_3 + 2U & 0x3fffffff) * 4 + param_2,param_1[3]);
        return param_1;
      }
      memcpy(uVar3,*(unsigned int *)((int)((param_3 + 2U & 0xffffffff) << 2) + iVar2),param_1[3]
                  );
      return param_1;
    }
  }
  else if (*(int *)(iVar2 + 4) == 8) {
    fn_82897ED8(puVar4,(param_3 + 2U & 0x3fffffff) * 4 + param_2);
    return param_1;
  }
  *puVar4 = *(unsigned int *)((int)((param_3 + 2U & 0xffffffff) << 2) + iVar2);
  return param_1;
}

