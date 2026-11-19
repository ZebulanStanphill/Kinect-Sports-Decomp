struct Vector3_8285B910 {
    float x;
    float y;
    float z;
};

class Item_8285B910
{
  public:
    Item_8285B910();
    ~Item_8285B910();

  private:
    char data[0x30];
};

struct Shape_8285B910 {
    char pad0[8];
    float scale; /* 0x08 */
};

class Builder_8285B910
{
  public:
    Builder_8285B910(Shape_8285B910 *shape, int flags);
    ~Builder_8285B910();
    virtual void Unused0();

  private:
    char data[0xe0];
};

struct Source_8285B910 {
    char pad0[0x44];
    unsigned short itemCount; /* 0x44 */
    char pad46[0x6c - 0x46];
    Shape_8285B910 shape; /* 0x6c */
};

struct ItemList_8285B910 {
    int count;            /* 0x00 */
    Item_8285B910 *items; /* 0x04 */
};

void *operator new[](unsigned int size);

extern "C" void fn_8305C3F8(Shape_8285B910 *shape, Vector3_8285B910 *min, Vector3_8285B910 *max);
extern "C" void fn_83064A38(Builder_8285B910 *builder, Item_8285B910 *items, Vector3_8285B910 *min,
                            Vector3_8285B910 *max, int flags);
extern "C" void fn_83061BC8(Item_8285B910 *item, float scale);
extern "C" void fn_830625A0(Item_8285B910 *item, int a, int b, int c);

extern "C" void fn_8285B910(Source_8285B910 *self, ItemList_8285B910 *out)
{
    int i;
    unsigned int count;
    Vector3_8285B910 min;
    Vector3_8285B910 max;

    count = self->itemCount;
    out->count = count;
    out->items = new Item_8285B910[count];
    Shape_8285B910 *shape = &self->shape;
    Builder_8285B910 builder(shape, 0);
    fn_8305C3F8(shape, &min, &max);
    fn_83064A38(&builder, out->items, &min, &max, 0);
    for (i = 0; i < out->count; i++) {
        Item_8285B910 *item = &out->items[i];

        fn_83061BC8(item, shape->scale);
        fn_830625A0(item, 1, 0, 0);
    }
}
