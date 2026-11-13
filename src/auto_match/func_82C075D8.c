extern unsigned int *auStack_70;
extern int fn_82C10F40();
extern int fn_82C10F68();
extern int fn_82C10FD0();
extern int fn_82C11038();
extern int fn_82C113F8();
extern int fn_82F68CC0();
extern unsigned int iStack_6c;


unsigned __int64 fn_82C075D8(int param_1,int param_2,unsigned int *param_3,int *param_4)

{
  __int64 lVar1;
  __int64 lVar2;
  unsigned __int64 uVar3;
  unsigned char auStack_70;
  int iStack_6c;
  unsigned char *puStack_68;
  unsigned int *puStack_64;
  __int64 lStack_60;
  __int64 alStack_58 [1];
  
  puStack_68 = (unsigned char *)0x0;
  lStack_60 = 0;
  lVar1 = 0x7ffffffffffffff;
  alStack_58[0] = 0;
  iStack_6c = 0;
  auStack_70 = 0;
  lVar2 = 0;
  puStack_64 = (unsigned int *)0x0;
  if (*param_4 != 0) {
    return 0;
  }
  if (param_2 < 0xa0001) {
    if (param_2 == 0xa0000) {
      return 0;
    }
    if (param_2 < 0x20001) {
      if (param_2 == 0x20000) {
        return 0;
      }
      if (param_2 == 0) {
        *(unsigned int *)(param_1 + 0x214) = 2;
        *(unsigned int *)(param_1 + 0x210) = 1;
        return -(unsigned __int64)(*(int *)(param_1 + 0x21c) != 0) & 0x500006;
      }
      if (param_2 == 0x10010) {
        *(unsigned int *)(param_1 + 0x214) = 4;
        return 0;
      }
    }
    else if (param_2 == 0x20030) {
      uVar3 = fn_82C10F68(*(unsigned int *)(param_1 + 0x238),&iStack_6c,&puStack_68,&auStack_70);
      if ((uVar3 & 0xffffffff) == 0x80500016) {
        uVar3 = 0xffffffff805000a7;
      }
      else if (-1 < (int)uVar3) {
        *(unsigned int *)(param_1 + 0x24c) = 0;
        do {
          if ((int)uVar3 < 0) goto LAB_82c078a8;
          if (*(int *)(puStack_68 + 4) != 0) {
            uVar3 = fn_82C10F40(*(unsigned int *)(param_1 + 0x23c),*puStack_68,&puStack_64);
            if ((int)uVar3 < 0) goto LAB_82c078a8;
            uVar3 = fn_82C113F8(*puStack_64,&lStack_60,alStack_58);
            if ((uVar3 & 0xffffffff) == 0x8050000b) {
              *(unsigned int *)(param_1 + 0x24c) = 0;
            }
            else {
              if ((int)uVar3 < 0) goto LAB_82c078a8;
              if ((__int64)(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0x14) <
                  alStack_58[0] - lStack_60) {
                *(unsigned int *)(param_1 + 0x24c) = 1;
              }
              if (lStack_60 < lVar1) {
                lVar1 = lStack_60;
              }
              if (lVar2 < alStack_58[0]) {
                lVar2 = alStack_58[0];
              }
              if ((__int64)(unsigned __int64)*(unsigned int *)(*(int *)(param_1 + 4) + 0x14) < lVar2 - lVar1) {
                *(unsigned int *)(param_1 + 0x24c) = 1;
              }
            }
          }
          uVar3 = fn_82C10FD0(*(unsigned int *)(param_1 + 0x238),iStack_6c,&puStack_68,&auStack_70);
        } while ((uVar3 & 0xffffffff) != 0x80500016);
        fn_82C11038(*(unsigned int *)(param_1 + 0x238),iStack_6c);
        if (*(int *)(param_1 + 0x24c) == 0) {
          return 1;
        }
        if (*(int *)(param_1 + 0x278) == 0) {
          *(unsigned int *)(param_1 + 0x278) = 1;
        }
        uVar3 = 0xffffffff80500000;
      }
      goto LAB_82c078a8;
    }
  }
  else if (param_2 < 0xb0021) {
    if (param_2 == 0xb0020) {
      *param_3 = *(unsigned int *)(param_1 + 0x26c);
      return 0;
    }
    if (param_2 == 0xb0000) {
      *(unsigned short *)((int)param_3 + 2) = *(unsigned short *)(param_1 + 0x272);
      *(unsigned char *)((int)param_3 + 1) = *(unsigned char *)(param_1 + 0x275);
      *(unsigned char *)param_3 = *(unsigned char *)(param_1 + 0x274);
      return 0;
    }
    if (param_2 == 0xb0010) {
      *(unsigned short *)param_3 = *(unsigned short *)(param_1 + 0x270);
      return 0;
    }
  }
  else if (param_2 == 0xb0030) {
    fn_82F68CC0(param_3,*(unsigned int *)(param_1 + 0x268),*(unsigned int *)(param_1 + 0x26c));
    return 0;
  }
  uVar3 = 0xffffffff805000b2;
  if (param_2 != 0x20030) {
    return 0xffffffff805000b2;
  }
LAB_82c078a8:
  if ((*(int *)(param_1 + 0x238) != 0) && (iStack_6c != 0)) {
    fn_82C11038();
  }
  return uVar3;
}

