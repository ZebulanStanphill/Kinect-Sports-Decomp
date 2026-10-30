typedef struct Key { unsigned int a; unsigned int b; unsigned int c; } Key;
typedef struct Entry { int v[6]; } Entry;
typedef struct Tab { int x0; unsigned int mask; int x8; int xc; Entry e[1]; } Tab;
typedef struct Map { Tab *tab; } Map;
extern int fn_8276F8F0(Map *m, Key *k, unsigned int h);
Entry *fn_8276FF08(Map *m, Key *k)
{
    if (m->tab != 0) {
        unsigned int h = ((k->a >> 6) ^ k->c ^ k->a) & m->tab->mask;
        int i = fn_8276F8F0(m, k, h);
        if (i >= 0) {
            return &m->tab->e[i];
        }
    }
    return 0;
}
