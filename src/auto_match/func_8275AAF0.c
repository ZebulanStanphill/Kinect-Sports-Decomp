typedef struct { int pad[3]; int value; } Entry;
extern Entry *fn_826D7C00(void *map, int key);

typedef struct { unsigned char flags; char pad[7]; char map[1]; } Self;
typedef struct { int pad[8]; int key; } Arg;

int fn_8275AAF0(Self *s, Arg *a)
{
  Entry *e;

  if ((s->flags & 0x40) || (s->flags & 0x10)) {
    e = fn_826D7C00(s->map, a->key);
    if (e != 0) {
      return e->value;
    }
  }
  return 0;
}
