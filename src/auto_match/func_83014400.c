extern int _blkmov();
extern int fn_82FF4A38();
extern int fn_83014F10();
extern unsigned int lbl_83264304;


unsigned int fn_83014400(int param_1,int *param_2,int *param_3)

{
  int *piVar1;
  unsigned int uVar3;
  unsigned __int64 uVar2;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    uVar3 = 0;
  }
  else {
    *(unsigned int *)(param_1 + 0x6c) = 0;
    RtlEnterCriticalSection(param_1 + 0x1c);
    if (*(int *)(param_1 + 0x38) != 0) {
      puVar5 = (unsigned int *)(param_1 + 0x10);
      if (*(int *)(param_1 + 0x14) != *(int *)(param_1 + 0x10)) {
        do {
          piVar1 = (int *)*puVar5;
          *param_3 = piVar1[2];
          if (*piVar1 != 0) {
            *(int *)(param_1 + 0x6c) = *piVar1;
            *(int *)(param_1 + 0x70) = piVar1[1];
            *(int *)(param_1 + 0x74) = piVar1[2];
            *param_2 = piVar1[1];
            fn_83014F10(puVar5,0);
            break;
          }
          uVar2 = (unsigned __int64)*puVar5;
          uVar4 = (unsigned __int64)*(unsigned int *)(param_1 + 0x14) - 0xc;
          if (uVar2 < (uVar4 & 0xffffffff)) {
            _blkmov(uVar2,uVar2 + 0xc,
                         (((uVar4 - uVar2) - 1 & 0xffffffff) / 0xc + 1) * 0xc & 0xfffffffc);
          }
          *(int *)(param_1 + 0x14) = *(int *)(param_1 + 0x14) + -0xc;
          fn_82FF4A38(lbl_83264304,*(unsigned int *)(param_1 + 0x50),0,*param_3);
        } while (*(unsigned int *)(param_1 + 0x14) != *puVar5);
      }
      if (*(int *)(param_1 + 0x6c) == 0) {
        *(unsigned int *)(param_1 + 0x38) = 2;
      }
    }
    uVar3 = *(unsigned int *)(param_1 + 0x6c);
    RtlLeaveCriticalSection(param_1 + 0x1c);
  }
  return uVar3;
}

