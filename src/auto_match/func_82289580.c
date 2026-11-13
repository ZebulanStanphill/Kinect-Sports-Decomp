extern unsigned int *auStack_a0;
extern int fn_82266DD8();
extern int fn_82286EA8();
extern int fn_822886B0();
extern int fn_8228A540();
extern int fn_8228A7F8();
extern int fn_8228AF60();
extern int fn_8265C9E0();
extern int fn_82A81CC0();


void fn_82289580(unsigned int *param_1)

{
  char *pcVar2;
  char cVar4;
  unsigned __int64 uVar1;
  unsigned int uVar3;
  unsigned __int64 uVar5;
  unsigned __int64 uVar6;
  unsigned char auStack_a0 [144];
  
  if (param_1[0x184] != 0) {
    fn_82286EA8();
  }
  pcVar2 = strstr((char *)(param_1[0x47c] + 0x234),"boxing");
  if (pcVar2 == (char *)0x0) {
    uVar5 = 0;
  }
  else {
    cVar4 = fn_82A81CC0((unsigned __int64)(unsigned int)param_1[0x47c] + 0x844);
    if (cVar4 != '\x01') {
      uVar6 = 1;
      uVar5 = 0;
      goto LAB_82289600;
    }
    uVar5 = 1;
  }
  uVar6 = 0;
LAB_82289600:
  fn_8228A7F8(auStack_a0,uVar5,uVar6);
  uVar1 = fn_8265C9E0(0x5e0);
  if ((uVar1 & 0xffffffff) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = fn_82266DD8(uVar1,param_1 + 0xb8,*param_1,param_1[0x1a6],auStack_a0);
  }
  param_1[0x184] = uVar3;
  fn_822886B0(param_1);
  fn_8228A540(param_1,0xffffffff821a94e4);
  fn_8228AF60(param_1,0xffffffff82196582);
  return;
}

