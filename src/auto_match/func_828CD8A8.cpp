struct Item_828CD8A8;

struct Items_828CD8A8 {
    Item_828CD8A8 **first;
    Item_828CD8A8 **last;
    Item_828CD8A8 **limit;

    __forceinline unsigned int size() const
    {
        return last - first;
    }

    __forceinline bool empty() const
    {
        return size() == 0;
    }

    __forceinline Item_828CD8A8 *&operator[](unsigned int i)
    {
        return first[i];
    }
};

extern "C" void fn_828CD208(Items_828CD8A8 *items, unsigned int size);

struct Item_828CD8A8 {
    char pad00[0x18];
    unsigned int id;
    char pad1c[0x6c];
    unsigned int index;
    unsigned char last;
    char pad8d[0xb];
    char entries[0x28];
    unsigned char ignored;
};

struct Queue_828CD8A8 {
    unsigned int expected;
    Items_828CD8A8 items;
};

class Manager_828CD8A8
{
  public:
    virtual void Slot00();
    virtual void Slot04();
    virtual void Slot08();
    virtual void Slot0c();
    virtual void Slot10();
    virtual void Slot14();
    virtual void Slot18();
    virtual void Slot1c();
    virtual void Slot20();
    virtual void Slot24();
    virtual void Slot28();
    virtual void Slot2c();
    virtual void Slot30();
    virtual void Slot34();
    virtual void Slot38();
    virtual void Slot3c();
    virtual void Slot40();
    virtual void Slot44();
    virtual void SetId(unsigned int id);
};

struct Batch_828CD8A8 {
    char pad00[0x18];
    char *storage;
    char pad1c[8];
    Batch_828CD8A8();

    ~Batch_828CD8A8()
    {
        if (storage != 0)
            operator delete(storage);
    }
};

extern "C" {
unsigned char fn_823B4970(Batch_828CD8A8 *batch, void *entries, void *end, int flag);
void fn_8287FE18(void *owner, Manager_828CD8A8 *manager);
void *fn_82883058(unsigned int id);
Manager_828CD8A8 *fn_828867D8(unsigned int index);
void fn_828BD660(Manager_828CD8A8 *manager, Batch_828CD8A8 *batch);
unsigned int fn_828BE968(Batch_828CD8A8 *batch);
void fn_828E9D40(void *entries);
void *fn_828E9D90(void *entries);
}

extern "C" bool fn_828CD8A8(Queue_828CD8A8 *self, Item_828CD8A8 *item)
{
    if (self->expected != 0) {
        if (item->last && item->index >= self->items.size()) {
            item->ignored = 1;
            return self->items.empty();
        }
    } else if (item->last) {
        self->expected = item->index + 1;
    }

    unsigned int requested = item->index + 1;
    const unsigned int &size = self->expected < requested ? requested : self->expected;
    Items_828CD8A8 &items = self->items;
    fn_828CD208(&items, size);
    if (items[item->index] != 0) {
        item->ignored = 1;
        return items.empty();
    }
    items[item->index] = item;
    if (self->expected == 0 || self->items.size() != self->expected)
        return false;

    int missing = 0;
    Item_828CD8A8 **end = self->items.last;
    for (Item_828CD8A8 **it = self->items.first; it != end; ++it) {
        if (*it == 0)
            ++missing;
    }
    if (missing != 0)
        return false;

    Batch_828CD8A8 batch;
    for (unsigned int i = 0; i < self->items.size(); ++i) {
        void *entries = self->items[i]->entries;
        void *end = fn_828E9D90(entries);
        fn_828E9D40(entries);
        fn_823B4970(&batch, entries, end, 0);
    }

    fn_828E9D40(&batch);
    Manager_828CD8A8 *manager = fn_828867D8(fn_828BE968(&batch));
    manager->SetId(item->id);
    fn_828BD660(manager, &batch);
    fn_8287FE18(fn_82883058(item->id), manager);
    return true;
}
