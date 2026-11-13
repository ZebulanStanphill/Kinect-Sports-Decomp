extern int fn_822315A0();
extern int fn_8223AAC0();
extern int fn_8235A028();
extern int fn_8265C9E0();
extern unsigned int lbl_82196750;
extern unsigned int lbl_821A8D8C;
extern unsigned int lbl_821B2988;
extern unsigned int lbl_821B5EBC;


int * fn_82412818(int *param_1,unsigned __int64 param_2,unsigned int param_3)

{
  int in_r0;
  unsigned int *puVar1;
  unsigned int *puVar2;
  char cVar3;
  unsigned int *puVar4;
  unsigned int *puVar5;
  unsigned int *puVar6;
  unsigned int uVar7;
  unsigned int uVar8;
  unsigned int uVar9;
  unsigned int in_register_000104d0;
  unsigned int in_register_000104d4;
  unsigned int in_register_000104d8;
  unsigned int in_vr77;
  unsigned int *apuStack_50 [2];
  int aiStack_48 [18];
  
  puVar1 = (unsigned int *)fn_8265C9E0(0x40);
  if (puVar1 == (unsigned int *)0x0) {
    puVar1 = (unsigned int *)0x0;
  }
  else {
    puVar1[1] = 1;
    *puVar1 = &lbl_821A8D8C;
    puVar1[2] = 1;
    if (puVar1 + 4 != (unsigned int *)0x0) {
      puVar1[5] = param_3;
      puVar1[4] = &lbl_821B5EBC;
      puVar2 = (unsigned int *)((unsigned int)(puVar1 + 8) & 0xfffffff0);
      *puVar2 = in_register_000104d0;
      puVar2[1] = in_register_000104d4;
      puVar2[2] = in_register_000104d8;
      puVar2[3] = in_vr77;
      puVar2 = (unsigned int *)((unsigned int)(&lbl_82196750 + in_r0) & 0xfffffff0);
      uVar7 = puVar2[1];
      uVar8 = puVar2[2];
      uVar9 = puVar2[3];
      puVar4 = (unsigned int *)((unsigned int)(puVar1 + 0xc) & 0xfffffff0);
      *puVar4 = *puVar2;
      puVar4[1] = uVar7;
      puVar4[2] = uVar8;
      puVar4[3] = uVar9;
    }
  }
  puVar2 = (unsigned int *)fn_8265C9E0(0xc);
  if (puVar2 == (unsigned int *)0x0) {
    puVar2 = (unsigned int *)0x0;
  }
  else {
    *puVar2 = &lbl_821B2988;
    puVar2[1] = 0;
    puVar2[2] = 0;
    if ((puVar1 != (unsigned int *)0x0) && (cVar3 = fn_8223AAC0(puVar1), cVar3 != '\0')) {
      if (puVar2[2] != 0) {
        fn_822315A0();
      }
      puVar2[2] = puVar1;
      puVar2[1] = puVar1 + 4;
    }
  }
  puVar4 = (unsigned int *)0x0;
  apuStack_50[0] = puVar2;
  puVar5 = (unsigned int *)0x0;
  if ((puVar1 != (unsigned int *)0x0) && (cVar3 = fn_8223AAC0(puVar1), cVar3 != '\0')) {
    puVar4 = puVar1 + 4;
    puVar5 = puVar1;
  }
  *param_1 = 0;
  param_1[1] = 0;
  puVar6 = puVar5;
  if (param_1 != aiStack_48) {
    puVar6 = (unsigned int *)0x0;
    param_1[1] = (int)puVar5;
    *param_1 = (int)puVar4;
  }
  fn_8235A028(param_1 + 2,apuStack_50);
  if (puVar6 != (unsigned int *)0x0) {
    fn_822315A0(puVar6);
  }
  if (puVar2 != (unsigned int *)0x0) {
    (**(int (***)())*puVar2)(puVar2,1);
  }
  if (puVar1 != (unsigned int *)0x0) {
    fn_822315A0(puVar1);
  }
  return param_1;
}

