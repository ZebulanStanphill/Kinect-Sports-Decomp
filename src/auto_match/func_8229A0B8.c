extern unsigned int *auStack_50;
extern unsigned int *auStack_60;
extern unsigned int *auStack_70;
extern unsigned int *auStack_80;
extern unsigned int *auStack_90;
extern unsigned int *auStack_a0;
extern int fn_82273C88();
extern int fn_82273CD8();
extern int fn_82672C20();
extern int fn_82A1E110();
extern unsigned int uStack_b0;


void fn_8229A0B8(unsigned int *param_1)

{
  int iVar1;
  unsigned __int64 uVar2;
  unsigned int *puVar3;
  char cVar4;
  unsigned __int64 uVar5;
  unsigned char *puVar6;
  __int64 lVar7;
  double dVar8;
  double dVar9;
  unsigned __int64 uStack_b0;
  unsigned char auStack_a0 [8];
  double dStack_98;
  unsigned char auStack_90 [8];
  double dStack_88;
  unsigned char auStack_80 [8];
  double dStack_78;
  unsigned char auStack_70 [8];
  double dStack_68;
  unsigned char auStack_60 [8];
  char cStack_58;
  unsigned char auStack_50 [80];
  
  cVar4 = '\x01';
  uVar5 = 0;
  puVar3 = param_1 + 3;
  do {
    iVar1 = fn_82A1E110(puVar3,0xffffffff821aad20);
    if (iVar1 == 0) {
      cVar4 = -((uVar5 < 0xf) + -1);
      break;
    }
    uVar5 = uVar5 + 1;
    puVar3 = (unsigned int *)((int)puVar3 + 2);
  } while ((uVar5 & 0xffffffff) < 0x100);
  puVar3 = (unsigned int *)((int)&uStack_b0 + 4);
  lVar7 = 5;
  do {
    puVar3[3] = 0;
    puVar3 = puVar3 + 4;
    *puVar3 = 0;
    lVar7 = lVar7 + -1;
  } while (lVar7 != 0);
  uStack_b0 = (unsigned __int64)(unsigned int)param_1[2];
  dVar8 = (double)uStack_b0;
  fn_82273CD8(auStack_a0,3);
  uStack_b0 = (unsigned __int64)(int)param_1[0x484];
  dVar9 = (double)(__int64)uStack_b0;
  dStack_98 = dVar8;
  fn_82273CD8(auStack_90,3);
  uStack_b0 = (unsigned __int64)(int)param_1[0x485];
  dVar8 = (double)(__int64)uStack_b0;
  dStack_88 = dVar9;
  fn_82273CD8(auStack_80,3);
  uStack_b0 = (unsigned __int64)(int)param_1[0x486];
  dVar9 = (double)(__int64)uStack_b0;
  dStack_78 = dVar8;
  fn_82273CD8(auStack_70,3);
  dStack_68 = dVar9;
  fn_82273CD8(auStack_60,2);
  if (param_1[0x48a] == 0) {
    uVar2 = 0xffffffff821aad24;
  }
  else {
    uVar2 = 0xffffffff821aad44;
  }
  cStack_58 = cVar4;
  fn_82672C20(*param_1,uVar2,auStack_a0,5);
  param_1[0x483] = 1;
  param_1[0x48a] = 1;
  puVar6 = auStack_50;
  param_1[0x48b] = 0;
  lVar7 = 4;
  do {
    puVar6 = puVar6 + -0x10;
    fn_82273C88(puVar6);
    lVar7 = lVar7 + -1;
  } while (-1 < lVar7);
  return;
}

