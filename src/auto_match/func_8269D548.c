extern unsigned int *auStack_a0;
extern unsigned int *auStack_b0;
extern unsigned int fStack_bc;
extern unsigned int fStack_c0;
extern int fn_8268CC00();
extern int fn_8268D008();
extern int fn_82696330();
extern int fn_8269A240();
extern int fn_82F6A540();
extern int fn_82F6A58C();
extern unsigned int lbl_82005720;
extern unsigned int uStack_5c;
extern unsigned int uStack_60;
extern unsigned int uStack_64;
extern unsigned int uStack_68;
extern unsigned int uStack_6c;
extern unsigned int uStack_70;
extern unsigned int uStack_7c;
extern unsigned int uStack_80;
extern unsigned int uStack_84;
extern unsigned int uStack_88;
extern unsigned int uStack_8c;
extern unsigned int uStack_90;
extern unsigned int uStack_b4;
extern unsigned int uStack_b8;


void fn_8269D548(void)

{
  char cVar1;
  int *piVar2;
  int iVar3;
  double dVar4;
  double dVar5;
  double dVar6;
  double dVar7;
  double dVar8;
  double dVar9;
  struct { float first; float second; } stack_pair_c0;

  unsigned int uStack_b8;
  unsigned int uStack_b4;
  unsigned char auStack_b0 [8];
  double dStack_a8;
  unsigned char auStack_a0 [8];
  double dStack_98;
  unsigned int uStack_90;
  unsigned int uStack_8c;
  unsigned int uStack_88;
  unsigned int uStack_84;
  unsigned int uStack_80;
  unsigned int uStack_7c;
  unsigned int uStack_70;
  unsigned int uStack_6c;
  unsigned int uStack_68;
  unsigned int uStack_64;
  unsigned int uStack_60;
  unsigned int uStack_5c;
  
  piVar2 = (int *)fn_82F6A540();
  iVar3 = (**(int (***)())(*piVar2 + 0x40))();
  dVar6 = (double)*(float *)(iVar3 + 0xa10);
  cVar1 = *(char *)(iVar3 + 0xa0d);
  dVar4 = (double)*(float *)(iVar3 + 0xa14);
  dVar7 = (double)*(float *)(iVar3 + 0xa18);
  dVar5 = (double)*(float *)(iVar3 + 0xa1c);
  dVar9 = (double)*(float *)(iVar3 + 0xa20);
  dVar8 = (double)*(float *)(iVar3 + 0xa24);
  if (piVar2 == *(int **)(iVar3 + 0xa08)) {
    uStack_b4 = *(unsigned int *)(iVar3 + 0x95c);
    uStack_b8 = *(unsigned int *)(iVar3 + 0x958);
    fn_8268CC00(&uStack_70);
    iVar3 = piVar2[8];
    if (iVar3 != 0) {
      fn_8268CC00(&uStack_90);
      fn_8269A240(iVar3,&uStack_90);
      uStack_70 = uStack_90;
      uStack_6c = uStack_8c;
      uStack_68 = uStack_88;
      uStack_64 = uStack_84;
      uStack_60 = uStack_80;
      uStack_5c = uStack_7c;
    }
    fn_8268D008(&uStack_70,&stack_pair_c0.first,&uStack_b8);
    stack_pair_c0.first = (float)(dVar9 + (double)stack_pair_c0.first);
    stack_pair_c0.second = (float)(dVar8 + (double)stack_pair_c0.second);
    if (cVar1 != '\0') {
      dVar8 = (double)stack_pair_c0.first;
      if (dVar7 <= (double)stack_pair_c0.first) {
        dVar8 = dVar7;
      }
      if (dVar8 < dVar6) {
        dVar8 = dVar6;
      }
      stack_pair_c0.first = (float)dVar8;
      if ((double)stack_pair_c0.second < dVar5) {
        dVar5 = (double)stack_pair_c0.second;
      }
      if (dVar4 <= dVar5) {
        stack_pair_c0.second = (float)dVar5;
      }
      else {
        stack_pair_c0.second = (float)dVar4;
      }
    }
    (**(int (***)())(*piVar2 + 0x14))(piVar2,0);
    auStack_b0[0] = 3;
    dStack_a8 = (double)stack_pair_c0.first * lbl_82005720;
    dVar5 = lbl_82005720;
    (**(int (***)())(*piVar2 + 0xfc))(piVar2,0,auStack_b0,0);
    fn_82696330(auStack_b0);
    dStack_98 = (double)stack_pair_c0.second * dVar5;
    auStack_a0[0] = 3;
    (**(int (***)())(*piVar2 + 0xfc))(piVar2,1,auStack_a0,0);
    fn_82696330(auStack_a0);
  }
  fn_82F6A58C();
  return;
}

