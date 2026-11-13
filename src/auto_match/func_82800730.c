typedef unsigned char bool;
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82817C98();
extern int fn_828182C0();


bool fn_82800730(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  char *pcVar1;
  unsigned int uVar2;
  int aiStack_30 [12];
  
  pcVar1 = strstr((char *)param_2,"BLENDSHAPE_");
  if (ZEXT48(pcVar1) == (param_2 & 0xffffffff)) {
    param_2 = param_2 + 0xb;
    uVar2 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x24);
  }
  else {
    pcVar1 = strstr((char *)param_2,"TEXANIM_");
    if (ZEXT48(pcVar1) == (param_2 & 0xffffffff)) {
      uVar2 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x28);
      param_2 = param_2 + 8;
    }
    else {
      uVar2 = *(unsigned int *)(*(int *)(param_1 + 4) + 0x20);
    }
  }
  fn_828182C0(uVar2,param_2,0,aiStack_30);
  if (aiStack_30[0] != 0) {
    fn_82817C98(aiStack_30[0],param_3);
  }
  return aiStack_30[0] != 0;
}

