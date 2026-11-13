extern int fn_82811680();
extern int fn_82820EF8();
extern int fn_828223C8();
extern int fn_82827750();
extern unsigned int iStack_40;


void fn_8282DB10(int param_1)

{
  unsigned int uVar1;
  int iVar2;
  unsigned char uVar3;
  char cVar4;
  unsigned __int64 uVar5;
  __int64 lVar6;
  __int64 lVar7;
  int iVar8;
  unsigned int *puVar9;
  int iVar10;
  unsigned __int64 uVar11;
  unsigned int *puVar12;
  int iStack_40;
  int aiStack_3c;
  
  iVar10 = 0;
  fn_828223C8(param_1 + 0x2f4,&aiStack_3c);
  if (aiStack_3c != 0) {
    do {
      iVar2 = aiStack_3c;
      *(unsigned int *)(aiStack_3c + 0x18) = 0;
      puVar9 = (unsigned int *)(aiStack_3c + 0x18);
      uVar11 = 0;
      iVar8 = param_1 + 0x2fc;
      while (fn_828223C8(iVar8,&iStack_40), iStack_40 != 0) {
        iVar8 = iStack_40;
        iVar10 = iStack_40;
        if (*(char *)(iStack_40 + 0x28) == *(char *)(iVar2 + 0x14)) {
          if (*puVar9 < *(unsigned int *)(iStack_40 + 0x2c)) {
            *puVar9 = *(unsigned int *)(iStack_40 + 0x2c);
          }
          uVar1 = *(unsigned int *)(iStack_40 + 0x2c);
          uVar5 = (unsigned __int64)uVar1 -
                  (uVar11 - (__int64)(int)((uVar11 & 0xffffffff) / (unsigned __int64)uVar1) *
                            (__int64)(int)uVar1);
          lVar6 = uVar5 - (__int64)(int)((uVar5 & 0xffffffff) / (unsigned __int64)uVar1) *
                          (__int64)(int)uVar1;
          lVar7 = lVar6 + uVar11;
          *(int *)(iStack_40 + 0x30) = (int)lVar6;
          *(int *)(iStack_40 + 0x24) = (int)lVar7;
          uVar11 = (unsigned __int64)*(unsigned int *)(iStack_40 + 0x14) + lVar7;
        }
      }
      if (iVar10 == 0) {
        return;
      }
      uVar1 = -(int)uVar11 & 3;
      iVar8 = uVar1 + (int)uVar11;
      *(unsigned int *)(iVar2 + 0x10) = uVar1;
      *(int *)(iVar2 + 0x1c) = iVar8;
      *(int *)(iVar2 + 0xc) = iVar8;
      fn_828223C8(aiStack_3c,&aiStack_3c);
    } while (aiStack_3c != 0);
  }
  iVar10 = param_1 + 0x2fc;
  while (fn_828223C8(iVar10,&iStack_40), iStack_40 != 0) {
    puVar12 = (unsigned int *)(*(int *)(param_1 + 0x2e4) + *(int *)(param_1 + 0x2d8));
    *(int *)(param_1 + 0x2d8) = *(int *)(param_1 + 0x2d8) + 0xe;
    *(int *)(param_1 + 0x58) = *(int *)(param_1 + 0x58) + 0xe;
    *puVar12 = *(unsigned int *)(iStack_40 + 0x10);
    puVar12[1] = *(unsigned int *)(iStack_40 + 0x24);
    puVar12[2] = *(unsigned int *)(iStack_40 + 0x14);
    *(unsigned char *)(puVar12 + 3) = *(unsigned char *)(iStack_40 + 0x28);
    uVar3 = fn_82811680(*(unsigned int *)(iStack_40 + 0x2c));
    *(unsigned char *)((int)puVar12 + 0xd) = uVar3;
    cVar4 = fn_82827750(param_1);
    iVar10 = iStack_40;
    if (cVar4 != '\0') {
      fn_82820EF8(puVar12,4);
      fn_82820EF8(puVar12 + 1,4);
      fn_82820EF8(puVar12 + 2,4);
      iVar10 = iStack_40;
    }
  }
  return;
}

