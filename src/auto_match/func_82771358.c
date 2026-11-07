typedef struct Elem_82771358 {
    unsigned char data[0x24];
} Elem_82771358;

typedef struct Obj_82771358 {
    unsigned char pad[0xc4];
    Elem_82771358 *items;   /* 0xc4 */
    unsigned int count;     /* 0xc8 */
} Obj_82771358;

extern void fn_82771150(Elem_82771358 *e, void *p);
extern void fn_82783F98(void *p, float f);
extern void fn_827842B8(void *p);

void fn_82771358(Obj_82771358 *o, void *p, float f)
{
    unsigned int n;
    unsigned int i;

    fn_827842B8(p);
    fn_82783F98(p, f);
    n = o->count;
    for (i = 0; i < n; i++) {
        fn_82771150(&o->items[i], p);
    }
}
