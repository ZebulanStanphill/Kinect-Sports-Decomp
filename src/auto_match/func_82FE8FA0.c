#define true 1
#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82A2A378();
extern int fn_82F64CE0();
extern int fn_82F64CE0();
extern int fn_82F6F8B8();
extern int fn_82FE8948();
extern int fn_82FFA510();
extern unsigned int lbl_832642F0;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


unsigned __int64 fn_82FE8FA0(unsigned __int64 param_1)

{
  short sVar1;
  unsigned int *puVar2;
  unsigned __int64 uVar3;
  unsigned __int64 uVar4;
  __int64 lVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  __int64 lVar8;

  puVar2 = (unsigned int *)(ZEXT48(&stack0x00000000) - 0x90);
  *puVar2 = register0x0000000c;
  uVar3 = fn_82F64CE0();
  uVar6 = (uVar3 + 1 & 0x7fffffff) * -2 & 0xfffffff0;
  fn_82F64CE0();
  lVar7 = (ZEXT48(&stack0x00000000) - 0x90) + uVar6;
  *(unsigned int *)lVar7 = *puVar2;
  lVar8 = lVar7 + 0x50;
  fn_82F6F8B8(lVar8,param_1);
  sVar1 = *(short *)lVar8;
  lVar5 = lVar8;
  do {
    if (sVar1 == 0) {
LAB_82fe901c:
      uVar4 = fn_82FE8948(lVar8);
      uVar6 = -(uVar3 + 1) & 0xfffffff0;
      fn_82F64CE0();
      *(unsigned int *)(lVar7 + uVar6) = *(unsigned int *)lVar7;
      lVar7 = lVar7 + uVar6 + 0x50;
      lVar5 = fn_82F64CE0(lVar8);
      uVar6 = uVar3;
      if ((lVar5 + 1U & 0xffffffff) < (uVar3 & 0xffffffff)) {
        lVar5 = fn_82F64CE0(lVar8);
        uVar6 = lVar5 + 1;
      }
      fn_82A2A378(0,0,lVar8,uVar6,lVar7,uVar3,0,0);
      *(unsigned char *)((int)lVar7 + (int)uVar3) = 0;
      fn_82FFA510(lbl_832642F0,uVar4,lVar7);
      return uVar4;
    }
    if (*(short *)lVar5 == 0x2e) {
      *(short *)lVar5 = 0;
      goto LAB_82fe901c;
    }
    lVar5 = lVar5 + 2;
    sVar1 = *(short *)lVar5;
  } while( true );
}
