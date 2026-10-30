typedef struct {
  int count;
  int mask;
} Tab_826BE020;

typedef struct {
  Tab_826BE020 *tab;
} Hash_826BE020;

typedef struct {
  int next;
  char pad4[0x2c];
} Ent_826BE020;

typedef struct {
  Hash_826BE020 *hash;
  int index;
} It_826BE020;

#define E(t, i) (((Ent_826BE020 *)((t) + 1))[i])

void fn_826BE020(It_826BE020 *it)
{
  Hash_826BE020 *h = it->hash;

  if (it->index <= h->tab->mask) {
    it->index++;
    while ((unsigned int)it->index <= (unsigned int)it->hash->tab->mask) {
      if (E(it->hash->tab, it->index).next != -2) break;
      it->index++;
    }
  }
}
