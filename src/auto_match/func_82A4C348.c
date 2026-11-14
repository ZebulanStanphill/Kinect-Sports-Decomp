typedef struct Entry_82A4C348 {
    int v[3];
} Entry_82A4C348;

typedef struct Obj_82A4C348 {
    char pad[0x30];
    Entry_82A4C348 *entries;
    char pad2[0x48 - 0x34];
    int count;
} Obj_82A4C348;

extern void *memset(void *dst, int c, unsigned int n);

void fn_82A4C348(Obj_82A4C348 *self)
{
    memset(self->entries, 0, self->count * sizeof(Entry_82A4C348));
}
