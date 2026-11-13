typedef struct Ent_829D36D8 { char pad0[0x1c]; unsigned key; char pad20[0x38]; } Ent_829D36D8;
typedef struct Pool_829D36D8 { char pad[0x8a0]; Ent_829D36D8 e[2]; } Pool_829D36D8;

Ent_829D36D8 *fn_829D3750(Pool_829D36D8 *p, unsigned key)
{
  unsigned i;
  Ent_829D36D8 *e;
  unsigned *k;
  unsigned *k0;

  e = 0;
  k0 = &p->e[0].key;
  for (i = 0, k = k0; i < 2; i++, k += 0x16) {
    if (*k == key) {
      return 0;
    }
  }
  for (i = 0, k = k0; i < 2; i++, k += 0x16) {
    if (*k == 0) {
      e = &p->e[i];
      if (e != 0) {
        e->key = key;
      }
      break;
    }
  }
  return e;
}
