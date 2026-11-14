typedef struct Buffer_8303ADB0 {
  float *data;
  char pad4[0xe - 0x4];
  unsigned short count;      /* 0x0e */
} Buffer_8303ADB0;

typedef struct Filter_8303ADB0 {
  float coef[4];
  char pad10[0x21 - 0x10];
  unsigned char bypass;      /* 0x21 */
} Filter_8303ADB0;

extern void fn_8303A888(float *state, Filter_8303ADB0 *coef, float **pbuf, unsigned int count);

static __forceinline void FlushDenormal(float *p)
{
  *p = *p + 1.0e-18f - 1.0e-18f;
}

void fn_8303ADB0(Buffer_8303ADB0 *buf, Filter_8303ADB0 *filter, float *state)
{
  float *data = buf->data;
  if (!filter->bypass)
    fn_8303A888(state, filter, &data, buf->count);
  FlushDenormal(&state[2]);
  FlushDenormal(&state[3]);
}
