typedef struct Object_828DDF30 {
    char pad0[0x80];
    unsigned int type;          /* 0x80 */
    unsigned int id;            /* 0x84 */
    float value;                /* 0x88 */
    char name[0x24];            /* 0x8c */
    char key[0x8];              /* 0xb0 */
    char guid[0x10];            /* 0xb8 */
} Object_828DDF30;

void fn_8223C478(void *, int, int);
extern void fn_828E9DB8(void *, unsigned, int);
extern void fn_828EA2D8(void *, void *, int);

void fn_828DDF30(Object_828DDF30 *o, void *out)
{
    unsigned value = o->type;
    fn_8223C478(out, 1, 0); fn_828E9DB8(out, value, 1);
    switch (o->type) {
    case 0:
        value = o->id;
        fn_8223C478(out, 32, 0); fn_828E9DB8(out, value, 32);
        fn_8223C478(out, 0x120, 0); fn_828EA2D8(out, o->name, 0x24);
        fn_8223C478(out, 64, 0); fn_828EA2D8(out, o->key, 8);
        fn_8223C478(out, 128, 0); fn_828EA2D8(out, o->guid, 0x10);
        return;
    case 1:
        value = o->id;
        fn_8223C478(out, 32, 0); fn_828E9DB8(out, value, 32);
        {
            unsigned q = (int)(o->value * 15.0f + 0.5f);
            fn_8223C478(out, 4, 0); fn_828E9DB8(out, q, 4);
        }
        break;
    }
}
