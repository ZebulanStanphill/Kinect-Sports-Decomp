typedef struct Tag_82F8FE48 { unsigned char b; } Tag_82F8FE48;
extern unsigned char fn_8265D598(void *first, void *second);
extern void fn_82F90040(void *first, void *last, void *dest, void *al, unsigned char cat, Tag_82F8FE48 tag);
void fn_82F8FE48(void *first, void *last, void *dest, void *al)
{
    struct { Tag_82F8FE48 t; unsigned char cat; } l;
    {
        Tag_82F8FE48 *p = &l.t;
        p->b = 0;
    }
    l.cat = fn_8265D598(&first, &first);
    fn_82F90040(first, last, dest, al, l.cat, l.t);
}
