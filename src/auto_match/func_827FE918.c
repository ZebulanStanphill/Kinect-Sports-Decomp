extern void *memset(void *, int, unsigned int);
typedef struct { char pad[0xa0]; int *data; char pad2[0xe8-0xa4]; unsigned short count; } Obj_827FE918;
void fn_827FE918(Obj_827FE918 *o)
{
    if (o->count != 0) {
        memset(o->data, 0, o->count * 4);
    }
}
