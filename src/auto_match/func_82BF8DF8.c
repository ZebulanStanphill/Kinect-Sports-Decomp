extern int fn_82BE51E8();
extern unsigned int lbl_820E8968;

int *fn_82BF8DF8(int *param_1, int param_2)
{
  fn_82BE51E8(param_1, "CMassiveRecordImpression");
  param_1[5] = param_2;
  param_1[0xe] = 0;
  *param_1 = (int)&lbl_820E8968;
  ((float *)param_1)[10] = 0.0f;
  param_1[0xd] = 0;
  ((float *)param_1)[8] = 0.0f;
  param_1[0xc] = 0;
  param_1[6] = 0;
  *(unsigned __int64 *)(param_1 + 0x14) = 0;
  *(unsigned __int64 *)(param_1 + 0x12) = 0;
  *(unsigned __int64 *)(param_1 + 0x10) = 0;
  *(unsigned short *)(param_1 + 0xb) = 0;
  *(unsigned short *)(param_1 + 0x16) = 0;
  *(unsigned short *)(param_1 + 9) = 0;
  *(unsigned short *)(param_1 + 7) = 0;
  return param_1;
}
