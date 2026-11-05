extern int lbl_83189CB8[];
void fn_82E9AB68(char *self, int a, int level, int *out)
{
  int lv;
  if (*(int *)(self + 0x6da0) == 0 || (lv = level >> 8, 0x10 < lv)) {
    lv = 0x10;
  } else if (lv < 4) {
    lv = 4;
  }
  out[0] = lbl_83189CB8[0] * lv * a >> 3;
  out[1] = lbl_83189CB8[1] * lv * a >> 3;
  out[2] = lbl_83189CB8[2] * lv * a >> 3;
  out[3] = lbl_83189CB8[3] * lv * a >> 3;
  out[4] = lbl_83189CB8[4] * lv * a >> 3;
  out[5] = lbl_83189CB8[5] * lv * a >> 3;
}
