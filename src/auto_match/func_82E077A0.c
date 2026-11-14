typedef struct Variant_82E077A0 {
    void *object;
    const void *klass;
} Variant_82E077A0;

typedef struct RefVariant_82E077A0 {
    void *object;
} RefVariant_82E077A0;

typedef struct Attribute_82E077A0 {
    const char *name;
    RefVariant_82E077A0 value;
} Attribute_82E077A0;

typedef struct AttributeGroup_82E077A0 {
    const char *name;
    Attribute_82E077A0 *attributes;
    int count;
} AttributeGroup_82E077A0;

extern int fn_82E07730(const AttributeGroup_82E077A0 *self, const char *name);
extern RefVariant_82E077A0 *fn_83082568(RefVariant_82E077A0 *self, const Variant_82E077A0 *v);
extern void fn_82CE4040(void *obj);
extern void fn_82CE4118(void *obj);

RefVariant_82E077A0 *fn_82E077A0(RefVariant_82E077A0 *out, const AttributeGroup_82E077A0 *self, const char *name)
{
    RefVariant_82E077A0 tmp = {0};
    int index = fn_82E07730(self, name);
    int made = 0;
    Variant_82E077A0 none = {0, 0};
    const RefVariant_82E077A0 *src;

    if (index < 0) {
        made = 1;
        src = fn_83082568(&tmp, &none);
    } else {
        src = &self->attributes[index].value;
    }
    if (src->object != 0) {
        fn_82CE4040(src->object);
    }
    out->object = src->object;
    if ((made & 1) != 0 && tmp.object != 0) {
        fn_82CE4118(tmp.object);
    }
    return out;
}
