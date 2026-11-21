extern unsigned int fn_82FE72A0;
extern unsigned int lbl_832642F0;
#define CONCAT44(a, b) ((unsigned __int64)(((unsigned __int64)(a) << 32) | (unsigned __int64)(unsigned int)(b)))
#define ZEXT48(v) ((unsigned __int64)(unsigned int)(v))

unsigned __int64 fn_82FE91A0(unsigned __int64 param_1,unsigned int param_2,unsigned int *param_3)

{
  unsigned int uVar2;
  unsigned __int64 uVar1;
  unsigned char auStack_50 [8];
  int *piStack_48;
  int aiStack_44 [2];
  int (**pcStack_3c)();
  unsigned char *puStack_38;
  unsigned int uStack_34;
  unsigned int uStack_30;
  unsigned int uStack_2c;
  unsigned int uStack_28;
  unsigned int uStack_24;
  unsigned int uStack_20;
  
  uVar2 = fn_82FE8FA0();
  *param_3 = uVar2;
  aiStack_44[0] = fn_82A1E6A0(0,0,0,0);
  if (aiStack_44[0] == 0) {
    uVar1 = 2;
  }
  else {
    piStack_48 = aiStack_44;
    uStack_30 = *param_3;
    puStack_38 = auStack_50;
    aiStack_44[1] = 0;
    pcStack_3c = fn_82FE72A0;
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_34 = 0;
    uStack_2c = param_2;
    uVar1 = fn_82FFA6E8(lbl_832642F0,fn_82FE72A0,ZEXT48(puStack_38) << 0x20,
                        CONCAT44(uStack_30,param_2),0,(unsigned __int64)uStack_20 << 0x20);
    uVar1 = fn_82FE7220(auStack_50,uVar1);
  }
  return uVar1;
}
