typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82817C98();
extern int fn_828182C0();


bool fn_827FE768(int *param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int uVar1;
  char *pcVar2;
  int aiStack_30 [12];
  char *haystack;
  
  haystack = (char *)param_2;
  pcVar2 = strstr(haystack,"BLENDSHAPE_");
  if (ZEXT48(pcVar2) == (param_2 & 0xffffffff)) {
    fn_828182C0(*(unsigned int *)(*param_1 + 0x3c),param_2 + 0xb,0,aiStack_30);
  }
  pcVar2 = strstr(haystack,"TEXANIM_");
  if (ZEXT48(pcVar2) == (param_2 & 0xffffffff)) {
    fn_828182C0(*(unsigned int *)(*param_1 + 0x40),param_2 + 8,0,aiStack_30);
  }
  pcVar2 = strstr(haystack,"CUSTOMCHANNEL_");
  if (ZEXT48(pcVar2) == (param_2 & 0xffffffff)) {
    uVar1 = *(unsigned int *)(*param_1 + 0x44);
    param_2 = param_2 + 0xe;
  }
  else {
    uVar1 = *(unsigned int *)(*param_1 + 0x38);
  }
  fn_828182C0(uVar1,param_2,0,aiStack_30);
  if (aiStack_30[0] != 0) {
    fn_82817C98(aiStack_30[0],param_3);
  }
  return aiStack_30[0] != 0;
}

