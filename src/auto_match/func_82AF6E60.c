typedef unsigned char bool;
#define true 1
#define false 0
extern unsigned int *auStack_40;
extern int fn_82AF4BA8();
extern int fn_82AF6CC8();


void fn_82AF6E60(unsigned __int64 param_1,int param_2)

{
  unsigned int uVar1;
  unsigned int uVar2;
  bool bVar3;
  unsigned __int64 uVar4;
  unsigned int uVar5;
  int *piVar6;
  unsigned __int64 uVar7;
  unsigned char auStack_40 [64];
  
  uVar7 = 0;
  uVar5 = 0;
  piVar6 = (int *)(param_2 + 0x2c);
  while( true ) {
    if ((*(unsigned int *)(param_2 + 8) >> 0x13 & 7) <= uVar5) break;
    uVar1 = ((unsigned int *)*piVar6)[3];
    uVar2 = *(unsigned int *)(uVar1 + 8) >> 7 & 0x7f;
    if ((uVar2 == 0x7d) || (bVar3 = false, uVar2 == 0x7c)) {
      bVar3 = true;
    }
    if (bVar3) {
      uVar2 = *(unsigned int *)*piVar6;
      uVar4 = fn_82AF4BA8(param_1,uVar1,uVar2 >> 0x19 & 7,uVar2 >> 5 & 0xff,uVar2 & 0x1f,
                            auStack_40);
      uVar7 = uVar4 | uVar7;
    }
    uVar5 = uVar5 + 1;
    piVar6 = piVar6 + 1;
  }
  if ((uVar7 & 0xffffffff) != 0) {
    fn_82AF6CC8(param_1,param_2,uVar7);
  }
  return;
}

