void fn_82F004D8(int param_1,unsigned int param_2,unsigned int param_3)

{
  int iVar1;
  char cVar2;
  int iVar3;
  __int64 lVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  __int64 lVar9;
  
  lVar4 = (__int64)*(int *)(param_1 + 800) * (__int64)*(int *)(param_1 + 0x31c);
  iVar1 = (int)lVar4 >> 2;
  lVar9 = (__int64)iVar1;
  if (*(unsigned int *)(param_1 + 0x7820) != param_2) {
    uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x7820) + 8;
    iVar3 = 0;
    if (0 < (int)lVar4) {
      do {
        trapWord(6,uVar7,0);
        lVar5 = (__int64)(int)(*(unsigned char *)(iVar3 + *(int *)(param_1 + 0x1abc)) - 0x80) *
                (__int64)(int)(param_2 + 8);
        uVar6 = lVar5 + ((int)uVar7 >> 1);
        trapWord(5,uVar7 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f) - 1),0xffff)
        ;
        cVar2 = (char)((int)uVar6 / (int)uVar7);
        if (lVar5 < 0) {
          cVar2 = cVar2 + '\x7f';
        }
        else {
          cVar2 = cVar2 + -0x80;
        }
        *(char *)(iVar3 + *(int *)(param_1 + 0x1abc)) = cVar2;
        iVar3 = iVar3 + 1;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
  }
  if (*(unsigned int *)(param_1 + 0x7824) != param_3) {
    uVar7 = (unsigned __int64)*(unsigned int *)(param_1 + 0x7824) + 8;
    iVar8 = (int)uVar7;
    iVar3 = 0;
    lVar4 = lVar9;
    if (0 < iVar1) {
      do {
        trapWord(6,uVar7,0);
        lVar5 = (__int64)(int)(*(unsigned char *)(*(int *)(param_1 + 0x1ac0) + iVar3) - 0x80) *
                (__int64)(int)(param_3 + 8);
        uVar6 = lVar5 + (iVar8 >> 1);
        cVar2 = (char)((int)uVar6 / iVar8);
        if (lVar5 < 0) {
          cVar2 = cVar2 + '\x7f';
        }
        else {
          cVar2 = cVar2 + -0x80;
        }
        *(char *)(*(int *)(param_1 + 0x1ac0) + iVar3) = cVar2;
        iVar3 = iVar3 + 1;
        trapWord(5,uVar7 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f) - 1),0xffff)
        ;
        lVar4 = lVar4 + -1;
      } while (lVar4 != 0);
    }
    iVar3 = 0;
    if (0 < iVar1) {
      do {
        trapWord(6,uVar7,0);
        lVar4 = (__int64)(int)(*(unsigned char *)(*(int *)(param_1 + 0x1ac4) + iVar3) - 0x80) *
                (__int64)(int)(param_3 + 8);
        uVar6 = lVar4 + (iVar8 >> 1);
        cVar2 = (char)((int)uVar6 / iVar8);
        if (lVar4 < 0) {
          cVar2 = cVar2 + '\x7f';
        }
        else {
          cVar2 = cVar2 + -0x80;
        }
        *(char *)(*(int *)(param_1 + 0x1ac4) + iVar3) = cVar2;
        iVar3 = iVar3 + 1;
        trapWord(5,uVar7 & ~(((uVar6 & 0x7fffffff) << 1 | (uVar6 & 0xffffffff) >> 0x1f) - 1),0xffff)
        ;
        lVar9 = lVar9 + -1;
      } while (lVar9 != 0);
    }
  }
  return;
}

