typedef unsigned __int64 U64;
typedef struct { int a; int b; } Pair;
typedef struct Entry {
    char pad[0x28];
    int x28;
    int pad2c;
    Pair *x30;
    int pad34;
    int x38;
} Entry;
typedef struct { char pad[0x40]; Entry *entries; } Tbl;
typedef struct { char pad[0x48]; Tbl *tbl; } P3;
typedef struct { int x0; unsigned int n; int idx; int xc; int x10; } P2;
typedef struct { int x0; int x4; } P1;
extern void fn_82639F78(int a, unsigned int b, int c, int d, int e, U64 f);
void fn_82853BC0(P1 *p1, P2 *p2, P3 *p3)
{
    Entry *entries = p3->tbl->entries;
    int idx = p2->idx;
    fn_82639F78(p1->x4, p2->n, entries[idx].x30[entries[idx].x38].a, p2->x10, entries[idx].x28,
                0x8000000000000000ULL >> (((0x5f - p2->n) * 0x5556 >> 16) + 0x20));
}
