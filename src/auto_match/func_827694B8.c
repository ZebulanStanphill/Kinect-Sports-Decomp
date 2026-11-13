#define CONCAT11(h,l) ((unsigned short)((((unsigned char)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT21(h,l) ((unsigned int)((((unsigned short)(h)) << 8) | ((unsigned char)(l))))
#define CONCAT31(h,l) ((unsigned int)((((unsigned int)(h)) << 8) | ((unsigned char)(l))))
extern int fn_827663E0();
extern int fn_82766690();


int fn_827694B8(int param_1,int param_2)

{
  int iVar1;
  unsigned int uVar2;
  unsigned char *puVar3;
  unsigned int uVar4;
  unsigned int *puVar5;
  int iVar6;
  
  puVar5 = (unsigned int *)(param_1 + 8);
  if ((unsigned int)(*(int **)(param_1 + 8))[1] < param_2 + 0xfU) {
    iVar1 = 0;
  }
  else {
    iVar1 = 0;
    if (*(char *)(**(int **)(param_1 + 8) + param_2) != '\0') {
      do {
        iVar1 = iVar1 + 1;
      } while (*(char *)(*(int *)*puVar5 + iVar1 + param_2) != '\0');
    }
    iVar1 = iVar1 + 1;
    fn_827663E0((int *)(param_1 + 0x1c),iVar1,0);
    *(int *)(param_1 + 0x20) = iVar1;
    uVar4 = 0;
    if (iVar1 != 0) {
      do {
        uVar2 = uVar4 + 1;
        *(unsigned char *)(*(int *)(param_1 + 0x1c) + uVar4) =
             *(unsigned char *)(*(int *)*puVar5 + uVar4 + param_2);
        uVar4 = uVar2;
      } while (uVar2 < *(unsigned int *)(param_1 + 0x20));
    }
    iVar1 = *(int *)(param_1 + 0x20) + param_2;
    *(unsigned int *)(param_1 + 0x28) =
         (unsigned int)CONCAT11(((unsigned char *)(*(int *)*puVar5 + iVar1))[1],
                        *(unsigned char *)(*(int *)*puVar5 + iVar1));
    puVar3 = (unsigned char *)(*(int *)*puVar5 + iVar1 + 2);
    *(unsigned int *)(param_1 + 0x2c) = (unsigned int)CONCAT11(puVar3[1],*puVar3);
    puVar3 = (unsigned char *)(*(int *)*puVar5 + iVar1 + 4);
    *(float *)(param_1 + 0x30) = (float)(__int64)CONCAT11(puVar3[1],*puVar3);
    puVar3 = (unsigned char *)(*(int *)*puVar5 + iVar1 + 6);
    *(float *)(param_1 + 0x34) = (float)(__int64)CONCAT11(puVar3[1],*puVar3);
    puVar3 = (unsigned char *)(*(int *)*puVar5 + iVar1 + 8);
    *(float *)(param_1 + 0x38) = (float)(__int64)CONCAT11(puVar3[1],*puVar3);
    puVar3 = (unsigned char *)(*(int *)*puVar5 + iVar1 + 10);
    *(unsigned int *)(param_1 + 0xc) = CONCAT31(CONCAT21(CONCAT11(puVar3[3],puVar3[2]),puVar3[1]),*puVar3);
    puVar3 = (unsigned char *)(*(int *)*puVar5 + iVar1 + 0xe);
    iVar6 = CONCAT31(CONCAT21(CONCAT11(puVar3[3],puVar3[2]),puVar3[1]),*puVar3) + iVar1 + 0xe + 4;
    *(int *)(param_1 + 0x10) = iVar6;
    iVar6 = *(int *)(param_1 + 0xc) * 8 + iVar6;
    iVar1 = fn_82766690(puVar5,iVar6,param_1 + 0x14);
    iVar1 = iVar1 + iVar6;
    *(int *)(param_1 + 0x18) = iVar1;
    iVar1 = (*(int *)(param_1 + 0x14) * 6 - param_2) + iVar1;
  }
  return iVar1;
}

