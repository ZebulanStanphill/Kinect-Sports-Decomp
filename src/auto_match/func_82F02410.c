extern int fn_82F022F0();


void fn_82F02410(unsigned __int64 param_1,unsigned int param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  __int64 lVar2;
  int iVar3;
  unsigned int uVar4;
  int iVar5;
  
  puVar1 = (unsigned int *)param_1;
  if ((unsigned int)puVar1[0xd] < (unsigned int)puVar1[1]) {
    puVar1[4] = 0x20;
    puVar1[3] = 0;
    puVar1[1] = 0;
    puVar1[0xe] = 1;
    puVar1[2] = *puVar1;
  }
  uVar4 = puVar1[4];
  if ((param_3 & 0xffffffff) < (unsigned __int64)uVar4) {
    uVar4 = uVar4 - (int)param_3;
    puVar1[4] = uVar4;
    puVar1[3] = (*(unsigned int *)((int)((param_3 & 0xffffffff) << 2) + -0x7ce56678) & param_2) <<
                (uVar4 & 0x3f) ^ puVar1[3];
  }
  else {
    param_3 = param_3 - uVar4;
    puVar1[3] = puVar1[3] ^ (int)param_2 >> ((unsigned int)param_3 & 0x3f) & ~(-1 << (uVar4 & 0x3f));
    if (puVar1[0xb] == 0) {
      *(unsigned char *)puVar1[2] = *(unsigned char *)(puVar1 + 3);
      iVar5 = puVar1[2];
      puVar1[2] = (unsigned char *)(iVar5 + 1);
      *(unsigned char *)(iVar5 + 1) = *(unsigned char *)((int)puVar1 + 0xd);
      iVar5 = puVar1[2];
      puVar1[2] = (unsigned char *)(iVar5 + 1);
      *(unsigned char *)(iVar5 + 1) = *(unsigned char *)((int)puVar1 + 0xe);
      iVar5 = puVar1[2];
      puVar1[2] = (unsigned char *)(iVar5 + 1);
      *(unsigned char *)(iVar5 + 1) = *(unsigned char *)((int)puVar1 + 0xf);
      iVar5 = puVar1[1] + 4;
      puVar1[2] = puVar1[2] + 1;
    }
    else {
      uVar4 = puVar1[2];
      lVar2 = fn_82F022F0(param_1,*(unsigned char *)(puVar1 + 3),(unsigned __int64)uVar4,
                              (unsigned __int64)uVar4 + 1);
      iVar5 = (int)param_1;
      lVar2 = lVar2 + (unsigned __int64)*(unsigned int *)(iVar5 + 8);
      *(int *)(iVar5 + 8) = (int)lVar2;
      lVar2 = fn_82F022F0(param_1,*(unsigned char *)(iVar5 + 0xd),lVar2,lVar2 + 1);
      iVar5 = (int)param_1;
      lVar2 = lVar2 + (unsigned __int64)*(unsigned int *)(iVar5 + 8);
      *(int *)(iVar5 + 8) = (int)lVar2;
      lVar2 = fn_82F022F0(param_1,*(unsigned char *)(iVar5 + 0xe),lVar2,lVar2 + 1);
      iVar5 = (int)param_1;
      lVar2 = lVar2 + (unsigned __int64)*(unsigned int *)(iVar5 + 8);
      *(int *)(iVar5 + 8) = (int)lVar2;
      iVar3 = fn_82F022F0(param_1,*(unsigned char *)(iVar5 + 0xf),lVar2,lVar2 + 1);
      iVar5 = (int)param_1;
      iVar3 = iVar3 + *(int *)(iVar5 + 8);
      *(int *)(iVar5 + 8) = iVar3;
      iVar5 = (iVar3 - uVar4) + *(int *)(iVar5 + 4);
    }
    iVar3 = (int)param_1;
    *(int *)(iVar3 + 4) = iVar5;
    if ((param_3 & 0xffffffff) == 0) {
      *(unsigned int *)(iVar3 + 0xc) = 0;
      *(unsigned int *)(iVar3 + 0x10) = 0x20;
    }
    else {
      uVar4 = 0x20 - (unsigned int)param_3;
      *(unsigned int *)(iVar3 + 0x10) = uVar4;
      *(unsigned int *)(iVar3 + 0xc) =
           (*(unsigned int *)((int)((param_3 & 0xffffffff) << 2) + -0x7ce56678) & param_2) << (uVar4 & 0x3f)
      ;
    }
  }
  return;
}

