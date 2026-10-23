typedef struct Entry {
    int key;
    int a;
    int b;
    int c;
    int d;
    int e;
    int f;
    int g;
} Entry;

typedef struct Table {
    int pad0;
    Entry *entries;
    int pad8;
    int padc;
    unsigned int count;
} Table;

void fn_8245D348(Table *t)
{
    unsigned int i;

    for (i = 0; i < t->count; i++) {
        t->entries[i].a = 0;
        t->entries[i].c = 0;
        t->entries[i].b = 0;
        t->entries[i].d = 0;
        t->entries[i].e = 0;
        t->entries[i].f = 0;
        t->entries[i].g = 0;
    }
}
