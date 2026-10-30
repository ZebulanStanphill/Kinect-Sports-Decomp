void fn_82706AB8(float *o, int p)
{
  float d = *(float *)(p + 0xd4);
  float a = *(float *)(p + 0xc8);
  float b = *(float *)(p + 0xcc);
  float c = *(float *)(p + 0xd0);
  o[3] = d * 0.05f;
  o[2] = c * 0.05f;
  o[1] = b * 0.05f;
  o[0] = a * 0.05f;
}
