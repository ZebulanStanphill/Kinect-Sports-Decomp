typedef struct { int pad[2]; void *src; float in; float out; unsigned char valid; } Value_830354F8;
extern float fn_83015B10(void *src, float in);
extern void fn_82FF18E8(void *self, float v, Value_830354F8 *value, unsigned char flag);

void fn_830354F8(void *self, int unused, Value_830354F8 *value)
{
  if (!value->valid) {
    value->out = fn_83015B10(value->src, value->in);
    value->valid = 1;
  }
  fn_82FF18E8(self, value->out, value, 1);
}
