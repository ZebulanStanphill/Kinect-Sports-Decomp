typedef struct { unsigned int len; int pad; char data[1]; } Str;
typedef struct { int pad[2]; unsigned int a; unsigned int str; unsigned int b; } Self;
extern unsigned int fn_8268AF70(const char *data, unsigned int len, unsigned int seed);

unsigned int fn_82766D00(Self *s)
{
  unsigned int h = fn_8268AF70(((Str *)(s->str & ~3))->data, ((Str *)(s->str & ~3))->len & 0x7fffffff, 0x1505);
  return (s->a >> 7 ^ s->b ^ s->a) ^ h;
}
