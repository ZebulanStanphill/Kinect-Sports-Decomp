typedef struct Link {
    struct Link *prev;
    struct Link *next;
    int *owner;
} Link;

typedef struct Entry {
    struct Entry *prev;
    struct Entry *next;
    int type;
    int a;
    int b;
    unsigned int id;
} Entry;

extern void fn_82522ED8(Entry *e);

int fn_824E3650(Link *list, int *msg)
{
    int *o;
    Link *n;
    int type;
    switch (*msg) {
    case 0x45:
        break;
    case 0x6d:
        for (n = list->next; n != 0; n = n->next) {
            o = n->owner;
            if (*o == *msg)
                goto found;
        }
        o = 0;
found:
        while (o != 0) {
            Entry *e;
            if ((unsigned int)o[3] == (unsigned int)msg[3]) {
                e = (Entry *)(o - 2);
                if (e->prev != 0)
                    e->prev->next = e->next;
                if (e->next != 0)
                    e->next->prev = e->prev;
                e->prev = 0;
                e->next = 0;
                fn_82522ED8(e);
                return 1;
            }
            type = *o;
            for (n = ((Link *)(o - 2))->next; n != 0; n = n->next) {
                o = n->owner;
                if (*o == type)
                    goto found2;
            }
            o = 0;
found2:;
        }
        break;
    default:
        return 0;
    }
    return 1;
}
