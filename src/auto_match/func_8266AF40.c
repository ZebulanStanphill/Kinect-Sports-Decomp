typedef struct Tag_8266AF40 { unsigned char b; } Tag_8266AF40;

extern void fn_8266AFA8(void *first, void *last, void *dest, void *al, void *valty, Tag_8266AF40 tag);

void fn_8266AF40(void *first, void *last, void *dest, void *al, void *valty, Tag_8266AF40 tag)
{
    Tag_8266AF40 t;
    {
        Tag_8266AF40 *p = &t;
        p->b = 0;
    }
    fn_8266AFA8(first, last, dest, al, 0, t);
}
