extern char lbl_82005448[];
extern void *fn_8268E898(void *buffer, int size);
extern void fn_8267AE38(void *self, const char *name, void *value);

typedef struct Table_8267B100 {
    void *vtable;
    int capacity;
    int f8;
    void *buffer;
    char storage[0xa0];
    int fb0;
} Table_8267B100;

Table_8267B100 *fn_8267B100(Table_8267B100 *self, const char *name1, void *value1, const char *name2, void *value2,
                            const char *name3, void *value3, const char *name4, void *value4)
{
    self->f8 = 0;
    self->buffer = 0;
    self->vtable = lbl_82005448;
    self->capacity = 0x1000;
    self->fb0 = 0;
    self->buffer = self->storage != 0 ? fn_8268E898(self->storage, 0x1000) : 0;
    if (name1 != 0)
        fn_8267AE38(self, name1, value1);
    if (name2 != 0)
        fn_8267AE38(self, name2, value2);
    if (name3 != 0)
        fn_8267AE38(self, name3, value3);
    if (name4 != 0)
        fn_8267AE38(self, name4, value4);
    return self;
}
