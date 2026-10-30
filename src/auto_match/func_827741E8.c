typedef struct {
  int count;
  int mask;
} Tab_827741E8;

typedef struct {
  Tab_827741E8 *tab;
} Hash_827741E8;

typedef struct {
  int next;
  char pad4[0x8];
} Ent_827741E8;

typedef struct {
  Hash_827741E8 *hash;
  int index;
} It_827741E8;

#define E(t, i) (((Ent_827741E8 *)((t) + 1))[i])

void fn_827741E8(It_827741E8 *it)
{
  Hash_827741E8 *h = it->hash;

  if (it->index <= h->tab->mask) {
    it->index++;
    while ((unsigned int)it->index <= (unsigned int)it->hash->tab->mask) {
      if (E(it->hash->tab, it->index).next != -2) break;
      it->index++;
    }
  }
}
