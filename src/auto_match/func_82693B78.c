#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_8267B890();
extern int fn_8267BE38();
extern int fn_82693A98();
extern int fn_826BD6B0();
extern int fn_82F6ADA8();
extern int fn_82F6AE58();
extern unsigned int lbl_831E7E64;
extern unsigned int stack0x00000000;


unsigned __int64 fn_82693B78(unsigned int *param_1,char *param_2,char *param_3,char param_4)

{
  char cVar1;
  unsigned __int64 uVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  char *pcVar7;
  
  uVar2 = ZEXT48(&stack0x00000000);
  pcVar7 = param_2;
  if (param_3 == (char *)0xffffffff) {
    do {
      cVar1 = *pcVar7;
      pcVar7 = pcVar7 + 1;
    } while (cVar1 != '\0');
    param_3 = pcVar7 + (-1 - (int)param_2);
  }
  uVar3 = fn_82693A98(param_1);
  if ((uVar3 & 0xffffffff) < 0xfa) {
    uVar4 = uVar2 - 0x440;
  }
  else {
    uVar4 = fn_8267B890(lbl_831E7E64,(uVar3 + 1 & 0x7fffffff) << 1,0);
  }
  if (param_3 < (char *)0xfa) {
    uVar5 = uVar2 - 0x240;
  }
  else {
    uVar5 = fn_8267B890(lbl_831E7E64,(unsigned int)(param_3 + 1) & 0x7fffffff,0);
  }
  fn_826BD6B0(uVar4,*(unsigned int *)*param_1,uVar3);
  fn_826BD6B0(uVar5,param_2,param_3);
  if (param_4 == '\0') {
    uVar6 = fn_82F6ADA8(uVar4,uVar5);
  }
  else {
    uVar6 = fn_82F6AE58();
  }
  if ((uVar4 & 0xffffffff) != (uVar2 - 0x440 & 0xffffffff)) {
    fn_8267BE38(uVar4);
  }
  if ((uVar5 & 0xffffffff) != (uVar2 - 0x240 & 0xffffffff)) {
    fn_8267BE38(uVar5);
  }
  return uVar6;
}

