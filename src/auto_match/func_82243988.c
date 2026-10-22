typedef unsigned int size_t;
void *memcpy(void *dst, const void *src, size_t n);

typedef struct Obj {
    int unk0;
    int unk4;
    void *data[4];
    unsigned int size;
} Obj;

void fn_82243988(Obj *o, int i, const void *src)
{
    if (o->size <= 4) {
        int tmp = 0;
        memcpy(&tmp, src, o->size);
        o->data[i] = (void *)tmp;
    } else {
        memcpy(o->data[i], src, o->size);
    }
}
