typedef struct Ent_82E14808 { int f0; int f4; unsigned f8; } Ent_82E14808;
typedef struct Obj_82E14808 { char pad[0x1c]; Ent_82E14808 **arr; int count; } Obj_82E14808;
extern int fn_82CFBBF0(void *, unsigned);

Ent_82E14808 *fn_82E14808(Obj_82E14808 *o, void *key, Ent_82E14808 *item)
{
  int i = 0;
  int j;
  int off = 0;
  Ent_82E14808 **p;
  Ent_82E14808 *e;
  do {
    if (item == 0 || i >= o->count) break;
    i++;
    p = (Ent_82E14808 **)((char *)o->arr + off);
    off += 4;
  } while (*p != item);
  j = i;
  if (j < o->count) {
    off = j << 2;
    do {
      e = *(Ent_82E14808 **)((char *)o->arr + off);
      if (key == 0) return e;
      if (fn_82CFBBF0(key, e->f8 & 0xfffffffe) == 0) return e;
      j++;
      off += 4;
    } while (j < o->count);
  }
  return 0;
}
