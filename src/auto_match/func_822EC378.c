#define true 1
extern unsigned int *auStack_50;
extern int fn_82230218();
extern int fn_82230300();
extern int fn_822EC770();
extern int memchr();


unsigned __int64 fn_822EC378(unsigned int *param_1)

{
  int iVar1;
  unsigned int *puVar2;
  unsigned int *puVar3;
  unsigned char uVar4;
  unsigned __int64 uVar5;
  unsigned char auStack_50 [48];
  
  if (param_1[4] == 0) {
LAB_822ec42c:
    iVar1 = -1;
  }
  else {
    puVar2 = param_1;
    if (0xf < (unsigned int)param_1[5]) {
      puVar2 = (unsigned int *)*param_1;
    }
    puVar2 = (unsigned int *)((int)puVar2 + param_1[4] + -1);
    uVar4 = *(unsigned char *)puVar2;
    while( true ) {
      iVar1 = memchr(0xffffffff821ac4b4,uVar4,1);
      if (iVar1 != 0) break;
      puVar3 = param_1;
      if (0xf < (unsigned int)param_1[5]) {
        puVar3 = (unsigned int *)*param_1;
      }
      if (puVar2 == puVar3) goto LAB_822ec42c;
      puVar2 = (unsigned int *)((int)puVar2 + -1);
      uVar4 = *(unsigned char *)puVar2;
    }
    puVar3 = param_1;
    if (0xf < (unsigned int)param_1[5]) {
      puVar3 = (unsigned int *)*param_1;
    }
    iVar1 = (int)puVar2 - (int)puVar3;
  }
  fn_82230300(auStack_50,0,0);
  fn_82230218(auStack_50,param_1,iVar1 + 1,0xffffffffffffffff);
  uVar5 = fn_822EC770(auStack_50);
  fn_82230300(auStack_50,1,0);
  return uVar5;
}

