extern int fn_822BD338();
extern int fn_822C72E0();
extern float lbl_821CC160;

void fn_823349C0(int param_1)
{
  float f;
  unsigned char cVar2;

  if (((*(int *)(param_1 + 0xc) != 0) &&
      (cVar2 = fn_822BD338(*(int *)(*(int *)(param_1 + 8) + 0x20) + 4,"lefthand_idlewithball"), cVar2 == '\0')) &&
     (cVar2 = fn_822BD338(*(int *)(*(int *)(param_1 + 8) + 0x20) + 4,"righthand_idlewithball"), cVar2 == '\0')) {
    return;
  }
  if (*(float *)(param_1 + 0x228) > *(float *)(param_1 + 0x238)) {
    fn_822C72E0(*(int *)(*(int *)(param_1 + 8) + 0x20),param_1 + 0x134);
    *(int *)(param_1 + 0x224) = 7;
    f = lbl_821CC160;
    *(float *)(param_1 + 0x228) = f;
    *(float *)(param_1 + 0x22c) = f;
  }
}
