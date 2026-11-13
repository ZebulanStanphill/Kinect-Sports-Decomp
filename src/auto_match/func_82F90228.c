typedef struct Tag_82F90228 { unsigned char b; } Tag_82F90228;
typedef struct Cat_82F90228 { unsigned char b; } Cat_82F90228;
extern Cat_82F90228 *fn_82F93778(void *dst, void *src);
extern void fn_82F90378(void *first, void *last, void *dest, Cat_82F90228 cat, Tag_82F90228 tag);
void fn_82F90228(void *first, void *last, void *dest)
{
    struct { Tag_82F90228 t; Cat_82F90228 cat; } l;
    {
        Tag_82F90228 *p = &l.t;
        p->b = 0;
    }
    fn_82F90378(first, last, dest, *fn_82F93778(&l.cat, &first), l.t);
}
