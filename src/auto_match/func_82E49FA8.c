typedef struct Link_82E49FA8 { struct Link_82E49FA8 *next, *prev; } Link_82E49FA8;
typedef struct List_82E49FA8 { int unk; Link_82E49FA8 head; } List_82E49FA8;
typedef struct Entry_82E49FA8 { Link_82E49FA8 link; int active; unsigned int id; } Entry_82E49FA8;

static __forceinline Link_82E49FA8 *First(List_82E49FA8 *l) { return l->head.next != &l->head ? l->head.next : 0; }

long fn_82E49FA8(List_82E49FA8 *self, unsigned int id)
{
    long hr = 0x80004005;
    Link_82E49FA8 *l = First(self);
    while (l) {
        Entry_82E49FA8 *e = (Entry_82E49FA8 *)l;
        l = l->next != &self->head ? l->next : 0;
        if (e->id == id) {
            hr = 0;
            e->active = 0;
            break;
        }
    }
    return hr;
}
