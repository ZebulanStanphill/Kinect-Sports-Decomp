typedef struct { unsigned int *owner; int next; } Entry_82E1B0A8;
typedef struct { Entry_82E1B0A8 *entries; int pad[2]; char hash[4]; } Map_82E1B0A8;
typedef struct { char pad[0x10]; int heap; } Ctx_82E1B0A8;
extern int fn_82CEA280(void *hash, unsigned int key, unsigned int def);
extern void fn_82CEA160(void *hash, int heap, unsigned int key, int index);
extern int fn_82E1BD60(Map_82E1B0A8 *m);
extern Ctx_82E1B0A8 *fn_82CE5410(void);
extern void fn_82E0E240(Map_82E1B0A8 *m, unsigned int key, int index);

void fn_82E1B0A8(Map_82E1B0A8 *m, unsigned int key, unsigned int *owner)
{
    unsigned int old = *owner;
    int i;
    if (old != 0) {
        i = fn_82CEA280(m->hash, old, 0xffffffff);
        while (i != 0xffffffff) {
            Entry_82E1B0A8 *e = &m->entries[i];
            if (e->owner == owner) {
                if (key == old) {
                    return;
                }
                fn_82E0E240(m, old, i);
                break;
            }
            i = e->next;
        }
    }
    if (key != 0) {
        int head = fn_82CEA280(m->hash, key, 0xffffffff);
        int n = fn_82E1BD60(m);
        Entry_82E1B0A8 *e = &m->entries[n];
        e->owner = owner;
        e->next = head;
        { Ctx_82E1B0A8 *ctx = fn_82CE5410(); fn_82CEA160(m->hash, ctx->heap, key, n); }
    }
    *owner = key;
}
