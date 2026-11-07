typedef struct Sub_82A69188 {
    unsigned char d[0x38];
} Sub_82A69188;

typedef struct Elem_82A69188 {
    unsigned char pad[0xc8];
    Sub_82A69188 s[2];
    unsigned char rest[0x6f0 - 0xc8 - 0x70];
} Elem_82A69188;

typedef struct Owner_82A69188 {
    unsigned char pad[0x22];
    unsigned short count;
} Owner_82A69188;

extern void fn_82BA02A8(void *p);
extern void fn_82C2B590(void *p);

void fn_82A69188(Owner_82A69188 *owner, Elem_82A69188 *elems)
{
    short i;
    unsigned short j;

    if (elems != 0 && owner != 0) {
        for (i = 0; i < owner->count; i++) {
            Elem_82A69188 *e = &elems[i];
            for (j = 0; j < 2; j++) {
                fn_82BA02A8(&e->s[j]);
            }
        }
        fn_82C2B590(elems);
    }
}
