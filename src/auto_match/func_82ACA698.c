typedef struct Node_82ACA698 { unsigned int w; int pad4; struct Node_82ACA698 *next; int padc; unsigned int f10; } Node_82ACA698;
typedef struct List_82ACA698 { int pad; Node_82ACA698 *head; struct { unsigned int pad:25; unsigned int active:1; unsigned int low:6; } flags; } List_82ACA698;
typedef struct Obj_82ACA698 { char pad[0x30]; unsigned int mask; } Obj_82ACA698;

static int notNull(Node_82ACA698 *p)
{
    if (p) return 1;
    return 0;
}

void fn_82ACA698(Obj_82ACA698 *self, List_82ACA698 *list, unsigned char set)
{
    Node_82ACA698 *p;
    unsigned char ok;
    unsigned int w;
    unsigned int bit;
    if (!(unsigned char)list->flags.active) {
        return;
    }
    p = list->head;
    while (notNull(p)) {
        if (p->f10 != 0) {
            w = p->w;
            if ((w & 0x40000000) != 0 && (w & 0xe000000) == 0) {
                ok = 1;
            } else {
                ok = 0;
            }
            if (ok) {
                if (set) {
                    bit = 1 << ((w >> 13) & 0xfff);
                    self->mask = self->mask | bit;
                } else {
                    bit = 1 << ((w >> 13) & 0xfff);
                    self->mask = self->mask & ~bit;
                }
            }
        }
        p = p->next;
    }
}
