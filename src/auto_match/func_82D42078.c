#define true 1
extern unsigned int *auStack_240;
extern unsigned int *auStack_250;
extern int fn_82D6F590();
extern unsigned int lbl_83182A98;


unsigned __int64 fn_82D42078(int *param_1,unsigned __int64 param_2)

{
  int iVar1;
  char *pcVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_250 [16];
  unsigned char auStack_240 [496];
  
  uVar3 = param_2 & 0x80000000;
  uVar5 = (unsigned __int64)(((unsigned int)param_2 & 0x7fffffff) >> (0x20U - param_1[0x28] & 0x3f));
  param_2 = 0xffffffff >> (param_1[0x28] & 0x3fU) & param_2;
LAB_82d420ac:
  do {
    param_2 = param_2 + 1;
    if ((int)uVar3 == 0) {
      if (*(int *)(param_1[0x29] + (int)((uVar5 + (uVar5 & 0x7fffffff) * 2 & 0xffffffff) << 5) +
                  0x14) <= (int)param_2) {
        uVar5 = uVar5 + 1;
        param_2 = 0;
        if ((unsigned __int64)(unsigned int)param_1[0x2a] <= (uVar5 & 0xffffffff)) {
          if (param_1[0x2d] == 0) {
            return 0xffffffffffffffff;
          }
          uVar3 = 0xffffffff80000000;
          uVar5 = 0;
          param_2 = 0xffffffffffffffff;
          goto LAB_82d420ac;
        }
      }
    }
    else if (*(int *)(param_1[0x2c] + (int)((uVar5 & 0xffffffff) << 6) + 0x18) <= (int)param_2) {
      uVar5 = uVar5 + 1;
      if ((unsigned __int64)(unsigned int)param_1[0x2d] <= (uVar5 & 0xffffffff)) {
        return 0xffffffffffffffff;
      }
      param_2 = 0;
    }
    uVar4 = (unsigned int)((int)uVar5 << (0x20U - param_1[0x28] & 0x3f)) | uVar3 | param_2;
    iVar1 = (**(int (***)())(*param_1 + 0x14))(param_1,uVar4,auStack_240);
    if (*(int *)(iVar1 + 0xc) != 3) {
      return uVar4;
    }
    pcVar2 = (char *)fn_82D6F590((double)lbl_83182A98,auStack_250,iVar1 + 0x20,iVar1 + 0x30,
                                  iVar1 + 0x40);
    if (*pcVar2 == '\0') {
      return uVar4;
    }
  } while( true );
}

