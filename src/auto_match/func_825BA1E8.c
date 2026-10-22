extern int fn_82522ED8();

typedef struct Entry {
    unsigned int size;
    unsigned short type;
    unsigned short pad;
    unsigned int data[11];
    unsigned int ptr;
} Entry;

typedef struct Header {
    unsigned int count;
    unsigned int unk4;
    Entry first;
} Header;

void fn_825BA1E8(Header *param_1)
{
    unsigned int i;
    Entry *e;

    e = &param_1->first;
    for (i = 0; i < param_1->count; i++) {
        if (e->type == 2) {
            fn_82522ED8(e->ptr);
            e->ptr = 0;
        }
        e = (Entry *)((char *)e + e->size);
    }
    fn_82522ED8(param_1);
}
