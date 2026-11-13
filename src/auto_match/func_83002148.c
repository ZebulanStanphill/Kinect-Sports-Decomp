extern int fn_82FA5190();
extern int fn_83007708();
extern int fn_83027438();
extern unsigned int lbl_8217BDC0;
extern unsigned int lbl_8217C940;
extern unsigned int lbl_831BC768;


void fn_83002148(unsigned int *param_1)

{
  int *piVar1;
  unsigned int *puVar2;
  unsigned int uVar3;
  int iVar4;
  
  piVar1 = (int *)param_1[0x15];
  *param_1 = &lbl_8217BDC0;
  param_1[7] = &lbl_8217C940;
  if (piVar1 != (int *)0x0) {
    iVar4 = *piVar1;
    if (iVar4 != piVar1[1]) {
      do {
        uVar3 = lbl_831BC768;
        puVar2 = *(unsigned int **)(iVar4 + 4);
        if (puVar2 != (unsigned int *)0x0) {
          (**(int (***)())*puVar2)(puVar2,0);
          fn_82FA5190(uVar3,puVar2);
        }
        iVar4 = iVar4 + 8;
      } while (iVar4 != *(int *)(param_1[0x15] + 4));
    }
    piVar1 = (int *)param_1[0x15];
    if (*piVar1 != 0) {
      piVar1[1] = *piVar1;
      fn_82FA5190(lbl_831BC768);
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
    }
    fn_82FA5190(lbl_831BC768,param_1[0x15]);
    param_1[0x15] = 0;
  }
  *(unsigned char *)((int)param_1 + 0x3d) = *(unsigned char *)((int)param_1 + 0x3d) & 0xfe;
  if (param_1[0x19] != 0) {
    fn_83027438();
    uVar3 = lbl_831BC768;
    puVar2 = (unsigned int *)param_1[0x19];
    if (puVar2 != (unsigned int *)0x0) {
      (**(int (***)())*puVar2)(puVar2,0);
      fn_82FA5190(uVar3,puVar2);
    }
    param_1[0x19] = 0;
  }
  if (param_1[0x12] != 0) {
    param_1[0x13] = param_1[0x12];
    fn_82FA5190(lbl_831BC768);
    param_1[0x12] = 0;
    param_1[0x13] = 0;
    param_1[0x14] = 0;
  }
  uVar3 = lbl_831BC768;
  puVar2 = (unsigned int *)param_1[0x1a];
  if (puVar2 != (unsigned int *)0x0) {
    (**(int (***)())*puVar2)(puVar2,0);
    fn_82FA5190(uVar3,puVar2);
  }
  if (param_1[0x1d] != 0) {
    fn_82FA5190(lbl_831BC768);
    param_1[0x1d] = 0;
  }
  piVar1 = (int *)param_1[0x1e];
  if (piVar1 != (int *)0x0) {
    if (*piVar1 != 0) {
      piVar1[1] = *piVar1;
      fn_82FA5190(lbl_831BC768);
      *piVar1 = 0;
      piVar1[1] = 0;
      piVar1[2] = 0;
    }
    fn_82FA5190(lbl_831BC768,param_1[0x1e]);
  }
  fn_83007708(param_1);
  return;
}

