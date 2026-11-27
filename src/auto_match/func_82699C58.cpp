struct ColorTransform_82699C58 {
    float values[4][2];
};

struct Matrix_82699C58 {
    float values[6];

    __forceinline Matrix_82699C58 &operator=(const Matrix_82699C58 &other)
    {
        values[0] = other.values[0];
        values[1] = other.values[1];
        values[2] = other.values[2];
        values[3] = other.values[3];
        values[4] = other.values[4];
        values[5] = other.values[5];
        return *this;
    }
};

class Item_82699C58
{
  public:
    virtual void Virtual00();
    virtual void OnColorTransformChanged(); /* 0x04 */
    virtual void Virtual08();
    virtual void Virtual0C();
    virtual void Virtual10();
    virtual void Virtual14();
    virtual void SetBlendMode(unsigned char mode); /* 0x18 */
    virtual void SetName(int name);                /* 0x1c */
    virtual void Virtual20();
    virtual void Virtual24();
    virtual void Virtual28();
    virtual void Virtual2C();
    virtual void Virtual30();
    virtual void Virtual34();
    virtual void Virtual38();
    virtual void Virtual3C();
    virtual void Virtual40();
    virtual void Virtual44();
    virtual void Virtual48();
    virtual void Virtual4C();
    virtual void Virtual50();
    virtual void Virtual54();
    virtual void Virtual58();
    virtual void Virtual5C();
    virtual void Virtual60();
    virtual void Virtual64();
    virtual void Virtual68();
    virtual void Virtual6C();
    virtual void OnInserted(); /* 0x70 */

    char unknown04[0x10];
    int depth; /* 0x14 */
    int unknown18;
    float ratio; /* 0x1c */
    int unknown20;
    ColorTransform_82699C58 colorTransform; /* 0x24 */
    Matrix_82699C58 matrix;                 /* 0x44 */
    char unknown5C[8];
    unsigned short clipDepth; /* 0x64 */
};

struct Placement_82699C58 {
    int name;                               /* 0x00 */
    ColorTransform_82699C58 colorTransform; /* 0x04 */
    Matrix_82699C58 matrix;                 /* 0x24 */
    float ratio;                            /* 0x3c */
    int depth;                              /* 0x40 */
    int unknown44;
    unsigned short clipDepth; /* 0x48 */
    unsigned char blendMode;  /* 0x4a */
};

struct Array_82699C58 {
    Item_82699C58 **items; /* 0x00 */
    unsigned int count;    /* 0x04 */
    int capacity;          /* 0x08 */
    int dirty;             /* 0x0c */
};

extern "C" {
void fn_82698C28(void);
unsigned int fn_82698C48(Array_82699C58 *array, unsigned int first, unsigned int last, int *key,
                         void *compare);
void fn_82698CC0(Item_82699C58 **holder, Item_82699C58 *item);
unsigned char fn_82699B40(Array_82699C58 *array, int index);
void fn_82699828(Array_82699C58 *array, unsigned int index, Item_82699C58 **holder);
void fn_8267C498(Item_82699C58 *item);
void fn_82699C58(Array_82699C58 *self, Placement_82699C58 *placement, Item_82699C58 *item,
                 unsigned int flags);
}

static __forceinline unsigned int FindDepth_82699C58(Array_82699C58 *self, unsigned int count, int depth)
{
    int key = depth;

    return fn_82698C48(self, 0, count, &key, (void *)fn_82698C28);
}

void fn_82699C58(Array_82699C58 *self, Placement_82699C58 *placement, Item_82699C58 *item, unsigned int flags)
{
    int depth = placement->depth;
    unsigned int count = self->count;
    unsigned int index = FindDepth_82699C58(self, count, depth);

    self->dirty = 0;
    if ((flags & 1) != 0 && index < count && self->items[index]->depth == depth) {
        fn_82699B40(self, index);
        index = FindDepth_82699C58(self, self->count, depth);
    }
    item->depth = depth;
    {
        Item_82699C58 *holder = 0;

        fn_82698CC0(&holder, item);
        item->depth = depth;
        item->colorTransform = placement->colorTransform;
        item->OnColorTransformChanged();
        item->matrix = placement->matrix;
        item->ratio = placement->ratio;
        item->clipDepth = placement->clipDepth;
        item->SetBlendMode(placement->blendMode);
        if (placement->name != 0) {
            item->SetName(placement->name);
        }
        fn_82699828(self, index, &holder);
        item->OnInserted();
        if (holder != 0) {
            fn_8267C498(holder);
        }
    }
}
