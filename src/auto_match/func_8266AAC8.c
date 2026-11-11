typedef struct { unsigned v; } It_8266AAC8;
extern It_8266AAC8 *fn_8266ABC0(It_8266AAC8 *);
It_8266AAC8 *fn_8266AAC8(It_8266AAC8 *self, It_8266AAC8 *it, int n)
{
  It_8266AAC8 tmp = *it;
  fn_8266ABC0(it);
  *self = tmp;
  return self;
}
