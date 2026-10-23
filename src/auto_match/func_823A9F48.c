extern int lbl_82197010;
extern void fn_822315A0(void *p);
extern void fn_8265CA20(void *object);

typedef struct {
    void *vtbl;
    int pad[21];
    void *field_58;
} Obj;

Obj *fn_823A9F48(Obj *object, unsigned int flags)
{
    if (object->field_58 != 0) {
        fn_822315A0(object->field_58);
    }

    object->vtbl = &lbl_82197010;

    if ((flags & 1u) != 0) {
        fn_8265CA20(object);
    }

    return object;
}
