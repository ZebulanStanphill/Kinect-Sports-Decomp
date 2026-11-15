typedef struct Array_82703F48 {
    void **data;
    unsigned int count;
} Array_82703F48;

typedef struct Owner_82703F48 {
    void *vtable;
    unsigned char storage[9];
} Owner_82703F48;

extern char lbl_8200C8B4[];
extern char lbl_82007120[];
extern void fn_826FA538(void *, int);
extern void fn_8267BE38(void *);

typedef struct Cursor_82703F48 {
    unsigned char *position;
    int count;
    char pad08[16];
} Cursor_82703F48;

void fn_82703F48(Owner_82703F48 *self)
{
    Cursor_82703F48 cursor;
    unsigned char **position;
    cursor.position = self->storage;
    position = &cursor.position;
    self->vtable = lbl_8200C8B4;
    if ((**position & 0x80) != 0) {
        Array_82703F48 *array = *(Array_82703F48 **)(self->storage + 1);
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
