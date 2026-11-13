extern unsigned int *__imp__XexExecutableModuleHandle;
extern int fn_8265C940();
extern int fn_8265C990();
extern int fn_82A1F888();
extern int fn_82A1F950();
extern unsigned int lbl_8315D2EC;
extern unsigned int lbl_83219B8C;


unsigned __int64 fn_82A21110(int param_1,unsigned int param_2)

{
  unsigned int *puVar1;
  int iVar2;
  unsigned int uVar4;
  unsigned __int64 uVar3;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  
  uVar5 = 0;
  uVar6 = 0;
  RtlEnterCriticalSection(0xffffffff83219ba0);
  RtlEnterCriticalSection(param_1);
  if (*(int *)(param_1 + 0x38) == 0) goto LAB_82a212a0;
  uVar6 = fn_82A1F888(*(unsigned int *)(param_1 + 0x28),1);
  if ((__int64)uVar6 < 0) goto LAB_82a212a0;
  if (*(int *)(param_1 + 0x34) == 0) {
    puVar1 = (unsigned int *)fn_8265C940(0x1000,lbl_8315D2EC);
    if (puVar1 == (unsigned int *)0x0) {
      uVar5 = 8;
    }
    else {
      puVar1[2] = param_2;
      *puVar1 = 0xfadebac4;
      puVar1[1] = 3;
      if (*__imp__XexExecutableModuleHandle == 0) {
LAB_82a211f4:
        uVar4 = 0;
      }
      else {
        iVar2 = RtlImageXexHeaderField
                          (*(unsigned int *)(*__imp__XexExecutableModuleHandle + 0x58),0x40006);
        if ((__int64)-(unsigned __int64)(iVar2 == 0) < 0) goto LAB_82a211f4;
        uVar4 = *(unsigned int *)(iVar2 + 4);
      }
      puVar1[3] = uVar4;
      uVar6 = fn_82A1F950(*(unsigned int *)(param_1 + 0x28),puVar1,0);
      fn_8265C990(puVar1,lbl_8315D2EC);
      if (-1 < (int)uVar6) {
        *(unsigned int *)(param_1 + 0x34) = 1;
        goto LAB_82a2122c;
      }
    }
  }
  else {
LAB_82a2122c:
    uVar3 = 0;
    if (*(int *)(param_1 + 0x20) != 0) {
      iVar2 = 0;
      do {
        uVar3 = uVar3 + 1;
        uVar6 = fn_82A1F950(*(unsigned int *)(param_1 + 0x28),
                                  *(unsigned int *)(iVar2 + *(int *)(param_1 + 0x1c)),uVar3);
        if ((uVar6 & 0xc0000000) == 0xc0000000) break;
        iVar2 = iVar2 + 4;
      } while ((uVar3 & 0xffffffff) < (unsigned __int64)*(unsigned int *)(param_1 + 0x20));
    }
    *(unsigned int *)(param_1 + 0x38) = 0;
  }
  puVar1 = *(unsigned int **)(param_1 + 0x28);
  (**(int (***)())(lbl_83219B8C + 4))(*puVar1);
  *puVar1 = 0xffffffff;
LAB_82a212a0:
  RtlLeaveCriticalSection(param_1);
  RtlLeaveCriticalSection(0xffffffff83219ba0);
  if ((uVar6 & 0xc0000000) == 0xc0000000) {
    uVar5 = RtlNtStatusToDosError(uVar6);
  }
  return uVar5;
}

