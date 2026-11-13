extern int fn_82C106C8();
extern int fn_82C10B28();
extern int fn_82C11050();


unsigned __int64 fn_82C1DA78(int param_1)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned short *puVar4;
  short *psVar5;
  int iVar6;
  int iVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  int iVar10;
  __int64 lVar11;
  int iVar12;
  int aiStack_40;
  
  aiStack_40 = *(int *)(param_1 + 0x1c);
  **(unsigned int **)(aiStack_40 + 4) = 0;
  fn_82C106C8(*(unsigned int *)(aiStack_40 + 0xe0),4);
  if (*(short *)(aiStack_40 + 0xa0) != 0) {
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,aiStack_40 + 0xac);
  }
  if (*(int *)(aiStack_40 + 0xa4) != 0) {
    uVar9 = 0;
    lVar11 = 0;
    do {
      fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                        (unsigned __int64)*(unsigned int *)(aiStack_40 + 0xb0) + lVar11 + 4);
      fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                        (unsigned __int64)*(unsigned int *)(aiStack_40 + 0xb0) + lVar11 + 8);
      uVar9 = uVar9 + 1;
      lVar11 = lVar11 + 0xc;
    } while (uVar9 < *(unsigned int *)(aiStack_40 + 0xa4));
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,aiStack_40 + 0xb0);
  }
  uVar3 = (unsigned __int64)*(unsigned int *)(*(int *)(aiStack_40 + 4) + 0x4c);
  if (uVar3 != 0) {
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,uVar3 + 0xc);
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                      (unsigned __int64)*(unsigned int *)(*(int *)(aiStack_40 + 4) + 0x4c) + 0x10);
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                      (unsigned __int64)*(unsigned int *)(*(int *)(aiStack_40 + 4) + 0x4c) + 0x14);
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                      (unsigned __int64)*(unsigned int *)(*(int *)(aiStack_40 + 4) + 0x4c) + 0x18);
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                      (unsigned __int64)*(unsigned int *)(*(int *)(aiStack_40 + 4) + 0x4c) + 0x1c);
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                      (unsigned __int64)*(unsigned int *)(aiStack_40 + 4) + 0x4c);
  }
  puVar4 = *(unsigned short **)(*(int *)(aiStack_40 + 4) + 0x50);
  if (puVar4 != (unsigned short *)0x0) {
    if (*puVar4 != 0) {
      uVar9 = 0;
      lVar11 = 0;
      do {
        fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                          (unsigned __int64)*(unsigned int *)(puVar4 + 2) + lVar11 + 0xc);
        fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                          (unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(aiStack_40 + 4) + 0x50) + 4) +
                          lVar11 + 4);
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 0x10;
        puVar4 = *(unsigned short **)(*(int *)(aiStack_40 + 4) + 0x50);
      } while (uVar9 < *puVar4);
      fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,puVar4 + 2);
    }
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                      (unsigned __int64)*(unsigned int *)(aiStack_40 + 4) + 0x50);
  }
  iVar7 = *(int *)(aiStack_40 + 4);
  if (*(int *)(iVar7 + 0x74) != 0) {
    uVar9 = 0;
    if (*(int *)(iVar7 + 0x70) != 0) {
      lVar11 = 0;
      do {
        fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                          (unsigned __int64)*(unsigned int *)(iVar7 + 0x74) + lVar11 + 8);
        fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                          (unsigned __int64)*(unsigned int *)(*(int *)(aiStack_40 + 4) + 0x74) + lVar11 + 0x10);
        fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                          (unsigned __int64)*(unsigned int *)(*(int *)(aiStack_40 + 4) + 0x74) + lVar11 + 0x18);
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 0x1c;
        iVar7 = *(int *)(aiStack_40 + 4);
      } while (uVar9 < *(unsigned int *)(iVar7 + 0x70));
    }
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,iVar7 + 0x74);
  }
  iVar7 = *(int *)(aiStack_40 + 4);
  if (*(int *)(iVar7 + 0x58) != 0) {
    uVar9 = 0;
    if (*(int *)(iVar7 + 0x5c) != 0) {
      lVar11 = 0;
      do {
        fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                          (unsigned __int64)*(unsigned int *)(iVar7 + 0x58) + lVar11 + 0x20);
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 0x28;
        iVar7 = *(int *)(aiStack_40 + 4);
      } while (uVar9 < *(unsigned int *)(iVar7 + 0x5c));
    }
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,iVar7 + 0x58);
  }
  puVar4 = *(unsigned short **)(*(int *)(aiStack_40 + 4) + 0x60);
  if (puVar4 != (unsigned short *)0x0) {
    uVar9 = 0;
    if (*puVar4 != 0) {
      lVar11 = 0;
      do {
        fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                          (unsigned __int64)*(unsigned int *)(puVar4 + 2) + lVar11 + 0xc);
        fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                          (unsigned __int64)*(unsigned int *)(*(int *)(*(int *)(aiStack_40 + 4) + 0x60) + 4) +
                          lVar11 + 0x10);
        uVar9 = uVar9 + 1;
        lVar11 = lVar11 + 0x14;
        puVar4 = *(unsigned short **)(*(int *)(aiStack_40 + 4) + 0x60);
      } while (uVar9 < *puVar4);
    }
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,puVar4 + 2);
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                      (unsigned __int64)*(unsigned int *)(aiStack_40 + 4) + 0x60);
  }
  iVar7 = *(int *)(*(int *)(aiStack_40 + 4) + 0x54);
  if (iVar7 != 0) {
    if (*(short *)(iVar7 + 2) != 0) {
      uVar9 = 0;
      iVar12 = 0;
      iVar6 = aiStack_40;
      do {
        psVar5 = (short *)(*(int *)(iVar7 + 4) + iVar12);
        if (*psVar5 != 0) {
          fn_82C10B28(*(unsigned int *)(iVar6 + 0xe0),0xb,psVar5 + 2);
          iVar6 = aiStack_40;
        }
        uVar9 = uVar9 + 1;
        iVar12 = iVar12 + 8;
        iVar7 = *(int *)(*(int *)(iVar6 + 4) + 0x54);
      } while (uVar9 < *(unsigned short *)(iVar7 + 2));
      fn_82C10B28(*(unsigned int *)(iVar6 + 0xe0),0xb,iVar7 + 4);
    }
    puVar4 = *(unsigned short **)(*(int *)(aiStack_40 + 4) + 0x54);
    if (*puVar4 != 0) {
      uVar9 = 0;
      iVar6 = 0;
      iVar7 = aiStack_40;
      do {
        if (*(short *)(*(int *)(puVar4 + 4) + iVar6 + 6) != 0) {
          fn_82C10B28(*(unsigned int *)(iVar7 + 0xe0),0xb,*(int *)(puVar4 + 4) + iVar6 + 8);
          iVar7 = aiStack_40;
        }
        uVar9 = uVar9 + 1;
        iVar6 = iVar6 + 0xc;
        puVar4 = *(unsigned short **)(*(int *)(iVar7 + 4) + 0x54);
      } while (uVar9 < *puVar4);
      fn_82C10B28(*(unsigned int *)(iVar7 + 0xe0),0xb,puVar4 + 4);
    }
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                      (unsigned __int64)*(unsigned int *)(aiStack_40 + 4) + 0x54);
  }
  fn_82C11050(*(unsigned int *)(*(int *)(aiStack_40 + 4) + 0x80));
  fn_82C11050(*(unsigned int *)(aiStack_40 + 0x94));
  puVar1 = *(unsigned int **)(*(int *)(aiStack_40 + 4) + 0x78);
  if (puVar1 != (unsigned int *)0x0) {
    if ((unsigned __int64)*puVar1 != 0) {
      fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,(unsigned __int64)*puVar1 + 4);
      fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,(unsigned __int64)*puVar1 + 0x14);
      fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,(unsigned __int64)*puVar1 + 0xc);
      fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,(unsigned __int64)*puVar1 + 0x1c);
    }
    if ((unsigned __int64)puVar1[1] != 0) {
      fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,(unsigned __int64)puVar1[1] + 4);
    }
    if ((unsigned __int64)puVar1[2] != 0) {
      fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,(unsigned __int64)puVar1[2] + 8);
    }
    if ((unsigned __int64)puVar1[3] != 0) {
      fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,(unsigned __int64)puVar1[3] + 4);
    }
  }
  uVar2 = fn_82C11050(*(unsigned int *)(*(int *)(aiStack_40 + 4) + 0x7c));
  uVar3 = (unsigned __int64)*(unsigned int *)(*(int *)(aiStack_40 + 4) + 0x68);
  if (uVar3 != 0) {
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,uVar3 + 4);
    fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,
                      (unsigned __int64)*(unsigned int *)(aiStack_40 + 4) + 0x68);
  }
  iVar7 = *(int *)(aiStack_40 + 4);
  uVar9 = 0;
  iVar6 = aiStack_40;
  if (*(short *)(iVar7 + 0x48) != 0) {
    iVar12 = 0x84;
    do {
      psVar5 = *(short **)(iVar7 + iVar12);
      if (psVar5 != (short *)0x0) {
        if (*(int *)(psVar5 + 2) != 0) {
          uVar8 = 0;
          if (*psVar5 != 0) {
            iVar10 = 0;
            do {
              iVar7 = *(int *)(*(int *)(iVar7 + iVar12) + 4) + iVar10;
              if (*(int *)(iVar7 + 4) != 0) {
                fn_82C10B28(*(unsigned int *)(iVar6 + 0xe0),0xb,iVar7 + 4);
                iVar6 = aiStack_40;
              }
              iVar7 = *(int *)(iVar6 + 4);
              uVar8 = uVar8 + 1;
              iVar10 = iVar10 + 8;
            } while (uVar8 < **(unsigned short **)(iVar7 + iVar12));
          }
          fn_82C10B28(*(unsigned int *)(iVar6 + 0xe0),0xb,
                            (unsigned __int64)*(unsigned int *)(iVar7 + iVar12) + 4);
          iVar6 = aiStack_40;
        }
        fn_82C10B28(*(unsigned int *)(iVar6 + 0xe0),0xb,*(int *)(iVar6 + 4) + iVar12);
        iVar6 = aiStack_40;
      }
      iVar7 = *(int *)(iVar6 + 4);
      uVar9 = uVar9 + 1;
      iVar12 = iVar12 + 4;
    } while (uVar9 < (unsigned int)(int)*(short *)(iVar7 + 0x48));
  }
  iVar7 = *(int *)(iVar7 + 0x6c);
  if (iVar7 != 0) {
    if (*(int *)(iVar7 + 4) != 0) {
      fn_82C10B28(*(unsigned int *)(iVar6 + 0xe0),0xb,iVar7 + 4);
      iVar6 = aiStack_40;
    }
    fn_82C10B28(*(unsigned int *)(iVar6 + 0xe0),0xb,(unsigned __int64)*(unsigned int *)(iVar6 + 4) + 0x6c);
    iVar6 = aiStack_40;
  }
  fn_82C10B28(*(unsigned int *)(iVar6 + 0xe0),0xb,iVar6 + 0x30);
  fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,aiStack_40 + 0x34);
  fn_82C10B28(*(unsigned int *)(aiStack_40 + 0xe0),0xb,&aiStack_40);
  return uVar2;
}

