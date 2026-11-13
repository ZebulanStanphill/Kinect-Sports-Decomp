extern int fn_82C038C8();


unsigned __int64 fn_82C15DF0(__int64 *param_1)

{
  unsigned char bVar1;
  char cVar2;
  unsigned char bVar3;
  unsigned char bVar4;
  unsigned char bVar5;
  int iVar6;
  unsigned int uVar7;
  unsigned __int64 uVar8;
  unsigned char * apbStack_30;
  
  apbStack_30 = (unsigned char *)0x0;
  if (param_1 == (__int64 *)0x0) {
    return 2;
  }
  iVar6 = fn_82C038C8(param_1,*param_1,1,&apbStack_30);
  if (iVar6 == 1) {
    *(unsigned int *)(param_1 + 0x35) = 0;
    *(unsigned int *)((int)param_1 + 0x1ac) = 0;
    bVar1 = *apbStack_30;
    uVar8 = (unsigned __int64)bVar1;
    *(unsigned char *)((int)param_1 + 0x1b4) = 0;
    *(unsigned int *)(param_1 + 0x36) = (unsigned int)(bVar1 >> 7);
    if (bVar1 >> 7 != 0) {
      if ((bVar1 & 0x10) != 0) {
        *(unsigned int *)(param_1 + 0x35) = 1;
        return 0;
      }
      if ((bVar1 & 0x60) != 0) {
        return 1;
      }
      *(char *)((int)param_1 + 0x1b4) = (char)(uVar8 & 0xf);
      if ((uVar8 & 0xf) != 2) {
        return 1;
      }
      *(unsigned int *)((int)param_1 + 0x1ac) = 3;
      iVar6 = fn_82C038C8(param_1,*param_1 + 3,1,&apbStack_30);
      if (iVar6 != 1) {
        return 3;
      }
      uVar8 = (unsigned __int64)*apbStack_30;
    }
    iVar6 = *(int *)((int)param_1 + 0x1ac);
    *(unsigned char *)((int)param_1 + 0x1bd) = (unsigned char)(uVar8 >> 1) & 3;
    *(unsigned int *)(param_1 + 0x38) = (unsigned int)uVar8 & 1;
    uVar7 = iVar6 + 1;
    *(unsigned char *)((int)param_1 + 0x1b5) = (unsigned char)(uVar8 >> 5) & 3;
    *(unsigned char *)((int)param_1 + 0x1bc) = (unsigned char)(uVar8 >> 3) & 3;
    *(unsigned int *)((int)param_1 + 0x1ac) = uVar7;
    *(int *)(param_1 + 0x37) = iVar6;
    iVar6 = fn_82C038C8(param_1,(unsigned __int64)uVar7 + *param_1,1,&apbStack_30);
    if (iVar6 != 1) {
      return 3;
    }
    bVar1 = *apbStack_30;
    *(unsigned char *)((int)param_1 + 0x1c4) = 4;
    *(unsigned char *)((int)param_1 + 0x1c5) = 3;
    if (bVar1 != 0x5d) {
      if ((bVar1 & 0xc0) != 0x40) {
        return 1;
      }
      if ((bVar1 & 0x30) != 0x10) {
        return 1;
      }
      bVar3 = bVar1 >> 2 & 3;
      *(unsigned char *)((int)param_1 + 0x1c5) = bVar3;
      if (bVar3 == 0) {
        return 1;
      }
      if (bVar3 < 3) {
        *(unsigned char *)((int)param_1 + 0x1c4) = bVar3;
      }
      if ((bVar1 & 3) != 1) {
        return 1;
      }
    }
    cVar2 = *(char *)((int)param_1 + 0x1b5);
    uVar7 = *(int *)((int)param_1 + 0x1ac) + 1;
    *(unsigned int *)((int)param_1 + 0x1ac) = uVar7;
    *(unsigned int *)(param_1 + 0x39) = uVar7;
    if (cVar2 == '\x01') {
      iVar6 = fn_82C038C8(param_1,(unsigned __int64)uVar7 + *param_1,1,&apbStack_30);
      if (iVar6 != 1) {
        return 3;
      }
      bVar1 = *apbStack_30;
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 1;
      *(unsigned int *)((int)param_1 + 0x1cc) = (unsigned int)bVar1;
    }
    else if (cVar2 == '\x02') {
      iVar6 = fn_82C038C8(param_1,(unsigned __int64)uVar7 + *param_1,2,&apbStack_30);
      if (iVar6 != 2) {
        return 3;
      }
      bVar1 = apbStack_30[1];
      bVar3 = *apbStack_30;
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 2;
      *(unsigned int *)((int)param_1 + 0x1cc) = (unsigned int)bVar1 * 0x100 + (unsigned int)bVar3;
    }
    else if (cVar2 == '\x03') {
      iVar6 = fn_82C038C8(param_1,(unsigned __int64)uVar7 + *param_1,4,&apbStack_30);
      if (iVar6 != 4) {
        return 3;
      }
      bVar1 = apbStack_30[3];
      bVar3 = apbStack_30[2];
      bVar4 = apbStack_30[1];
      bVar5 = *apbStack_30;
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 4;
      *(unsigned int *)((int)param_1 + 0x1cc) =
           (((unsigned int)bVar1 * 0x100 + (unsigned int)bVar3) * 0x100 + (unsigned int)bVar4) * 0x100 + (unsigned int)bVar5;
    }
    else {
      *(unsigned int *)((int)param_1 + 0x1cc) = 0;
    }
    uVar7 = *(unsigned int *)((int)param_1 + 0x1ac);
    cVar2 = *(char *)((int)param_1 + 0x1bd);
    *(unsigned int *)(param_1 + 0x3a) = uVar7;
    if (cVar2 == '\x01') {
      iVar6 = fn_82C038C8(param_1,(unsigned __int64)uVar7 + *param_1,1,&apbStack_30);
      if (iVar6 != 1) {
        return 3;
      }
      bVar1 = *apbStack_30;
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 1;
      *(unsigned int *)((int)param_1 + 0x1d4) = (unsigned int)bVar1;
    }
    else if (cVar2 == '\x02') {
      iVar6 = fn_82C038C8(param_1,(unsigned __int64)uVar7 + *param_1,2,&apbStack_30);
      if (iVar6 != 2) {
        return 3;
      }
      bVar1 = apbStack_30[1];
      bVar3 = *apbStack_30;
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 2;
      *(unsigned int *)((int)param_1 + 0x1d4) = (unsigned int)bVar1 * 0x100 + (unsigned int)bVar3;
    }
    else if (cVar2 == '\x03') {
      iVar6 = fn_82C038C8(param_1,(unsigned __int64)uVar7 + *param_1,4,&apbStack_30);
      if (iVar6 != 4) {
        return 3;
      }
      bVar1 = apbStack_30[3];
      bVar3 = apbStack_30[2];
      bVar4 = apbStack_30[1];
      bVar5 = *apbStack_30;
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 4;
      *(unsigned int *)((int)param_1 + 0x1d4) =
           (((unsigned int)bVar1 * 0x100 + (unsigned int)bVar3) * 0x100 + (unsigned int)bVar4) * 0x100 + (unsigned int)bVar5;
    }
    else {
      *(unsigned int *)((int)param_1 + 0x1d4) = 0;
    }
    uVar7 = *(unsigned int *)((int)param_1 + 0x1ac);
    cVar2 = *(char *)((int)param_1 + 0x1bc);
    *(unsigned int *)(param_1 + 0x3b) = uVar7;
    if (cVar2 == '\x01') {
      iVar6 = fn_82C038C8(param_1,(unsigned __int64)uVar7 + *param_1,1,&apbStack_30);
      if (iVar6 != 1) {
        return 3;
      }
      bVar1 = *apbStack_30;
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 1;
      *(unsigned int *)((int)param_1 + 0x1dc) = (unsigned int)bVar1;
    }
    else if (cVar2 == '\x02') {
      iVar6 = fn_82C038C8(param_1,(unsigned __int64)uVar7 + *param_1,2,&apbStack_30);
      if (iVar6 != 2) {
        return 3;
      }
      bVar1 = apbStack_30[1];
      bVar3 = *apbStack_30;
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 2;
      *(unsigned int *)((int)param_1 + 0x1dc) = (unsigned int)bVar1 * 0x100 + (unsigned int)bVar3;
    }
    else if (cVar2 == '\x03') {
      iVar6 = fn_82C038C8(param_1,(unsigned __int64)uVar7 + *param_1,4,&apbStack_30);
      if (iVar6 != 4) {
        return 3;
      }
      bVar1 = apbStack_30[3];
      bVar3 = apbStack_30[2];
      bVar4 = apbStack_30[1];
      bVar5 = *apbStack_30;
      *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 4;
      *(unsigned int *)((int)param_1 + 0x1dc) =
           (((unsigned int)bVar1 * 0x100 + (unsigned int)bVar3) * 0x100 + (unsigned int)bVar4) * 0x100 + (unsigned int)bVar5;
    }
    else {
      *(unsigned int *)((int)param_1 + 0x1dc) = 0;
    }
    iVar6 = fn_82C038C8(param_1,(unsigned __int64)*(unsigned int *)((int)param_1 + 0x1ac) + *param_1,6,&apbStack_30
                        );
    if (iVar6 == 6) {
      bVar1 = apbStack_30[3];
      bVar3 = apbStack_30[2];
      bVar4 = apbStack_30[1];
      bVar5 = *apbStack_30;
      iVar6 = *(int *)((int)param_1 + 0x1ac);
      *(int *)((int)param_1 + 0x1ac) = iVar6 + 4;
      uVar7 = iVar6 + 6;
      *(unsigned int *)(param_1 + 0x3c) =
           (((unsigned int)bVar1 * 0x100 + (unsigned int)bVar3) * 0x100 + (unsigned int)bVar4) * 0x100 + (unsigned int)bVar5;
      bVar1 = apbStack_30[5];
      bVar3 = apbStack_30[4];
      *(unsigned int *)((int)param_1 + 0x1ac) = uVar7;
      *(unsigned int *)(param_1 + 0x3d) = 0;
      *(unsigned char *)((int)param_1 + 0x1e6) = 0;
      *(unsigned char *)((int)param_1 + 0x1e7) = 0;
      *(unsigned int *)((int)param_1 + 0x1ec) = 1;
      *(unsigned short *)((int)param_1 + 0x1e4) = (unsigned short)bVar1 * 0x100 + (unsigned short)bVar3;
      if (*(int *)(param_1 + 0x38) == 0) {
        return 0;
      }
      iVar6 = fn_82C038C8(param_1,(unsigned __int64)uVar7 + *param_1,1,&apbStack_30);
      if (iVar6 == 1) {
        bVar1 = *apbStack_30;
        *(unsigned int *)(param_1 + 0x3d) = *(unsigned int *)((int)param_1 + 0x1ac);
        bVar3 = bVar1 >> 6;
        *(unsigned char *)((int)param_1 + 0x1e6) = bVar3;
        if ((bVar3 == 2) || (bVar3 == 1)) {
          *(unsigned char *)((int)param_1 + 0x1e7) = bVar3;
          *(unsigned int *)((int)param_1 + 0x1ec) = bVar1 & 0x3f;
          if ((bVar1 & 0x3f) != 0) {
            *(int *)((int)param_1 + 0x1ac) = *(int *)((int)param_1 + 0x1ac) + 1;
            return 0;
          }
        }
        return 1;
      }
    }
  }
  return 3;
}

