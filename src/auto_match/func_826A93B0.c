typedef struct {
  int count;
  int mask;
} Tab_826A93B0;

typedef struct {
  Tab_826A93B0 *tab;
} Hash_826A93B0;

typedef struct {
  int next;
  char pad4[0x1c];
} Ent_826A93B0;

typedef struct {
  Hash_826A93B0 *hash;
  int index;
} It_826A93B0;

#define E(t, i) (((Ent_826A93B0 *)((t) + 1))[i])

void fn_826A93B0(It_826A93B0 *it)
{
  Hash_826A93B0 *h = it->hash;

  if (it->index <= h->tab->mask) {
    it->index++;
    while ((unsigned int)it->index <= (unsigned int)it->hash->tab->mask) {
      if (E(it->hash->tab, it->index).next != -2) break;
      it->index++;
    }
  }
}
