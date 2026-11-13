typedef struct { int pad[12]; int key; } Item;
int fn_82964E10(unsigned a, unsigned b, int *p)
{
    Item **v = (Item **)p[6];
    int x = v[a]->key, y = v[b]->key;
    if (x < y) return -1;
    if (x > y) return 1;
    if (a < b) return -1;
    return a > b;
}
