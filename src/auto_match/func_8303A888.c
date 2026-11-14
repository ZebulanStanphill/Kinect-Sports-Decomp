void fn_8303A888(float *state, const float *coef, float **pbuf, unsigned int count)
{
  float x1 = state[0];
  float x2 = state[1];
  float y1 = state[2];
  float y2 = state[3];
  float b0 = coef[0];
  float b1 = coef[1];
  float a1 = coef[2];

  while (count--) {
    float *s = (*pbuf)++;
    float in = *s;
    float out = a1 * y1 + (y2 * coef[3] + ((in + x2) * b0 + b1 * x1));
    x2 = x1;
    x1 = in;
    y2 = y1;
    y1 = out;
    *s = out;
  }
  state[0] = x1;
  state[1] = x2;
  state[2] = y1;
  state[3] = y2;
}
