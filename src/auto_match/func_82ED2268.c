typedef struct { int p0; int p4; int p8; int pc; unsigned key; char body[0x402c-0x14]; } Ent_82ED2268;
typedef struct {
  char pad[0x18];
  Ent_82ED2268 *base;
  unsigned count;
  char pad2[0x30-0x20];
  unsigned cur;
} Self_82ED2268;

int fn_82ED2268(Self_82ED2268 *s, unsigned key)
{
  unsigned i;
  for (i = 0; i < s->count; i++) {
    if (s->base[i].key == key) { s->cur = i; return (int)&s->base[i]; }
  }
  return 0;
}
