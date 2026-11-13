typedef struct Object_82E4B5C8 Object_82E4B5C8;
typedef struct Sub_82E4B5C8 Sub_82E4B5C8;

struct Sub_82E4B5C8 {
    void (**vtable)(Sub_82E4B5C8 *, int);
};

struct Object_82E4B5C8 {
    int (**vtable)(Object_82E4B5C8 *);
    int unk4;
    Sub_82E4B5C8 sub;
};

extern void *fn_82E50BE8(int, int, int, int, int);
extern Object_82E4B5C8 *fn_82E4B4C8(void *, int *);
extern int fn_82E4ADA0(Object_82E4B5C8 *, void *, void *, void *, int, void *);

int fn_82E4B5C8(void *a, void *b, void *c, void *d, Object_82E4B5C8 **out)
{
    int hr;
    Object_82E4B5C8 *object;
    void *mem;

    if (out == 0) {
        hr = 0x80004003;
        goto done;
    }
    if (d == 0) {
        hr = 0x80004003;
        goto done;
    }
    *out = 0;
    hr = 0;
    mem = fn_82E50BE8(0xd0, 0, 0, 0, 0);
    if (mem != 0) {
        object = fn_82E4B4C8(mem, &hr);
    } else {
        object = 0;
    }
    if (object == 0) {
        hr = 0x8007000e;
    } else if (hr < 0 || (hr = fn_82E4ADA0(object, a, b, c, 0, d)) < 0) {
        object->sub.vtable[33](&object->sub, 1);
    } else {
        object->vtable[1](object);
        *out = object;
    }
done:
    return hr;
}
