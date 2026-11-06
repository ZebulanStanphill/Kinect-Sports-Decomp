typedef struct Payload_826F0610 {
    unsigned int value;
    unsigned char flag;
} Payload_826F0610;

typedef struct Elem_826F0610 {
    int type;
    Payload_826F0610 data;
} Elem_826F0610;

typedef struct Arr_826F0610 {
    unsigned int count;
    Elem_826F0610 *heap;
    int pad08[2];
    Elem_826F0610 local[16];
} Arr_826F0610;

typedef struct Obj_826F0610 {
    int pad00[9];
    Arr_826F0610 arr;
} Obj_826F0610;

static Elem_826F0610 *At(Arr_826F0610 *arr, unsigned int i)
{
    if (i < 16) {
        return &arr->local[i];
    }
    return &arr->heap[i - 16];
}

int fn_826F0610(Obj_826F0610 *self, unsigned int key, unsigned int value, unsigned char flag)
{
    unsigned int i;

    for (i = 0; i < self->arr.count; i++) {
        Elem_826F0610 *e = At(&self->arr, i);
        if (e->type == 2 && e->data.value == key) {
            Payload_826F0610 p;
            Elem_826F0610 n;
            p.value = value;
            p.flag = flag;
            n.type = 2;
            n.data = p;
            *e = n;
            return 1;
        }
    }
    return 0;
}
