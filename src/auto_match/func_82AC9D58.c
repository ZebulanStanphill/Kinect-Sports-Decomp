typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_70;
extern int fn_82ABE2E0();
extern int fn_82AC8E50();
extern int fn_82AC91D0();
extern int fn_82B8AC10();


/* WARNING: Type propagation algorithm not settling */

void fn_82AC9D58(int param_1)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned int uVar4;
  unsigned int uVar5;
  char cVar6;
  unsigned char auStack_70 [112];
  
  fn_82AC8E50(auStack_70,param_1);
  for (uVar1 = *(unsigned int *)(param_1 + 4); ((uVar1 & 1) == 0 && (uVar1 != 0));
      uVar1 = *(unsigned int *)((uVar1 & 0xfffffffe) + 4)) {
    if (((*(unsigned int *)(param_1 + 0x2c) & 0x10) == 0) ||
       (bVar3 = true, (*(unsigned int *)(param_1 + 0x2c) & 0x20) != 0)) {
      bVar3 = false;
    }
    fn_82AC91D0(param_1,uVar1,!bVar3,auStack_70);
  }
  uVar1 = *(unsigned int *)((-(unsigned int)((*(unsigned int *)(param_1 + 4) & 1) == 0) & *(unsigned int *)(param_1 + 4)) + 0x14);
  uVar4 = 0;
  do {
    while( true ) {
      uVar5 = uVar1;
      if (((uVar5 & 1) != 0) || (uVar5 == 0)) {
        return;
      }
      if (((*(unsigned int *)(uVar5 + 8) & 0x3f80) == 16000) &&
         (cVar6 = fn_82ABE2E0(uVar5), cVar6 != '\0')) {
        fn_82B8AC10(param_1,uVar5,0,1);
      }
      if (uVar4 == 0) break;
      uVar1 = *(unsigned int *)((uVar4 & 0xfffffffe) + 0x28);
      if (uVar5 == (-(unsigned int)((uVar1 & 1) == 0) & uVar1)) {
LAB_82ac9e68:
        uVar1 = *(unsigned int *)((uVar5 & 0xfffffffe) + 0x28);
        uVar4 = uVar5;
      }
    }
    uVar1 = *(unsigned int *)(param_1 + 4);
    uVar2 = *(unsigned int *)((-(unsigned int)((uVar1 & 1) == 0) & uVar1) + 0x14);
    if (uVar5 == (-(unsigned int)((uVar2 & 1) == 0) & uVar2)) goto LAB_82ac9e68;
    uVar1 = *(unsigned int *)((-(unsigned int)((uVar1 & 1) == 0) & uVar1) + 0x14);
  } while( true );
}

