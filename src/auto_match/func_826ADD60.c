typedef struct Rec {
    unsigned char *data;
    unsigned int start;
    int pad;
} Rec;

typedef struct Vec {
    Rec *items;
    unsigned int count;
} Vec;

typedef struct Obj {
    char pad[0xa4];
    Vec vec;
} Obj;

extern void fn_826AA290(Vec *v, unsigned int idx);

void fn_826ADD60(Obj *obj, unsigned int pos, int *n)
{
    int i;
    Rec *r;

    i = *n;
    if (i > 0) {
        for (; obj->vec.count != 0 && i >= 0; i--) {
            r = &obj->vec.items[obj->vec.count - 1];
            if (pos >= r->start && pos < (unsigned int)((r->data[2] << 8) | r->data[1]) + r->start) {
                return;
            }
            (*n)--;
            fn_826AA290(&obj->vec, obj->vec.count - 1);
        }
    }
}
