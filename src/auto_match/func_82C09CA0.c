typedef unsigned char bool;
#define true 1
extern int fn_82C15DF0();
extern int fn_82C16418();


unsigned __int64 fn_82C09CA0(unsigned __int64 *param_1)

{
  bool bVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  
  uVar3 = *(unsigned int *)(param_1 + 0x31);
  do {
    uVar4 = (unsigned __int64)uVar3 - 3;
    if (5 < (uVar4 & 0xffffffff)) {
      return 0x11;
    }
    bVar1 = (int)uVar4 != 0;
    if (uVar4 == 1 && bVar1) {
      if (*(unsigned int *)((int)param_1 + 0x21c) < *(unsigned int *)((int)param_1 + 0x1ec)) {
        iVar2 = fn_82C16418(param_1);
        if (iVar2 != 0) goto LAB_82c09e30;
        *(short *)(param_1 + 0x44) =
             (*(short *)((int)param_1 + 0x1f2) - *(short *)((int)param_1 + 0x206)) +
             *(short *)(param_1 + 0x3e);
        if (*(char *)((int)param_1 + 0x204) == '\x01') {
          *(unsigned int *)(param_1 + 0x31) = 8;
          *(unsigned char *)((int)param_1 + 0x20d) = 1;
        }
        else {
          *(unsigned int *)(param_1 + 0x31) = 5;
          *(unsigned char *)((int)param_1 + 0x20d) = 0;
        }
      }
      else {
        *(unsigned int *)(param_1 + 0x31) = 3;
      }
    }
    else if (uVar4 == 2 && bVar1) {
      if ((unsigned short)*(unsigned char *)((int)param_1 + 500) == *(unsigned short *)((int)param_1 + 0xe4)) {
        uVar3 = *(unsigned int *)(param_1 + 9);
        iVar2 = *(int *)((int)param_1 + 0x224);
        param_1[0x32] = (unsigned __int64)*(unsigned short *)(param_1 + 0x44) + *param_1;
        param_1[0x33] = (unsigned __int64)*(unsigned short *)((int)param_1 + 0x206) - (unsigned __int64)uVar3 & 0xffffffff
        ;
LAB_82c09df4:
        *(unsigned int *)((int)param_1 + 0x1a4) = uVar3;
        *(unsigned int *)(param_1 + 0x34) = 1;
        if (iVar2 == 0) {
          *(unsigned int *)(param_1 + 0x31) = 6;
          return 0;
        }
        return 0xe;
      }
LAB_82c09e30:
      *(unsigned int *)(param_1 + 0x31) = 7;
    }
    else {
      if (uVar4 == 3 && bVar1) {
        return 0x11;
      }
      if (uVar4 == 4 && bVar1) {
        *(unsigned int *)(param_1 + 0x31) = 4;
        *(int *)((int)param_1 + 0x21c) = *(int *)((int)param_1 + 0x21c) + 1;
      }
      else {
        if (bVar1) {
          if ((unsigned short)*(unsigned char *)((int)param_1 + 500) == *(unsigned short *)((int)param_1 + 0xe4)) {
            iVar2 = *(int *)((int)param_1 + 0x224);
            uVar3 = *(unsigned int *)(param_1 + 9);
            *(unsigned short *)(param_1 + 0x41) = 0;
            param_1[0x32] = (unsigned __int64)*(unsigned short *)(param_1 + 0x44) + *param_1;
            *(unsigned char *)((int)param_1 + 0x20c) = 1;
            goto LAB_82c09df4;
          }
          goto LAB_82c09e30;
        }
        uVar4 = param_1[1];
        if (param_1[6] < uVar4) {
          return 6;
        }
        *param_1 = uVar4;
        param_1[1] = *(unsigned int *)((int)param_1 + 0x14) + uVar4;
        iVar2 = fn_82C15DF0(param_1);
        if (iVar2 == 3) {
          param_1[1] = *param_1;
          return 0x12;
        }
        if (iVar2 != 0) {
          return 4;
        }
        if ((*(int *)(param_1 + 0x36) == 0) || (*(int *)(param_1 + 0x35) == 0)) {
          *(unsigned int *)(param_1 + 0x31) = 4;
          *(unsigned int *)((int)param_1 + 0x21c) = 0;
        }
      }
    }
    uVar3 = *(unsigned int *)(param_1 + 0x31);
  } while( true );
}

