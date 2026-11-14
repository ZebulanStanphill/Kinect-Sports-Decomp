typedef struct Pair_82D78178 {
    unsigned char a;
    unsigned char b;
    unsigned char pad[2];
} Pair_82D78178;

typedef struct Set_82D78178 {
    Pair_82D78178 entries[8];
    unsigned char pad20;
    unsigned char count;
} Set_82D78178;

void fn_82D78178(unsigned char *result, Set_82D78178 *set, Pair_82D78178 *key)
{
    int i;
    for (i = set->count - 1; i >= 0; i--) {
        if (set->entries[i].a == key->a && set->entries[i].b == key->b) {
            *result = 1;
            return;
        }
    }
    *result = 0;
}
