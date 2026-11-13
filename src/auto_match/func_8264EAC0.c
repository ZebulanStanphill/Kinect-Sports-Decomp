typedef unsigned char bool;
#define true 1
#define false 0
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8264E490();
extern int fn_8264E8F0();
extern unsigned __int64 storeWordConditionalIndexed();


void fn_8264EAC0(unsigned int *param_1)

{
  bool bVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int uVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  char in_RESERVE;
  unsigned char in_cr0;
  
  puVar2 = (unsigned int *)*param_1;
  uVar8 = ZEXT48(puVar2);
  do {
    if (puVar2[0xf] == 0) break;
    bVar1 = (0x1000000 << (param_1[1] & 0x3f) & puVar2[0xe]) == 0;
    in_cr0 = bVar1 << 1;
  } while (bVar1);
LAB_8264eb08:
  do {
    uVar6 = *puVar2;
    if (uVar6 == 0) {
      if (in_RESERVE != '\0') {
        uVar7 = storeWordConditionalIndexed(1,0,uVar8);
        *puVar2 = uVar7;
        in_cr0 = 2;
      }
      if (!(bool)(in_cr0 >> 1 & 1)) goto LAB_8264eb08;
    }
    else if (in_RESERVE != '\0') {
      uVar7 = storeWordConditionalIndexed((unsigned __int64)uVar6,0,uVar8);
      *puVar2 = uVar7;
      in_cr0 = 2;
    }
  } while (uVar6 != 0);
  sync(1);
  if (param_1[0x16] == param_1[0x15]) {
    sync(1);
    *puVar2 = 0;
  }
  else {
    puVar2[0xf] = puVar2[0xf] + 1;
    uVar6 = param_1[(param_1[0x16] & 3) + 0x17];
    param_1[0x16] = param_1[0x16] + 1;
    if ((int)puVar2[0xf] < 2) {
      uVar7 = param_1[1];
      puVar5 = (unsigned int *)puVar2[0x12];
      puVar2[0x1a] = 0;
      puVar2[0xe] = 0x1000000 << (uVar7 & 0x3f);
      if (puVar5 == (unsigned int *)0x0) {
        puVar5 = (unsigned int *)(uVar6 + 4);
        puVar2[0x13] = uVar6;
      }
      else {
        puVar2[0x12] = 0;
      }
    }
    else {
      puVar5 = (unsigned int *)puVar2[9];
    }
LAB_8264ebd4:
    do {
      while (uVar6 = puVar2[6], uVar6 < puVar2[7]) {
        uVar3 = puVar2[5];
        puVar5 = (unsigned int *)puVar2[8];
        puVar2[6] = uVar6 + 1;
        sync(1);
LAB_8264ec4c:
        *puVar2 = 0;
        (*(int (**)())puVar2[4])(param_1,uVar3,puVar5,uVar6);
        puVar5 = (unsigned int *)puVar2[9];
      }
      uVar6 = *puVar5;
      if ((uVar6 & 0x80000000) == 0) {
        puVar5 = puVar5 + 1;
        uVar7 = uVar6 >> 0x10 & 0x7fff;
        if ((puVar2[0x5a] & puVar2[0x59]) != 0) {
          uVar3 = puVar2[5];
          puVar2[8] = (unsigned int)puVar5;
          puVar2[6] = 1;
          puVar2[7] = uVar6 & 0xffff;
          puVar2[9] = uVar7 + (int)puVar5;
          sync(1);
          uVar6 = 0;
          goto LAB_8264ec4c;
        }
        puVar5 = (unsigned int *)(uVar7 + (int)puVar5);
        goto LAB_8264ebd4;
      }
      if (uVar6 == 0x8d000000) {
        puVar4 = puVar5 + 1;
        puVar5 = puVar5 + 2;
        puVar2[0x5a] = *puVar4;
        goto LAB_8264ebd4;
      }
      if (uVar6 == 0x8c000000) {
        puVar2[4] = puVar5[1];
        puVar4 = puVar5 + 2;
        puVar5 = puVar5 + 3;
        puVar2[5] = *puVar4;
        goto LAB_8264ebd4;
      }
      if ((uVar6 & 0xc0000000) != 0xc0000000) {
        uVar6 = puVar2[0x19];
        puVar2[0x18] = 1;
        puVar2[0x19] = uVar6 + 1;
        if (uVar6 + 1 == puVar2[0xf]) {
          puVar5 = (unsigned int *)fn_8264E490(puVar5,uVar8);
          puVar2[0x18] = 0;
        }
        else {
          puVar2[9] = (unsigned int)puVar5;
          sync(1);
          *puVar2 = 0;
          do {
            bVar1 = false;
          } while (puVar2[0x18] != 0);
LAB_8264ed1c:
          do {
            uVar6 = *puVar2;
            if (uVar6 == 0) {
              if (in_RESERVE != '\0') {
                uVar7 = storeWordConditionalIndexed(1,0,uVar8);
                *puVar2 = uVar7;
                bVar1 = true;
              }
              if (!bVar1) goto LAB_8264ed1c;
            }
            else if (in_RESERVE != '\0') {
              uVar7 = storeWordConditionalIndexed((unsigned __int64)uVar6,0,uVar8);
              *puVar2 = uVar7;
              bVar1 = true;
            }
          } while (uVar6 != 0);
          sync(1);
          puVar5 = (unsigned int *)puVar2[9];
        }
        puVar2[0x19] = puVar2[0x19] - 1;
        goto LAB_8264ebd4;
      }
      if (uVar6 != 0xc0000000) {
        puVar5 = (unsigned int *)(uVar6 + 4);
        goto LAB_8264ebd4;
      }
      puVar5 = (unsigned int *)fn_8264E8F0(uVar8,param_1,puVar5);
    } while (puVar5 != (unsigned int *)0x0);
  }
  return;
}

