typedef struct { void **data; int count; } Sub_82D827B8;
typedef struct { char pad[0x38]; Sub_82D827B8 sub; } Item_82D827B8;
typedef struct { Item_82D827B8 **data; int count; } Vec_82D827B8;
typedef struct { char pad[0x28]; Vec_82D827B8 a; int gap; Vec_82D827B8 b; } Obj_82D827B8;
extern void fn_82D94AC8(void *, void *);

void fn_82D827B8(Obj_82D827B8 *o, void *ctx)
{
    Vec_82D827B8 *v = &o->a;
    Item_82D827B8 **it = v->data;
    if (it != v->data + v->count) {
        do {
            Sub_82D827B8 *s = &(*it)->sub;
            int i = 0;
            if (0 < s->count) {
                int off = 0;
                do {
                    fn_82D94AC8(ctx, *(void **)((char *)s->data + off));
                    i++;
                    off += 4;
                } while (i < s->count);
            }
            it++;
        } while (it != v->data + v->count);
    }
    v = &o->b;
    it = v->data;
    if (it != v->data + v->count) {
        do {
            Sub_82D827B8 *s = &(*it)->sub;
            int i = 0;
            if (0 < s->count) {
                int off = 0;
                do {
                    fn_82D94AC8(ctx, *(void **)(off + (int)s->data));
                    i++;
                    off += 4;
                } while (i < s->count);
            }
            it++;
        } while (it != v->data + v->count);
    }
}
