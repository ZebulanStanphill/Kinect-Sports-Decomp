extern unsigned int *auStack_40;
extern int fn_82E7EC68();
extern int fn_82E7F3F8();
extern int fn_82E7F8F0();
extern int fn_82E804C0();
extern unsigned int uStack_38;
extern unsigned int uStack_50;


unsigned __int64 fn_82E80530(unsigned short *param_1,unsigned short *param_2)

{
  unsigned short uVar1;
  unsigned int uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned int uStack_50;
  int aiStack_4c [3];
  unsigned char auStack_40 [8];
  unsigned __int64 uStack_38;
  
  uVar1 = *param_1;
  uStack_50 = 0;
  aiStack_4c[0] = 0;
  uVar4 = 0;
  uStack_38 = 0;
  if (((uVar1 & 0x1000) == 0) && (uVar1 != 0)) {
    uVar3 = 0xffffffffc00d36ec;
  }
  else if (param_2 == (unsigned short *)0x0) {
    uVar3 = 0xffffffff80004003;
  }
  else if (((param_1 == param_2) || (*param_2 == 0)) ||
          ((uVar1 != 0 && (((uVar1 & 0xfff) != 0xc && ((*param_2 & 0xfff) != (uVar1 & 0xfff))))))) {
    uVar3 = 0xffffffff80070057;
  }
  else {
    uVar3 = fn_82E7EC68(param_1,&uStack_50);
    uVar2 = uStack_50;
    if (-1 < (int)uVar3) {
      if (uStack_50 != 0) {
        do {
          uStack_38 = 0;
          uVar3 = fn_82E7F8F0(param_1,uVar4,auStack_40);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
          uVar3 = fn_82E7F3F8(param_2,auStack_40,aiStack_4c);
          if ((int)uVar3 < 0) {
            return uVar3;
          }
        } while ((aiStack_4c[0] == 0) &&
                (uVar4 = uVar4 + 1, (uVar4 & 0xffffffff) < (unsigned __int64)uVar2));
        if ((uVar4 & 0xffffffff) < (unsigned __int64)uVar2) {
          return uVar3;
        }
      }
      uVar3 = fn_82E804C0(param_1,param_2);
    }
  }
  return uVar3;
}

