typedef struct Buffer_8303AE20 {
  float *data;
  char pad4[0xc - 0x4];
  unsigned short stride;     /* 0x0c */
  unsigned short count;      /* 0x0e */
} Buffer_8303AE20;

typedef struct Filter_8303AE20 {
  float coef[4];
  char pad10[0x21 - 0x10];
  unsigned char bypass;      /* 0x21 */
} Filter_8303AE20;

extern void fn_8303A888(float *state, Filter_8303AE20 *coef, float **pbuf, unsigned int count);

static __forceinline void FlushDenormal(float *p)
{
  *p = *p + 1.0e-18f - 1.0e-18f;
}

typedef struct State_8303AE20 { float s[4]; } State_8303AE20;

static __forceinline void Flush(State_8303AE20 *st)
{
  FlushDenormal(&st->s[2]);
  FlushDenormal(&st->s[3]);
}

void fn_8303AE20(Buffer_8303AE20 *buf, Filter_8303AE20 *filter, State_8303AE20 *state)
{
  float *data[2];
  unsigned int count;
  data[0] = buf->data;
  data[1] = data[0] + buf->stride;
  count = buf->count;
  if (!filter->bypass) {
    fn_8303A888(state[0].s, filter, &data[0], count);
    fn_8303A888(state[1].s, filter, &data[1], count);
  }
  Flush(&state[0]);
  Flush(&state[1]);
}
