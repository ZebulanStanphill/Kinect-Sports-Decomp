extern unsigned char fn_8284C860(int);
extern double fn_82F68918(double);


float fn_825CAB28(int param_1)

{
  float scale;
  unsigned char n;
  float v;

  scale = *(float *)(*(int *)(param_1 + 0x4c) + 0x828);
  n = fn_8284C860(*(int *)(*(int *)(*(int *)(param_1 + 0x54) + 0x8c) + 0x14));
  v = (*(float *)(*(int *)(param_1 + 0x54) + 0x160) / (float)n) * scale;
  return v - (float)fn_82F68918(v);
}
