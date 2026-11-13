extern unsigned int lbl_8323A960;


void fn_82CE44A8(unsigned int param_1)

{
  unsigned int *puVar1;
  short sVar2;
  
  puVar1 = lbl_8323A960;
  if ((lbl_8323A960 != (unsigned int *)0x0) && (*(short *)(lbl_8323A960 + 1) != 0)) {
    sVar2 = *(short *)((int)lbl_8323A960 + 6) + -1;
    *(short *)((int)lbl_8323A960 + 6) = sVar2;
    if (sVar2 == 0) {
      (**(int (***)())*puVar1)(puVar1,1);
    }
  }
  lbl_8323A960 = (unsigned int *)param_1;
  return;
}

