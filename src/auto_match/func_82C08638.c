extern int fn_82C06C18();
extern int fn_82C08290();
extern int fn_82C10F40();
extern unsigned int iStack_4c;
extern unsigned int iStack_50;


unsigned __int64 fn_82C08638(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3,unsigned __int64 param_4)

{
  unsigned char bVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  int iStack_50;
  int iStack_4c;
  int aiStack_48;
  
  iStack_4c = 0;
  iStack_50 = 0;
  aiStack_48 = 0;
  if ((param_2 & 0xff) == (param_3 & 0xff)) {
    return 0xffffffff80070057;
  }
  uVar3 = (**(int (***)())(*param_1 + 0x10))(*param_1,param_2,param_3);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  uVar3 = fn_82C10F40(param_1[0x8e],param_2,&iStack_4c);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  uVar3 = fn_82C10F40(param_1[0x8e],param_3,&iStack_50);
  if (((uVar3 & 0xffffffff) != 0x80500016) && ((int)uVar3 < 0)) {
    return uVar3;
  }
  if ((iStack_50 == 0) && (uVar3 = fn_82C08290(param_1,param_3,param_4), (int)uVar3 < 0)) {
    return uVar3;
  }
  uVar3 = fn_82C10F40(param_1[0x8e],param_3,&iStack_50);
  if ((int)uVar3 < 0) {
    return uVar3;
  }
  uVar2 = *(unsigned int *)(iStack_4c + 4);
  if ((((uVar2 == 2) || (uVar2 == 0)) || (*(int *)(iStack_50 + 4) == 3)) ||
     (*(int *)(iStack_50 + 4) == 1)) {
LAB_82c08770:
    uVar3 = 0xffffffff805000a0;
  }
  else {
    if (uVar2 < 4) {
      if (uVar2 == 1) {
        *(unsigned int *)(iStack_4c + 4) = 2;
        *(unsigned int *)(iStack_4c + 0x10) = 1;
        *(char *)(iStack_4c + 0x14) = (char)param_3;
      }
      else {
        if ((uVar2 == 2) || (uVar2 == 0)) goto LAB_82c08770;
        *(unsigned int *)(iStack_4c + 4) = 0;
        uVar3 = fn_82C10F40(param_1[0x8e],*(unsigned char *)(iStack_4c + 0x14),&aiStack_48);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        *(unsigned int *)(aiStack_48 + 4) = 2;
        *(unsigned int *)(aiStack_48 + 0x10) = 1;
        *(char *)(aiStack_48 + 0x14) = (char)param_3;
        bVar1 = *(unsigned char *)(iStack_4c + 0x14);
        *(unsigned int *)(iStack_4c + 0x10) = 0;
        *(unsigned char *)(iStack_4c + 0x14) = 0;
        *(unsigned int *)(iStack_4c + 0x18) = 0;
        uVar3 = fn_82C06C18(param_1,param_2);
        if ((int)uVar3 < 0) {
          return uVar3;
        }
        iStack_4c = 0;
        param_2 = (unsigned __int64)bVar1;
      }
      uVar2 = *(unsigned int *)(iStack_50 + 4);
      if (uVar2 < 4) {
        if (uVar2 != 1) {
          if (uVar2 == 2) {
            uVar3 = fn_82C06C18(param_1,param_3);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            iStack_50 = 0;
            uVar3 = fn_82C08290(param_1,param_3,param_4);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            uVar3 = fn_82C10F40(param_1[0x8e],param_3,&iStack_50);
            if ((int)uVar3 < 0) {
              return uVar3;
            }
            *(unsigned int *)(iStack_50 + 4) = 1;
            *(unsigned int *)(iStack_50 + 0x10) = 0;
            *(unsigned char *)(iStack_50 + 0x14) = 0;
            *(unsigned int *)(iStack_50 + 0x18) = 0;
            return uVar3;
          }
          if (uVar2 == 0) {
            *(unsigned int *)(iStack_50 + 4) = 3;
            *(unsigned int *)(iStack_50 + 0x10) = 1;
            *(char *)(iStack_50 + 0x14) = (char)param_2;
            return uVar3;
          }
        }
        goto LAB_82c08770;
      }
    }
    uVar3 = 0xffffffff80004005;
  }
  return uVar3;
}

