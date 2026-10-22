typedef struct Flags {
    unsigned hi : 25;
    unsigned owned : 1;
    unsigned lo : 6;
} Flags;

typedef struct Handle {
    int obj;
    Flags flags;
    __int64 data;
} Handle;

extern int fn_82681FE0(int obj, Handle *h, int arg);
extern int fn_82682748(int obj, Handle *h, int arg);

Handle *fn_8266F780(Handle *dst, Handle *src)
{
    if (dst != src) {
        if ((unsigned char)dst->flags.owned) {
            fn_82682748(dst->obj, dst, *(int *)&dst->data);
            dst->obj = 0;
        }
        dst->flags = src->flags;
        dst->data = src->data;
        if ((unsigned char)src->flags.owned) {
            dst->obj = src->obj;
            fn_82681FE0(dst->obj, dst, *(int *)&dst->data);
        }
    }
    return dst;
}
