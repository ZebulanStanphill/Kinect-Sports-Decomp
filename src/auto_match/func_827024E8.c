typedef struct Array_827024E8 {
    void **data;
    unsigned int count;
} Array_827024E8;

typedef struct Owner_827024E8 {
    void *vtable;
    unsigned char storage[9];
} Owner_827024E8;

extern char lbl_8200C90C[];
extern char lbl_82007120[];
extern void fn_826FA538(void *, int);
extern void fn_8267BE38(void *);

typedef struct Cursor_827024E8 {
    unsigned char *position;
    int count;
    char pad08[16];
} Cursor_827024E8;

void fn_827024E8(Owner_827024E8 *self)
{
    Cursor_827024E8 cursor;
    unsigned char **position;
    cursor.position = self->storage;
    position = &cursor.position;
    self->vtable = lbl_8200C90C;
    if ((**position & 0x80) != 0) {
        Array_827024E8 *array = *(Array_827024E8 **)(self->storage + 1);
        if (array != 0) {
            unsigned int count = array->count;
            if (count != 0) {
                unsigned int i;
                for (i = 0; i < count; i++) {
                    void **data = array->data;
                    if (data[i] != 0) {
                        fn_826FA538(data[i], 1);
                    }
                }
            }
            fn_8267BE38(array->data);
            fn_8267BE38(array);
        }
    }
    self->vtable = lbl_82007120;
}
