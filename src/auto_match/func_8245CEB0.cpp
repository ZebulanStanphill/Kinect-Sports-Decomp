struct Entry_8245CEB0 {
    void *data; /* 0x00 */
    char pad04[0x1c];
};

struct Object_8245CEB0 {
    virtual void Unused0();
    virtual void Unused1();
    virtual void Unused2();
    virtual void Unused3();
    virtual void Unused4();
    virtual void Reset();

    Entry_8245CEB0 *entries; /* 0x04 */
    int unused08[2];
    unsigned int count;     /* 0x10 */
    unsigned int entrySize; /* 0x14 */
};

extern "C" void fn_8265CA20(void *data);
extern "C" void fn_8265CAA0(void *data);
extern "C" void *XMemSet(void *data, int value, unsigned int size);
void *operator new[](unsigned int size);

/* Frees the entry buffers and the table, then allocates both again for the current count. */
extern "C" void fn_8245CEB0(Object_8245CEB0 *self)
{
    unsigned int index;

    if (self->entries != 0) {
        for (index = 0; index < self->count; index++) {
            if (self->entries[index].data != 0) {
                fn_8265CA20(self->entries[index].data);
                self->entries[index].data = 0;
            }
        }
        fn_8265CAA0(self->entries);
        self->entries = 0;
    }
    self->entries = new Entry_8245CEB0[self->count];
    XMemSet(self->entries, 0, self->count * sizeof(Entry_8245CEB0));
    for (index = 0; index < self->count; index++) {
        self->entries[index].data = new char[self->entrySize];
    }
    self->Reset();
}
