extern unsigned int fn_8240D930(void *e);

typedef struct { char data[0x1c]; } Elem_828D7538;

typedef struct {
    char pad[0xc];
    Elem_828D7538 *first;
    Elem_828D7538 *last;
} Vec_828D7538;

Elem_828D7538 *fn_828D7538(Vec_828D7538 *v, unsigned int key)
{
    Elem_828D7538 *it;
    for (it = v->first; it != v->last; it++) {
        if (fn_8240D930(it) == key) {
            return it;
        }
    }
    return 0;
}
