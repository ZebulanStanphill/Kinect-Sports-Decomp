extern unsigned int DAT_83215060;
extern unsigned int DAT_83217128;

/* WARNING: Inlined function: __savegprlr_26 */

void fn_829D0A20(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  RtlEnterCriticalSection(0xffffffff8315c428);
  iVar2 = (&DAT_83217128)[param_1];
  if (iVar2 != 0) {
    iVar1 = *(int *)(iVar2 + 0x20);
    if (iVar1 != 0) {
      *(unsigned int *)(iVar1 + 0x6c) = 0;
      fn_829CB790(iVar1 + 0x30);
      iVar1 = *(int *)(iVar2 + 0x24);
      **(int **)(iVar2 + 0x20) = iVar1;
      *(int *)(*(int *)(iVar2 + 0x20) + 4) = iVar2 + 0x24;
      *(unsigned int *)(iVar1 + 4) = *(unsigned int *)(iVar2 + 0x20);
      *(unsigned int *)(iVar2 + 0x24) = *(unsigned int *)(iVar2 + 0x20);
      *(unsigned int *)(iVar2 + 0x20) = 0;
    }
    if ((*(int *)(iVar2 + 0x38) == 0) && (param_3 == 0)) {
      *(unsigned int *)(iVar2 + 0x78) = DAT_83215060;
      param_2[0x1b] = 3;
      *(int **)(iVar2 + 0x20) = param_2;
    }
    else {
      param_2[0x1b] = 0;
      fn_829CB790(param_2 + 0xc);
      iVar1 = *(int *)(iVar2 + 0x24);
      param_2[1] = iVar2 + 0x24;
      *param_2 = iVar1;
      *(int **)(iVar1 + 4) = param_2;
      *(int **)(iVar2 + 0x24) = param_2;
      if ((param_3 == 0) || ((*(unsigned int *)(iVar2 + 0x14) & 0x10000) != 0)) goto LAB_829d0a0c;
    }
    KeSetEvent(iVar2,1,0);
    if (*(int *)(iVar2 + 0x10) != 0) {
      KeSetEvent(*(int *)(iVar2 + 0x10),1,0);
    }
  }
LAB_829d0a0c:
  RtlLeaveCriticalSection(0xffffffff8315c428);
  return;
}
