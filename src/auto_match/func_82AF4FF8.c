typedef struct Vert {
    char pad[0xc];
    struct Graph *owner;
} Vert;

typedef struct Info {
    char pad[0x8];
    unsigned int flags;
    char pad0c[0x2c - 0xc];
    Vert *a;
    Vert *b;
} Info;

typedef struct Edge {
    unsigned int flags;
    int pad4;
    struct Edge *next;
    int padc;
    Info *info;
} Edge;

typedef struct Graph {
    int pad;
    Edge *edges;
} Graph;

unsigned int fn_82AF4FF8(int ctx, Graph *g1, Graph *g2)
{
    Edge *e1;
    Edge *e2;
    Info *i1;
    Info *i2;
    unsigned int result = 0;
    Graph *a1;
    Graph *a2;
    Graph *b1;
    Graph *b2;

    e1 = g1->edges;
    do {
        if (e1 != 0) {
            i1 = e1->info;
            if (i1 != 0 && (e1->flags & 0xe000000) != 0 && (i1->flags & 0x3f80) == 0x80) {
                e2 = g2->edges;
                do {
                    if (e2 != 0) {
                        i2 = e2->info;
                        if (i2 != 0 && (e2->flags & 0xe000000) != 0 && (i2->flags & 0x3f80) == 0x80) {
                            if (i1 == i2) {
                                result |= 4;
                            } else {
                                a1 = i1->a->owner;
                                b1 = i1->b->owner;
                                a2 = i2->a->owner;
                                b2 = i2->b->owner;
                                if ((a1 == g1 && a2 == g2 && b1 == b2) ||
                                    (b1 == g1 && b2 == g2 && a1 == a2)) {
                                    result |= 2;
                                } else if ((Info *)a1 == i2) {
                                    result |= 1;
                                }
                            }
                        }
                        e2 = e2->next;
                    }
                } while (e2 != 0);
            }
            e1 = e1->next;
        }
    } while (e1 != 0);
    return result;
}
