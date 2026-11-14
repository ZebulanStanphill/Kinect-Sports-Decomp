typedef struct Object_822A85C8 {
    char pad0[0x54c];
    int finished;
} Object_822A85C8;

typedef struct __declspec(align(16)) Entry_822A85C8 {
    __int64 pad0[4];
    int pad20;
    Object_822A85C8 *object;
    __int64 pad28;
} Entry_822A85C8;

typedef struct Vector_822A85C8 {
    Entry_822A85C8 *begin;
    Entry_822A85C8 *end;
} Vector_822A85C8;

extern void fn_822A5A40(Object_822A85C8 *object);
extern void fn_822A5B48(Object_822A85C8 *object, float dt);
extern void fn_8265CA20(void *p);

void fn_822A85C8(Vector_822A85C8 *list, float dt)
{
    Entry_822A85C8 *it = list->begin;
    while (it != list->end) {
        Object_822A85C8 *object;
        if (it->object->finished != 0) {
            Entry_822A85C8 *dst;
            Entry_822A85C8 *src;
            Entry_822A85C8 *last;
            Entry_822A85C8 *p;
            object = it->object;
            if (object != 0) {
                fn_822A5A40(object);
                fn_8265CA20(object);
            }
            it->object = 0;
            last = list->end;
            for (dst = it, src = it + 1; src != last; dst++, src++)
                *dst = *src;
            last = list->end - 1;
            for (p = last; p != list->end; p++) {
            }
            list->end = last;
        } else {
            fn_822A5B48(it->object, dt);
            it++;
        }
    }
}
