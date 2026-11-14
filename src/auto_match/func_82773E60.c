struct List_82773E60 { void *items; unsigned int count; };
struct Cursor_82773E60 { struct List_82773E60 *list; int pad; int index; float offset; unsigned char done; };

extern unsigned char fn_827A87F0(struct List_82773E60 *list, int index, float offset);

static __forceinline unsigned char IsInvalid(struct Cursor_82773E60 *c)
{
    return c->list == 0 || (unsigned int)c->index >= c->list->count || c->index < 0;
}

unsigned char fn_82773E60(struct Cursor_82773E60 *self)
{
    if (!IsInvalid(self)) {
        if (self->done) {
            return 1;
        }
        return fn_827A87F0(self->list, self->index, self->offset);
    }
    return 0;
}
