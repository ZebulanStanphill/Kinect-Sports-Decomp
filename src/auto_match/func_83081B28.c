typedef struct Storage_83081B28 {
    int *data;
} Storage_83081B28;

typedef struct Table_83081B28 {
    Storage_83081B28 *storage;
    int size;
} Table_83081B28;

void fn_83081B28(Table_83081B28 *self, Storage_83081B28 *storage, int size)
{
    int i;
    self->storage = storage;
    self->size = size;
    for (i = 0; i < size; i++)
        self->storage->data[i] = -1;
}
