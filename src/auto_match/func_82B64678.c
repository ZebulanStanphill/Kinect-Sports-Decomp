int memcmp(const void *, const void *, unsigned int);
void *memcpy(void *, const void *, unsigned int);
extern int fn_82B63F30(int *);



int fn_82B64678(int *param_1)

{
  unsigned char bVar1;
  unsigned char bVar2;
  int uVar3;
  unsigned char *pbVar4;
  unsigned int uVar5;
  unsigned char *pbVar6;
  int iVar7;
  unsigned char *pbVar8;
  int iVar9;
  unsigned int uVar10;
  int lVar11;
  int lVar12;
  unsigned int uVar13;
  
  iVar9 = param_1[1];
  iVar7 = *param_1;
  uVar10 = *(unsigned int *)(iVar9 + 4) ^ *(unsigned int *)(iVar7 + 4);
  if (((((uVar10 & ~0x100U) == 0) && (*(int *)(iVar7 + 0x18) == 0)) &&
      (*(unsigned *)(iVar9 + 0x68) == *(unsigned *)(iVar7 + 0x68))) &&
     (((*(unsigned *)(iVar9 + 0x6c) == *(unsigned *)(iVar7 + 0x6c) &&
       (*(unsigned *)(iVar9 + 0x70) == *(unsigned *)(iVar7 + 0x70))) &&
      (*(int *)(iVar9 + 0x10) == *(int *)(iVar7 + 0x10))))) {
    if (*(int *)(iVar9 + 0xc) == 0) {
      uVar3 = fn_82B63F30(param_1);
      return uVar3;
    }
    if (*(int *)(iVar9 + 0x1c) != 0) {
      pbVar8 = *(unsigned char **)(iVar9 + 0x38);
      pbVar6 = *(unsigned char **)(iVar7 + 0x38);
      if (pbVar8!=pbVar6 && memcmp(pbVar8,pbVar6,0x400)!=0) goto LAB_82b647f8;
    }
    *(unsigned int *)(iVar9 + 0x10) = 0;
    uVar10 = 0;
    *(unsigned int *)(*param_1 + 0x10) = 0;
    iVar7 = param_1[1];
    if (*(unsigned *)(iVar7 + 0x70) > 0) {
      iVar9 = *param_1;
      uVar5 = *(unsigned int *)(iVar7 + 0x6c);
      do {
        uVar13 = 0;
        { int sourceStride=*(int *)(iVar9+100);unsigned sourceBase=*(unsigned *)(iVar9+0x20);
          int destStride=*(int *)(param_1[1]+100);unsigned destBase=*(unsigned *)(param_1[1]+0x20);
          lVar12=destStride*uVar10+destBase;lVar11=sourceStride*uVar10+sourceBase; }
        if (uVar5 != 0) {
          do {
            memcpy((void *)lVar12,(void *)lVar11,*(unsigned int *)(iVar7 + 0x74));
            iVar7 = param_1[1];
            iVar9 = *param_1;
            uVar13 = uVar13 + 1;
            lVar12 = (unsigned)*(unsigned int *)(iVar7 + 0x60) + lVar12;
            lVar11 = (unsigned)*(unsigned int *)(iVar9 + 0x60) + lVar11;
            uVar5 = *(unsigned int *)(iVar7 + 0x6c);
          } while (uVar13 < uVar5);
        }
        uVar10 = uVar10 + 1;
      } while (uVar10 < *(unsigned int *)(iVar7 + 0x70));
    }
    return 0;
  }
  else {
LAB_82b647f8:
    uVar3 = 0x80004005;
  }
  return uVar3;
}

