typedef struct { unsigned int a, x, y, z; } E;
typedef struct { char pad[0x14]; E **items; } S;

int fn_82967E78(S *s, int a, int b)
{
  if (s->items[a]->x == s->items[b]->x &&
      s->items[a]->y == s->items[b]->y &&
      s->items[a]->z == s->items[b]->z) {
    return 1;
  }
  return 0;
}
