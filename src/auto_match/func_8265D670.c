typedef struct Tag_8265D670 { unsigned char b; } Tag_8265D670;

extern void fn_8265D6D8(void *first, void *last, void *dest, void *al, void *valty, Tag_8265D670 tag);

void fn_8265D670(void *first, void *last, void *dest, void *al, void *valty, Tag_8265D670 tag)
{
    Tag_8265D670 t;
    {
        Tag_8265D670 *p = &t;
        p->b = 0;
    }
    fn_8265D6D8(first, last, dest, al, 0, t);
}
