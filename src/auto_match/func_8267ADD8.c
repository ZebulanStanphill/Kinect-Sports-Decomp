extern char lbl_82005448[];
extern void *fn_8268E898(void *buffer, int size);

typedef struct Table_8267ADD8 {
    void *vtable;
    int capacity;
    int f8;
    void *buffer;
    char storage[0xa0];
    int fb0;
} Table_8267ADD8;

Table_8267ADD8 *fn_8267ADD8(Table_8267ADD8 *self, int capacity)
{
    self->capacity = capacity;
    self->f8 = 0;
    self->vtable = lbl_82005448;
    self->buffer = 0;
    self->fb0 = 0;
    self->buffer = self->storage != 0 ? fn_8268E898(self->storage, capacity) : 0;
    return self;
}
