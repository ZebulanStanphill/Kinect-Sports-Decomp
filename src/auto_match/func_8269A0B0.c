typedef struct { int pad; unsigned int count; int pad2; int x0c; } Self;
extern unsigned char fn_82699B40(Self *s, unsigned int i);

int fn_8269A0B0(Self *s)
{
  int ok = 1;
  unsigned int i;

  s->x0c = 0;
  for (i = 0; i < s->count;) {
    if (!fn_82699B40(s, i)) {
      i++;
      ok = 0;
    }
  }
  return ok;
}
