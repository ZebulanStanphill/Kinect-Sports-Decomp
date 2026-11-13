extern int fn_82C10F40();
extern int fn_82C24220();


unsigned __int64 fn_82C24748(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  int iVar1;
  int iVar2;
  unsigned int uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned char *puStack_50;
  unsigned char *puStack_4c;
  int aiStack_48;
  
  iVar1 = *(int *)(param_1 + 0x1c);
  puStack_50 = (unsigned char *)0x0;
  puStack_4c = (unsigned char *)0x0;
  aiStack_48 = 0;
  if (((((iVar1 == 0) || (uVar4 = param_2 & 0xff, 0x7f < uVar4)) || (uVar4 == 0)) ||
      ((uVar5 = param_3 & 0xff, 0x7f < uVar5 || (uVar5 == 0)))) || (uVar4 == uVar5)) {
    return 0xffffffff80070057;
  }
  uVar6 = fn_82C10F40(*(unsigned int *)(iVar1 + 0x94),param_3,&puStack_4c);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  uVar6 = fn_82C10F40(*(unsigned int *)(iVar1 + 0x94),param_2,&puStack_50);
  if ((int)uVar6 < 0) {
    return uVar6;
  }
  if (((*(int *)(puStack_50 + 4) == 2) || (*(int *)(puStack_50 + 4) == 0)) ||
     ((iVar2 = *(int *)(puStack_4c + 4), iVar2 == 3 || (iVar2 == 1)))) {
LAB_82c24934:
    uVar6 = 0xffffffff805000a0;
  }
  else {
    if ((iVar2 == 2) && (*(int *)(puStack_4c + 0x4c) != 0)) {
      *(unsigned int *)(puStack_4c + 4) = 0;
      *(unsigned int *)(puStack_4c + 8) = 0;
      *(unsigned int *)(puStack_4c + 0x10) = 0;
      *(unsigned int *)(puStack_4c + 0x14) = 0;
      *(unsigned int *)(puStack_4c + 0x1c) = 0;
      puStack_4c[0x20] = 0;
      *(unsigned int *)(puStack_4c + 0x24) = 0;
      *(unsigned int *)(puStack_4c + 0x28) = 0;
      *(unsigned int *)(puStack_4c + 0x4c) = 1;
      fn_82C24220(param_1,*puStack_4c,0);
    }
    if ((*(int *)(puStack_50 + 4) == 2) && (*(int *)(puStack_50 + 0x4c) != 0)) {
      *(unsigned int *)(puStack_50 + 4) = 0;
      *(unsigned int *)(puStack_50 + 8) = 0;
      *(unsigned int *)(puStack_50 + 0x10) = 0;
      *(unsigned int *)(puStack_50 + 0x14) = 0;
      *(unsigned int *)(puStack_50 + 0x1c) = 0;
      puStack_50[0x20] = 0;
      *(unsigned int *)(puStack_50 + 0x24) = 0;
      *(unsigned int *)(puStack_50 + 0x28) = 0;
      *(unsigned int *)(puStack_50 + 0x4c) = 1;
      fn_82C24220(param_1,*puStack_50,0);
    }
    uVar3 = *(unsigned int *)(puStack_50 + 4);
    if (uVar3 < 4) {
      if (uVar3 == 1) {
        *(unsigned int *)(puStack_50 + 4) = 2;
        *(unsigned int *)(puStack_50 + 0x1c) = 1;
        puStack_50[0x20] = (char)param_3;
      }
      else {
        if ((uVar3 == 2) || (uVar3 == 0)) goto LAB_82c24934;
        *(unsigned int *)(puStack_50 + 4) = 0;
        uVar6 = fn_82C10F40(*(unsigned int *)(iVar1 + 0x94),puStack_50[0x20],&aiStack_48);
        if ((int)uVar6 < 0) {
          return uVar6;
        }
        *(unsigned int *)(aiStack_48 + 4) = 2;
        *(unsigned int *)(aiStack_48 + 0x1c) = 1;
        *(char *)(aiStack_48 + 0x20) = (char)param_3;
        param_2 = (unsigned __int64)(unsigned char)puStack_50[0x20];
        *(unsigned int *)(puStack_50 + 0x1c) = 0;
        puStack_50[0x20] = 0;
        *(unsigned int *)(puStack_50 + 0x24) = 0;
        fn_82C24220(param_1,*puStack_50,0);
      }
      uVar3 = *(unsigned int *)(puStack_4c + 4);
      if (uVar3 < 4) {
        if (uVar3 != 1) {
          if (uVar3 == 2) {
            *(unsigned int *)(puStack_4c + 4) = 1;
            *(unsigned int *)(puStack_4c + 0x1c) = 0;
            puStack_4c[0x20] = 0;
            *(unsigned int *)(puStack_4c + 0x24) = 0;
            fn_82C24220(param_1,*puStack_4c,1);
            return uVar6;
          }
          if (uVar3 == 0) {
            *(unsigned int *)(puStack_4c + 4) = 3;
            *(unsigned int *)(puStack_4c + 0x1c) = 1;
            puStack_4c[0x20] = (char)param_2;
            return uVar6;
          }
        }
        goto LAB_82c24934;
      }
    }
    uVar6 = 0xffffffff80004005;
  }
  return uVar6;
}

