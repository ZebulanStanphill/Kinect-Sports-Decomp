void fn_82C2D0C8(int v, float *out, char *p, int i)
{
  out[i] = (float)v / (float)(1 << (*(unsigned short *)(p + 0x6e) - 1));
}
