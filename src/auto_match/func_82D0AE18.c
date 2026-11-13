static const float lbl_82175388 = 2.3283064365386963e-10f;
void fn_82D0AE18(int *rng, float *out)
{
  unsigned u;
  u = rng[1] * 0x19660d + 0x3c6ef35f;
  rng[1] = u;
  out[0] = (float)u * lbl_82175388;
  u = rng[1] * 0x19660d + 0x3c6ef35f;
  rng[1] = u;
  out[1] = (float)u * lbl_82175388;
  u = rng[1] * 0x19660d + 0x3c6ef35f;
  rng[1] = u;
  out[2] = (float)u * lbl_82175388;
  u = rng[1] * 0x19660d + 0x3c6ef35f;
  rng[1] = u;
  out[3] = (float)u * lbl_82175388;
}
