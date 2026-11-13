typedef struct Tag_82F901B0 { unsigned char b; } Tag_82F901B0;

extern Tag_82F901B0 fn_8265D598(void **first, void **dest);
extern void fn_82F902F0(void *first, void *last, void *dest, Tag_82F901B0 a, Tag_82F901B0 cat, Tag_82F901B0 b);

/* /Od: the zeroed tag temporary sits at 0x50 and the _Ptr_cat result at 0x51,
   so the two temporaries are one local struct in creation order. */
void fn_82F901B0(void *first, void *last, void *dest, Tag_82F901B0 a, Tag_82F901B0 b, Tag_82F901B0 c)
{
    struct { Tag_82F901B0 t, cat; } l;
    {
        Tag_82F901B0 *p = &l.t;
        p->b = 0;
    }
    l.cat = fn_8265D598(&first, &dest);
    fn_82F902F0(first, last, dest, a, l.cat, l.t);
}
