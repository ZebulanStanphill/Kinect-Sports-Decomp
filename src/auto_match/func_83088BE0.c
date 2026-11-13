typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82CFBB08();
extern unsigned __int64 storeWordConditionalIndexed();


unsigned __int64
fn_83088BE0(unsigned __int64 param_1,unsigned __int64 param_2,unsigned char *param_3,unsigned int *param_4,
             unsigned __int64 param_5)

{
  unsigned char bVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  int *piVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  int iVar9;
  unsigned __int64 in_MSR;
  char in_RESERVE;
  unsigned char in_cr0;
  
  bVar1 = *param_3;
  puVar2 = *(unsigned int **)(param_3 + 0x14);
  if (bVar1 < 8) {
    if (bVar1 == 1) {
      uVar8 = *puVar2;
      *puVar2 = (unsigned int)((unsigned __int64)uVar8 - 1);
      if ((unsigned __int64)uVar8 - 1 != 0) {
        return 1;
      }
      puVar2 = *(unsigned int **)(param_3 + 0x18);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar8 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar8;
      }
    }
    else if (bVar1 == 2) {
      puVar2 = *(unsigned int **)(param_3 + 0x18);
      if (ZEXT48(puVar2) != 0) {
        do {
          if (in_RESERVE != '\0') {
            uVar8 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,ZEXT48(puVar2));
            *puVar2 = uVar8;
            in_cr0 = 2;
          }
          param_5 = in_MSR;
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
    else if (bVar1 == 3) {
      if (7 < *(int *)(param_3 + 0x38)) {
        return 1;
      }
      puVar2 = *(unsigned int **)(param_3 + 0x18);
      if (ZEXT48(puVar2) != 0) {
        do {
          if (in_RESERVE != '\0') {
            uVar8 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,ZEXT48(puVar2));
            *puVar2 = uVar8;
            in_cr0 = 2;
          }
          param_5 = in_MSR;
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
    else if (bVar1 == 4) {
      uVar8 = *puVar2;
      *puVar2 = (unsigned int)((unsigned __int64)uVar8 - 1);
      if ((unsigned __int64)uVar8 - 1 != 0) {
        return 1;
      }
      puVar2 = *(unsigned int **)(param_3 + 0x18);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar8 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar8;
      }
    }
    else if (bVar1 == 5) {
      if (puVar2 != (unsigned int *)0x0) {
        *puVar2 = *puVar2 - 1;
      }
      if (*(int *)(param_3 + 0x60) != 0) {
        if (*puVar2 != 0) {
          return 1;
        }
        if (param_4 + 4 != (unsigned int *)0x0) {
          uVar3 = *(unsigned int *)(param_3 + 0x14);
          *(unsigned char *)(param_4 + 4) = 3;
          *(unsigned char *)((int)param_4 + 0x11) = 3;
          *(unsigned char *)((int)param_4 + 0x12) = 2;
          *(unsigned short *)(param_4 + 5) = 0x50;
          *(unsigned short *)((int)param_4 + 0x16) = 0xffff;
          param_4[8] = 0;
          param_4[10] = 0;
          *(unsigned char *)((int)param_4 + 0x12) = 1;
          param_4[0x10] = 0;
          param_4[9] = uVar3;
        }
        *param_4 = 0;
        param_4[9] = *(unsigned int *)(param_3 + 0x14);
        param_4[0xb] = *(unsigned int *)(param_3 + 0x1c);
        param_4[8] = *(unsigned int *)(param_3 + 0x10);
        param_4[0xc] = *(unsigned int *)(param_3 + 0x20);
        param_4[0xd] = *(unsigned int *)(param_3 + 0x24);
        param_4[0x12] = *(unsigned int *)(param_3 + 0x38);
        param_4[0xe] = *(unsigned int *)(param_3 + 0x28);
        param_4[0xf] = *(unsigned int *)(param_3 + 0x2c);
        param_4[0x10] = *(unsigned int *)(param_3 + 0x30);
        param_4[0x13] = *(unsigned int *)(param_3 + 0x3c);
        param_4[0x11] = *(unsigned int *)(param_3 + 0x34);
        param_4[0x14] = *(unsigned int *)(param_3 + 0x40);
        return 0;
      }
      puVar2 = *(unsigned int **)(param_3 + 0x18);
      if (ZEXT48(puVar2) != 0) {
        do {
          if (in_RESERVE != '\0') {
            uVar8 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,ZEXT48(puVar2));
            *puVar2 = uVar8;
            in_cr0 = 2;
          }
          param_5 = in_MSR;
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
    else if (bVar1 == 6) {
      if (*puVar2 != 0) {
        return 1;
      }
      puVar2 = *(unsigned int **)(param_3 + 0x18);
      if (ZEXT48(puVar2) != 0) {
        do {
          if (in_RESERVE != '\0') {
            uVar8 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,ZEXT48(puVar2));
            *puVar2 = uVar8;
            in_cr0 = 2;
          }
          param_5 = in_MSR;
        } while (!(bool)(in_cr0 >> 1 & 1));
      }
    }
    else {
      if (bVar1 != 0) {
        if (param_4 + 4 != (unsigned int *)0x0) {
          iVar9 = *(int *)(param_3 + 0x48);
          uVar3 = *(unsigned int *)(param_3 + 0x5c);
          uVar4 = *(unsigned int *)(param_3 + 0x60);
          uVar5 = *(unsigned int *)(param_3 + 0x44);
          piVar6 = *(int **)(param_3 + 0x58);
          uVar7 = *(unsigned int *)(param_3 + 0x54);
          *(unsigned char *)(param_4 + 4) = 1;
          *(unsigned char *)((int)param_4 + 0x11) = 3;
          *(unsigned char *)((int)param_4 + 0x12) = 2;
          *(unsigned short *)(param_4 + 5) = 0x50;
          *(unsigned short *)((int)param_4 + 0x16) = 0xffff;
          param_4[10] = 0;
          *(unsigned char *)((int)param_4 + 0x12) = 1;
          param_4[0xb] = uVar7;
          param_4[9] = piVar6;
          param_4[0xc] = 0x40;
          param_4[8] = uVar3;
          param_4[0xd] = uVar5;
          param_4[0xe] = iVar9;
          param_4[0x11] = uVar4;
          if (iVar9 == 0) {
            iVar9 = 1;
          }
          else {
            uVar8 = iVar9 - 1;
            iVar9 = ((int)uVar8 >> 6) + (unsigned int)((int)uVar8 < 0 && (uVar8 & 0x3f) != 0) + 1;
          }
          *piVar6 = iVar9;
          param_4[0x12] = 0;
          param_4[0x13] = 0;
          param_4[0x14] = 0;
          param_4[0xf] = 0;
          param_4[0x10] = 0;
        }
        param_4[0x12] = *(unsigned int *)(param_3 + 100);
        param_4[0x13] = *(unsigned int *)(param_3 + 0x68);
        param_4[0x14] = *(unsigned int *)(param_3 + 0x6c);
        param_4[0xf] = *(unsigned int *)(param_3 + 0x4c);
        param_4[0x10] = *(unsigned int *)(param_3 + 0x50);
        *param_4 = 1;
        *(unsigned char *)((int)param_4 + 0x12) = 1;
        return 0;
      }
      uVar8 = *puVar2;
      *puVar2 = (unsigned int)((unsigned __int64)uVar8 - 1);
      if ((unsigned __int64)uVar8 - 1 != 0) {
        return 1;
      }
      puVar2 = *(unsigned int **)(param_3 + 0x18);
      if ((ZEXT48(puVar2) != 0) && (param_5 = in_MSR, in_RESERVE != '\0')) {
        uVar8 = storeWordConditionalIndexed((unsigned __int64)*puVar2 + 1,0,ZEXT48(puVar2));
        *puVar2 = uVar8;
      }
    }
    if (*(int *)(param_3 + 0x10) != 0) {
      fn_82CFBB08(*(int *)(param_3 + 0x10),1,param_3,param_4,param_5);
    }
  }
  return 1;
}

