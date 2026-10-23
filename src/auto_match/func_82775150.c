typedef struct Entry { int v[8]; } Entry;
typedef struct Table {
    int a;
    unsigned int mask;
    int b, c;
    Entry entries[1];
} Table;
typedef struct Key { unsigned int a, b; } Key;
typedef struct Map { Table *t; } Map;

extern int fn_82774690(Map *m, Key *k, unsigned int h);

Entry *fn_82775150(Map *m, Key *k)
{
    Table *t = m->t;
    if (t != 0) {
        int i = fn_82774690(m, k, (k->a >> 6 ^ k->b ^ k->a) & t->mask);
        if (i >= 0) {
            return &t->entries[i];
        }
    }
    return 0;
}
