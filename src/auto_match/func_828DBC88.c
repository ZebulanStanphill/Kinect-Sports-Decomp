typedef struct Object_828DBC88 { char pad[0x80]; int type; unsigned *first, *last, *end; } Object_828DBC88;
void fn_8223C478(void *, int, int);
extern void fn_828E9DB8(void *, unsigned, int);
extern __declspec(noreturn) void fn_82F622E0(const char *);
static __forceinline unsigned *At(Object_828DBC88 *o, unsigned index) {
    if ((unsigned)(o->last-o->first) <= index) fn_82F622E0("invalid vector<T> subscript");
    return &o->first[index];
}

void fn_828DBC88(Object_828DBC88 *o, void *out) {
    unsigned value = o->type;
    fn_8223C478(out,2,0); fn_828E9DB8(out,value,2);
    switch(o->type) {
    case 2: {
        value = *At(o,0);
        fn_8223C478(out,16,0); fn_828E9DB8(out,value,16);
        break;
    }
    case 1: {
        unsigned *p = o->first;
        while (p != o->last) {
            fn_8223C478(out,1,0); fn_828E9DB8(out,1,1);
            value = *p;
            fn_8223C478(out,16,0); fn_828E9DB8(out,value,16);
            ++p;
        }
        fn_8223C478(out,1,0); fn_828E9DB8(out,0,1);
        break;
    }
    }
}
