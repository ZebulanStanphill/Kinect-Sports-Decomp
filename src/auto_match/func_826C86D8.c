typedef struct { char pad[0xa98]; void **items; unsigned int count; } Owner;
typedef struct Self { char pad[0xa0]; Owner *owner; char pad2[0x1c0 - 0xa4]; int active; } Self;

int fn_826C86D8(Self *s)
{
  Owner *o = s->owner;
  unsigned int n = o->count;
  unsigned int i;
  if (s->active != 0) {
    for (i = 0; i < n; i++) {
      if (o->items[i] == s) return i;
    }
  }
  return -1;
}
