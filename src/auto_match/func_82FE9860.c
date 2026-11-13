extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern int fn_82A1E6A0();
extern int fn_82FA5060();
extern int fn_82FE7220();
extern int fn_82FE7320();
extern int fn_82FE7A60();
extern int fn_82FE89F8();
extern unsigned int lbl_831BC768;


unsigned __int64 fn_82FE9860(unsigned __int64 param_1,unsigned int *param_2,unsigned __int64 param_3)

{
  unsigned int *puVar2;
  unsigned int uVar3;
  unsigned __int64 uVar1;
  unsigned __int64 uVar4;
  unsigned int *puVar5;
  unsigned int auStack_60 [4];
  unsigned char auStack_50 [8];
  int *piStack_48;
  int aiStack_44 [17];
  
  if ((param_3 & 0xffffffff) == 0) {
    uVar1 = 0x1f;
  }
  else if ((param_3 & 0xffffffff) == 1) {
    auStack_60[0] = fn_82FE89F8(*param_2);
    uVar1 = fn_82FE7A60(param_1,auStack_60,1);
  }
  else {
    puVar2 = (unsigned int *)fn_82FA5060(lbl_831BC768,(param_3 & 0x3fffffff) << 2);
    if (puVar2 == (unsigned int *)0x0) {
      uVar1 = 0x34;
    }
    else {
      if ((param_3 & 0xffffffff) != 0) {
        uVar4 = param_3;
        puVar5 = puVar2;
        do {
          uVar3 = fn_82FE89F8(*(unsigned int *)((int)param_2 + ((int)puVar5 - (int)puVar2)));
          *puVar5 = uVar3;
          uVar4 = uVar4 - 1;
          puVar5 = puVar5 + 1;
        } while (uVar4 != 0);
      }
      aiStack_44[0] = fn_82A1E6A0(0,0,0,0);
      if (aiStack_44[0] == 0) {
        uVar1 = 2;
      }
      else {
        piStack_48 = aiStack_44;
        uVar1 = fn_82FE7320(param_1,0xffffffff82fe72a0,auStack_50,puVar2,param_3,0);
        uVar1 = fn_82FE7220(auStack_50,uVar1);
      }
    }
  }
  return uVar1;
}

