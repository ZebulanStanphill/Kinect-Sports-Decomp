void fn_83023180(float *dst, const float *src, float t)
{
  dst[0] = src[8];
  dst[1] = (src[0] - src[8]) * t;
  dst[2] = src[9];
  dst[3] = (src[1] - src[9]) * t;
  dst[4] = src[10];
  dst[5] = (src[2] - src[10]) * t;
  dst[6] = src[13];
  dst[7] = (src[5] - src[13]) * t;
  dst[8] = src[11];
  dst[9] = (src[3] - src[11]) * t;
  dst[10] = src[12];
  dst[11] = (src[4] - src[12]) * t;
}
