extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FEF680();
extern int fn_8301BCA0();
extern int fn_8301BEA0();
extern int fn_8301CD48();
extern int fn_8301CFE8();
extern int fn_8301E120();
extern int fn_8303A418();
extern int fn_8303A5E8();
extern unsigned int lbl_831BC770;


unsigned __int64 fn_8301D200(int param_1,unsigned __int64 param_2,unsigned __int64 param_3)

{
  unsigned int *puVar1;
  unsigned int uVar2;
  char cVar4;
  int iVar3;
  int *piVar5;
  unsigned int uVar6;
  unsigned __int64 uVar7;
  int iVar8;
  
  puVar1 = (unsigned int *)fn_8303A418(param_2,param_3);
  if (puVar1 == (unsigned int *)0x0) {
    return 2;
  }
  if ((param_3 & 0xff) != 0) {
    uVar2 = fn_82FEF680(param_2,param_1 + 400);
    *(unsigned int *)(param_1 + 0x194) = uVar2;
  }
  cVar4 = '\0';
  if (*(int *)(param_1 + 0x194) != 0) {
    cVar4 = fn_8301CD48(param_1,param_2);
  }
  if (cVar4 == '\0') {
LAB_8301d2c0:
    uVar7 = fn_8301BCA0(param_1,puVar1);
  }
  else if (*(int *)(param_1 + 0x194) == 1) {
    uVar7 = 3;
  }
  else {
    if (((cVar4 == '\0') || (*(int *)(param_1 + 400) != 0)) || ((param_3 & 0xff) == 0))
    goto LAB_8301d2c0;
    uVar7 = 1;
    *(unsigned char *)(param_1 + 0x3d) = 0;
  }
  iVar3 = 0;
  iVar8 = (int)uVar7;
  if ((iVar8 == 1) || (iVar8 == 0x3f)) {
    iVar3 = fn_82FA5060(lbl_831BC770,0x110);
    if (iVar3 == 0) {
      uVar7 = 0x34;
      goto LAB_8301d370;
    }
    fn_8301E120();
    *(unsigned int **)(iVar3 + 0xfc) = puVar1;
    *(unsigned int *)(iVar3 + 0x100) = 0;
    *(unsigned int *)(iVar3 + 0x104) = 0;
    uVar6 = 0;
    *(unsigned int *)(iVar3 + 0x108) = 0;
    piVar5 = (int *)(param_1 + 0xc);
    *(unsigned int *)(iVar3 + 0x10c) = 0;
    do {
      if (*piVar5 == 0) {
        *(int *)((uVar6 + 3) * 4 + param_1) = iVar3;
        break;
      }
      uVar6 = uVar6 + 1;
      piVar5 = piVar5 + 1;
    } while (uVar6 < 2);
  }
  if (iVar8 == 1) {
    uVar7 = fn_8301BEA0(param_1,iVar3);
    return uVar7;
  }
  if (iVar8 == 0x3f) {
    return 0x3f;
  }
  if (iVar3 != 0) {
    fn_8301CFE8(iVar3,1);
    return uVar7;
  }
LAB_8301d370:
  fn_8303A5E8(puVar1,1);
  uVar2 = lbl_831BC770;
  (**(int (***)())*puVar1)(puVar1,0);
  fn_82FA5190(uVar2,puVar1);
  return uVar7;
}

