extern int fn_82FA5060();
extern int fn_82FA5190();
extern int fn_82FF5CB8();
extern int fn_8302A9F8();
extern int fn_8302AA50();
extern int fn_8302AB88();
extern int fn_8302ABC0();
extern int fn_8302AC18();
extern unsigned int lbl_821AAD20;
extern unsigned int lbl_831BC768;
extern unsigned int lbl_832642E4;


unsigned int * fn_82FF59A8(int param_1,unsigned __int64 param_2,char param_3,int param_4)

{
  float fVar1;
  unsigned int *puVar2;
  float fVar3;
  unsigned int uVar4;
  int iVar5;
  unsigned int *puVar6;
  int *piVar7;
  int *piVar8;
  
  piVar8 = (int *)(param_1 + 0x14);
  if (param_4 != 1) {
    piVar8 = (int *)(param_1 + 8);
  }
  puVar6 = (unsigned int *)0x0;
  if ((unsigned int)(piVar8[1] - *piVar8 >> 2) < *(unsigned int *)(param_1 + 4)) {
    iVar5 = fn_82FA5060(lbl_831BC768,0x3c);
    if (iVar5 == 0) {
      puVar6 = (unsigned int *)0x0;
    }
    else {
      puVar6 = (unsigned int *)fn_8302A9F8();
      if (puVar6 != (unsigned int *)0x0) goto LAB_82ff5a84;
    }
  }
  piVar7 = (int *)*piVar8;
  fVar3 = lbl_821AAD20;
  if (piVar7 == (int *)piVar8[1]) {
    return puVar6;
  }
  do {
    fVar1 = (float)((unsigned int *)*piVar7)[8];
    if (fVar3 < fVar1) {
      fVar3 = fVar1;
      puVar6 = (unsigned int *)*piVar7;
    }
    piVar7 = piVar7 + 1;
  } while (piVar7 != (int *)piVar8[1]);
  if (puVar6 == (unsigned int *)0x0) {
    return (unsigned int *)0x0;
  }
  puVar6[7] = lbl_821AAD20;
  fn_8302AA50(puVar6,0);
  fn_8302AB88(puVar6);
  fn_82FF5CB8(piVar8,puVar6);
LAB_82ff5a84:
  iVar5 = fn_8302AC18(puVar6,param_2,*(unsigned int *)(lbl_832642E4 + 0x90));
  if (((iVar5 == 2) ||
      (puVar2 = (unsigned int *)piVar8[1], (unsigned int)piVar8[2] <= (unsigned int)((int)puVar2 - *piVar8 >> 2))) ||
     (piVar8[1] = (int)(puVar2 + 1), puVar2 == (unsigned int *)0x0)) {
    fn_8302ABC0(puVar6);
    uVar4 = lbl_831BC768;
    if (puVar6 != (unsigned int *)0x0) {
      (**(int (***)())*puVar6)(puVar6,0);
      fn_82FA5190(uVar4,puVar6);
    }
    puVar6 = (unsigned int *)0x0;
  }
  else {
    *puVar2 = puVar6;
    if (param_3 != '\0') {
      puVar6[0xd] = 1;
    }
  }
  return puVar6;
}

