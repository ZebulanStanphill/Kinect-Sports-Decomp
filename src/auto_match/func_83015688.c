typedef struct S24_83015688 { int v[6]; } S24_83015688;
typedef struct Slot_83015688 { int f0; int f4; S24_83015688 val; } Slot_83015688;
extern Slot_83015688 *fn_82FFE0F0(void *p);

int fn_83015688(char *self, int unused, S24_83015688 *src)
{
  Slot_83015688 *s = fn_82FFE0F0(self + 4);
  if (s != 0) {
    s->val = *src;
    return 1;
  }
  return 2;
}
