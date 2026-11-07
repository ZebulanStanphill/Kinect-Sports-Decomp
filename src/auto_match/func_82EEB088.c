typedef struct Entry_82EEB088 {
    unsigned int id;
    unsigned char type;
    unsigned char pad5;
    unsigned short value;
} Entry_82EEB088;

typedef struct Obj_82EEB088 {
    char pad[0xe0];
    Entry_82EEB088 **head;
} Obj_82EEB088;

extern void fn_82E58BE8(Obj_82EEB088 *o, void **out);
extern void fn_82E4FE40(void *p);

static __forceinline int notNull_82EEB088(Entry_82EEB088 **p)
{
    if (p) return 1;
    return 0;
}

int fn_82EEB088(Obj_82EEB088 *o, unsigned int id, unsigned char type, unsigned short *out)
{
    int hr = 0;

    if (out == 0) {
        hr = 0x80004003;
    } else {
        *out = 1;
        while (notNull_82EEB088(o->head)) {
            Entry_82EEB088 *e = *o->head;
            void *tmp;
            if (e->id == id && e->type == type) {
                *out = e->value;
                break;
            }
            tmp = 0;
            fn_82E58BE8(o, &tmp);
            if (tmp != 0) {
                fn_82E4FE40(tmp);
            }
            tmp = 0;
        }
    }
    return hr;
}
