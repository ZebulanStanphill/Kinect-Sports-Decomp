typedef struct Link_827B2F48 {
    unsigned short from;
    unsigned short to;
    int value;
} Link_827B2F48;

typedef struct Graph_827B2F48 {
    char pad0[0x48];
    char nodes[0x14];
    char links[4];
} Graph_827B2F48;

extern void *fn_827B26B0(void *set, const unsigned short *key);
extern void fn_827B1968(void *map, const Link_827B2F48 *link);

void fn_827B2F48(Graph_827B2F48 *self, int from, int to, int value)
{
    unsigned short key;
    Link_827B2F48 link;
    key = from;
    if (fn_827B26B0(self->nodes, &key) != 0) {
        key = to;
        if (fn_827B26B0(self->nodes, &key) != 0) {
            link.from = from;
            link.to = to;
            link.value = value;
            fn_827B1968(self->links, &link);
        }
    }
}
