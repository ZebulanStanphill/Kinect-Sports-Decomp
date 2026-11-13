#define ZEXT48(x) ((unsigned __int64)((unsigned int)(x)))
extern int fn_82F6E8D4();
extern int fn_82FAB9C0();
extern int fn_82FE8948();
extern int fn_8300E980();
extern int fn_8301E690();
extern unsigned int lbl_832642E0;
extern unsigned int register0x0000000c;
extern unsigned int stack0x00000000;


unsigned int fn_82FEA470(unsigned __int64 param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned __int64 uVar2;
  int *piVar3;
  int iVar4;
  unsigned int uVar5;
  unsigned __int64 uVar6;
  __int64 lVar7;
  
  puVar1 = (unsigned int *)(ZEXT48(&stack0x00000000) - 0x80);
  *puVar1 = register0x0000000c;
  uVar2 = fn_82FE8948();
  piVar3 = (int *)fn_82FAB9C0((unsigned __int64)lbl_832642E0 + 0x1628,uVar2);
  uVar5 = 0;
  if (piVar3 != (int *)0x0) {
    uVar6 = (param_3 & 0x3fffffff) * -4 & 0xfffffff0;
    fn_82F6E8D4();
    uVar5 = 0;
    lVar7 = (ZEXT48(&stack0x00000000) - 0x80) + uVar6;
    *(unsigned int *)lVar7 = *puVar1;
    lVar7 = lVar7 + 0x50;
    iVar4 = fn_8301E690(piVar3,param_2,lVar7,param_3);
    if (iVar4 == 1) {
      uVar5 = fn_8300E980(piVar3 + 5,piVar3[3],lVar7,param_3);
    }
    (**(int (***)())(*piVar3 + 8))(piVar3);
  }
  return uVar5;
}

