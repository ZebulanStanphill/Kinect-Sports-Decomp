typedef struct Elem_823D9FC0 {
    unsigned char data[0x18];
} Elem_823D9FC0;

typedef struct Obj_823D9FC0 {
    void *vtable;
    void *buffer;
    int pad[3];
    Elem_823D9FC0 *array;
} Obj_823D9FC0;

extern int fn_82359C18(Elem_823D9FC0 *e);
extern void fn_8265CAA0(void *p);
extern unsigned int lbl_821B6604;

void fn_823D9FC0(Obj_823D9FC0 *self)
{
    Elem_823D9FC0 *arr = self->array;
    self->vtable = &lbl_821B6604;
    if (arr != 0) {
        int n = ((int *)arr)[-2];
        Elem_823D9FC0 *e = arr + n;
        int i;
        for (i = n - 1; i >= 0; i--) {
            e--;
            fn_82359C18(e);
        }
        fn_8265CAA0((char *)arr - 8);
    }
    fn_8265CAA0(self->buffer);
}
