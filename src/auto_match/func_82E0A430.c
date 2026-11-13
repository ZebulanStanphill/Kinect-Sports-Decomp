extern unsigned int lbl_8323AE68;
extern unsigned int lbl_8323AE98;
extern unsigned int lbl_8323AEC8;
extern unsigned int lbl_8323AEF8;
extern unsigned int lbl_832654F0;
extern unsigned int lbl_83265550;
extern unsigned int uStack_34;


void fn_82E0A430(unsigned int *param_1,int param_2)

{
  unsigned int *puVar1;
  __int64 lVar2;
  unsigned int uStack_34;
  unsigned char *apuStack_30 [12];
  
  apuStack_30[0] = &lbl_8323AE68;
  apuStack_30[1] = &lbl_8323AEF8;
  apuStack_30[2] = &lbl_8323AEC8;
  apuStack_30[3] = &lbl_8323AE98;
  if (param_2 == 1) {
    apuStack_30[0] = &lbl_832654F0;
    apuStack_30[1] = &lbl_83265550;
  }
  lVar2 = 4;
  puVar1 = &uStack_34;
  do {
    puVar1 = puVar1 + 1;
    (**(int (***)())(*(int *)*param_1 + 0x1c))((int *)*param_1,*puVar1,0);
    lVar2 = lVar2 + -1;
  } while (lVar2 != 0);
  return;
}

