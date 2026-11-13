typedef struct { int key; unsigned char value; } Entry_8269FB58;
extern Entry_8269FB58 *fn_8269DA30(void *map, void *key);
extern int fn_8269F060(void *map, void *key, unsigned char *out);

int fn_8269FB58(void *map, void *key, unsigned char *out, unsigned char direct)
{
  if (direct) {
    Entry_8269FB58 *e = fn_8269DA30(map, key);
    if (e) {
      if (out)
        *out = e->value;
      return 1;
    }
    return 0;
  }
  return fn_8269F060(map, key, out);
}
