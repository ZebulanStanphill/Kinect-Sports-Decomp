extern int fn_8265C9E0();
extern int fn_8265CA20();
extern int fn_828EC900();
extern int fn_828ED050();
extern int fn_828ED1A0();
extern int fn_828EE1B8();
extern int fn_82A1C098();
extern int fn_82A1E658();
extern int fn_82A1E740();
extern int fn_82CE1828();
extern int fn_82CE1908();
extern int fn_82CE19A8();
extern int memcpy();


void fn_828EE418(int *param_1)

{
  unsigned int uVar1;
  int iVar2;
  int iVar3;
  char cVar4;
  int *piVar5;
  __int64 lVar6;
  int aiStack_50;
  
  fn_828ED050();
  fn_828EC900(param_1);
  if ((*(char *)(param_1 + 0x4a) != '\0') && (param_1[0x43] != 0x3e5)) {
    iVar2 = fn_82A1E740(param_1 + 0x43,0,0);
    if (iVar2 == 0) {
      memcpy(param_1 + 0x34,param_1 + 5,0x3c);
      memcpy(param_1 + 5,param_1 + 0x25,0x3c);
      *(unsigned char *)((int)param_1 + 0x129) = 1;
    }
    else {
      *(unsigned char *)((int)param_1 + 0x129) = 0;
    }
    *(unsigned char *)(param_1 + 0x4a) = 0;
  }
  if ((*(char *)(param_1 + 0x59) != '\0') && (param_1[0x5a] != 0x3e5)) {
    iVar2 = fn_82A1E740(param_1 + 0x5a,0,0);
    if (iVar2 == 0) {
      *(unsigned char *)((int)param_1 + 0x13a) = *(unsigned char *)(param_1 + 0x56);
      *(unsigned char *)((int)param_1 + 0x13b) = *(unsigned char *)((int)param_1 + 0x159);
      *(unsigned char *)(param_1 + 0x4f) = *(unsigned char *)((int)param_1 + 0x15a);
      *(unsigned char *)((int)param_1 + 0x13d) = *(unsigned char *)((int)param_1 + 0x15b);
      param_1[0x50] = param_1[0x57];
      param_1[0x51] = param_1[0x58];
    }
    *(unsigned char *)(param_1 + 0x59) = 0;
    (**(int (***)())(*param_1 + 0x2c))(param_1);
    fn_828EE1B8(param_1);
  }
  iVar2 = param_1[2];
  if (iVar2 == 1) {
    if (param_1[0x17] == 0x3e5) goto LAB_828ee648;
    iVar2 = fn_82A1E740(param_1 + 0x17,0,0);
    if (iVar2 == 0) {
      param_1[2] = 2;
      goto LAB_828ee648;
    }
LAB_828ee568:
    iVar3 = fn_82A1C098(param_1 + 0x17);
    param_1[0x4b] = iVar2;
    param_1[0x4c] = iVar3;
  }
  else {
    if (iVar2 == 3) {
      if (param_1[0x17] == 0x3e5) goto LAB_828ee648;
      iVar2 = fn_82A1E740(param_1 + 0x17,0,0);
      if (iVar2 == 0) {
        param_1[2] = 4;
        goto LAB_828ee648;
      }
      goto LAB_828ee568;
    }
    if ((((iVar2 != 5) || (*(char *)(param_1 + 0x59) != '\0')) ||
        ((param_1[0x62] != 0 && (param_1[0x62] != 2)))) || (param_1[0x17] == 0x3e5))
    goto LAB_828ee648;
    iVar2 = fn_82A1E740(param_1 + 0x17,&aiStack_50,0);
    if (iVar2 != 0) {
      fn_82A1C098(param_1 + 0x17);
    }
    param_1[0x4b] = 0;
    param_1[0x4c] = 0;
    fn_82A1E658(param_1[0x16]);
    *(unsigned char *)(param_1 + 0x6a) = 0;
    param_1[0x16] = -1;
    *(unsigned char *)(param_1 + 0x61) = 0;
    param_1[0x62] = 0;
  }
  param_1[2] = 0;
  param_1[3] = -1;
  param_1[4] = 3;
LAB_828ee648:
  if ((param_1[2] == 2) || (param_1[2] == 4)) {
    fn_828EE1B8(param_1);
  }
  if (param_1[0x6b] == 0) {
    if ((*(char *)(param_1 + 0x6a) != '\0') && (cVar4 = fn_828ED1A0(param_1), cVar4 == '\0')) {
      aiStack_50 = 0;
      fn_82CE1828(param_1[0x16],0,*(unsigned __int64 *)(param_1 + 0x6e),&aiStack_50,0,0);
      param_1[0x6c] = aiStack_50;
      iVar2 = fn_8265C9E0();
      param_1[0x6d] = iVar2;
      param_1[0x70] = 0;
      param_1[0x71] = 0;
      param_1[0x72] = 0;
      param_1[0x73] = 0;
      param_1[0x74] = 0;
      param_1[0x75] = 0;
      param_1[0x76] = 0;
      iVar2 = fn_82CE1828(param_1[0x16],0,*(unsigned __int64 *)(param_1 + 0x6e),&aiStack_50,
                                param_1[0x6d],param_1 + 0x70);
      if (iVar2 == 0x3e5) {
        param_1[0x6b] = 1;
      }
      else {
        param_1[0x6b] = 3;
      }
    }
    *(unsigned char *)(param_1 + 0x6a) = 0;
  }
  else if ((param_1[0x6b] == 1) && (param_1[0x70] != 0x3e5)) {
    iVar2 = fn_82A1C098(param_1 + 0x70);
    param_1[0x77] = iVar2;
    if (iVar2 < 0) {
      fn_8265CA20(param_1[0x6d]);
      param_1[0x6d] = 0;
      param_1[0x6b] = 3;
    }
    else {
      param_1[0x6b] = 2;
    }
  }
  uVar1 = param_1[0x62];
  if (3 < uVar1) {
    return;
  }
  if (uVar1 == 1) {
    if (param_1[99] == 0x3e5) {
      return;
    }
    iVar2 = fn_82A1E740(param_1 + 99,0,0);
    if (iVar2 == 0) {
      param_1[0x62] = 2;
      return;
    }
  }
  else {
    if (uVar1 == 2) {
      if (*(char *)(param_1 + 0x61) != '\0') {
        return;
      }
      cVar4 = fn_828ED1A0(param_1);
      if (cVar4 != '\0') {
        return;
      }
      piVar5 = param_1 + 0x62;
      lVar6 = 7;
      do {
        piVar5 = piVar5 + 1;
        *piVar5 = 0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      iVar2 = fn_82CE19A8(param_1[0x16]);
      if (iVar2 != 0x3e5) {
        return;
      }
      param_1[0x62] = 3;
      return;
    }
    if (uVar1 == 0) {
      if (*(char *)(param_1 + 0x61) == '\0') {
        return;
      }
      cVar4 = fn_828ED1A0(param_1);
      if (cVar4 != '\0') {
        return;
      }
      piVar5 = param_1 + 0x62;
      lVar6 = 7;
      do {
        piVar5 = piVar5 + 1;
        *piVar5 = 0;
        lVar6 = lVar6 + -1;
      } while (lVar6 != 0);
      iVar2 = fn_82CE1908(param_1[0x16],0);
      if (iVar2 != 0x3e5) {
        return;
      }
      param_1[0x62] = 1;
      return;
    }
    if (param_1[99] == 0x3e5) {
      return;
    }
    iVar2 = fn_82A1E740(param_1 + 99,0,0);
    if (iVar2 == 0) {
      param_1[0x62] = 0;
      return;
    }
  }
  param_1[0x62] = 0;
  fn_82A1C098(param_1 + 99);
  return;
}

