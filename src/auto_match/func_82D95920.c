typedef struct Arr { unsigned int *data; unsigned short size; } Arr;
typedef struct Obj { char pad[0x20]; Arr arr; } Obj;

void fn_82D95920(Obj *o, unsigned int v)
{
    Arr *a = &o->arr;
    int i = 0;
    if (i < a->size) {
        unsigned int *p = a->data;
        do {
            if (*p == v)
                goto found;
            i++;
            p++;
        } while (i < a->size);
    }
    i = -1;
found:
    a->data[i] = 0;
}
