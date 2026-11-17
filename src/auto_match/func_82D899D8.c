typedef struct Object_82D899D8 Object_82D899D8;

typedef struct Vtable_82D899D8 {
    void *unused;                                   /* 0x00 */
    unsigned int (*size)(Object_82D899D8 *self);    /* 0x04 */
    void *unused2[2];                               /* 0x08 */
    Object_82D899D8 *(*get)(Object_82D899D8 *self); /* 0x10 */
} Vtable_82D899D8;

struct Object_82D899D8 {
    Vtable_82D899D8 *vtable; /* 0x00 */
    int pad[2];              /* 0x04 */
    int index;               /* 0x0c */
};

extern void fn_82D40590(void *self);
extern void fn_82D40610(void *self, unsigned int size);
extern void fn_82D89930(void *self);

void fn_82D899D8(unsigned char *self, char *table, Object_82D899D8 *object)
{
    unsigned int flags;
    unsigned char secondary;
    int special;
    Object_82D899D8 *data;
    unsigned int count;
    if (*(void **)(self + 0x54) != 0) {
        fn_82D40590(self + 0x30);
    }
    if (table != 0 && object != 0) {
        secondary = 0;
        flags = (*(unsigned int **)(table + 0x80))[object->index + 0x44];
        if ((int)(flags & 0x80)) {
            data = object->vtable->get(object);
        } else {
            if (!(int)(flags & 0x100)) {
                return;
            }
            data = object->vtable->get(object);
            secondary = 1;
        }
        special = (signed char)(self[0xe8] == 5 || self[0xe8] == 4);
        if (!special || !secondary) {
            count = data->vtable->size(data);
            fn_82D40610(self + 0x30, count);
            *(int *)(self + 0x30) = 1;
            {
                int *state = (int *)(self + 0x40);
                *state = 0;
            }
            if ((unsigned char)self[0xe8] == 5) {
                fn_82D89930(self);
            }
        }
    }
}
