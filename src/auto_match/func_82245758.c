extern unsigned int *auStack_40;
extern int fn_82230110();
extern int fn_82230300();
extern int fn_823BC650();
extern int fn_8251F720();
extern int fn_8251FA58();
extern int fn_8258E3A8();
extern int fn_828EA268();
extern int fn_82F63EC8();
extern unsigned int lbl_83298ED0;
extern unsigned int lbl_83298EDC;


void fn_82245758(int param_1,unsigned __int64 param_2)

{
  unsigned int *puVar1;
  int *piVar2;
  int iVar4;
  unsigned __int64 uVar3;
  unsigned int *puVar5;
  int aiStack_50 [4];
  unsigned char auStack_40 [64];
  
  if ((lbl_83298EDC & 1) == 0) {
    lbl_83298EDC = lbl_83298EDC | 1;
    fn_823BC650();
    fn_82F63EC8(0xffffffff8313d1c0);
  }
  iVar4 = fn_8251F720(param_2,0);
  if (iVar4 == 0) {
    puVar5 = (unsigned int *)0x0;
    goto code_r0x82245828;
  }
  uVar3 = fn_82230110(auStack_40,iVar4);
  fn_8258E3A8(aiStack_50,0xffffffff83298ecc,uVar3);
  fn_82230300(auStack_40,1,0);
  if (aiStack_50[0] == lbl_83298ED0) {
code_r0x82245814:
    puVar5 = (unsigned int *)0x0;
  }
  else {
    if (*(int *)(aiStack_50[0] + 0x2c) != *(int *)(iVar4 + 0x34)) goto code_r0x82245814;
    puVar5 = (unsigned int *)(**(int (***)())(aiStack_50[0] + 0x28))(iVar4);
  }
  fn_8251FA58(iVar4);
code_r0x82245828:
  puVar1 = *(unsigned int **)(param_1 + 0x308);
  if (puVar5 != puVar1) {
    if (puVar1 != (unsigned int *)0x0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
    *(unsigned int **)(param_1 + 0x308) = puVar5;
  }
  piVar2 = *(int **)(param_1 + 0x308);
  if (piVar2 != (int *)0x0) {
    (**(int (***)())(*piVar2 + 0xc))(piVar2);
    iVar4 = fn_828EA268(piVar2[4]);
    piVar2[5] = iVar4;
    (**(int (***)())(*piVar2 + 4))(piVar2);
    iVar4 = fn_828EA268();
    piVar2[6] = iVar4;
    (**(int (***)())(*piVar2 + 8))(piVar2);
    iVar4 = fn_828EA268();
    piVar2[3] = iVar4;
    piVar2[7] = 1;
  }
  return;
}

