typedef struct {
  int count;
  int mask;
} Tab_8269B3A0;

typedef struct {
  Tab_8269B3A0 *tab;
} Hash_8269B3A0;

typedef struct {
  int next;
  char pad4[0x20];
} Ent_8269B3A0;

typedef struct {
  Hash_8269B3A0 *hash;
  int index;
} It_8269B3A0;

#define E(t, i) (((Ent_8269B3A0 *)((t) + 1))[i])

void fn_8269B3A0(It_8269B3A0 *it)
{
  Hash_8269B3A0 *h = it->hash;

  if (it->index <= h->tab->mask) {
    it->index++;
    while ((unsigned int)it->index <= (unsigned int)it->hash->tab->mask) {
      if (E(it->hash->tab, it->index).next != -2) break;
      it->index++;
    }
  }
}
