extern int fn_82366AE8();
extern int fn_824CD030();
extern int fn_825604A0();


void fn_8242CFE0(int param_1,unsigned __int64 param_2,unsigned char param_3,char param_4)

{
  unsigned int *puVar1;
  int *piVar2;
  unsigned int uVar3;
  int iVar4;
  
  uVar3 = *(int *)(param_1 + 0x34) - *(int *)(param_1 + 0x30) >> 3;
  if ((((param_2 & 0xffffffff) < (unsigned __int64)uVar3) && (1 < uVar3)) &&
     (1 < (unsigned int)(*(int *)(param_1 + 0x24) - *(int *)(param_1 + 0x20) >> 2))) {
    piVar2 = *(int **)((int)((param_2 & 0xffffffff) << 2) + *(int *)(param_1 + 0x20));
    puVar1 = (unsigned int *)*piVar2;
    if (piVar2[1] - (int)puVar1 >> 2 != 0) {
      if ((param_4 == '\0') || (iVar4 = fn_824CD030(*puVar1), iVar4 != 0)) {
        fn_82366AE8(*(unsigned int *)
                           ((int)((param_2 & 0xffffffff) << 3) + *(int *)(param_1 + 0x30)),param_3);
      }
      else {
        iVar4 = *(int *)((int)((param_2 & 0xffffffff) << 3) + *(int *)(param_1 + 0x30));
        if (*(int *)(iVar4 + 0x22c) != 0) {
          fn_825604A0(iVar4 + 0x20);
          *(unsigned int *)(iVar4 + 0x22c) = 0;
        }
      }
    }
  }
  return;
}

