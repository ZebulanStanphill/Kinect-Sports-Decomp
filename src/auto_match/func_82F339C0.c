typedef struct Unk_82F339C0 Unk_82F339C0;

typedef struct UnkVtbl_82F339C0 {
    void *queryInterface;
    void *addRef;
    unsigned int (*release)(Unk_82F339C0 *self);
} UnkVtbl_82F339C0;

struct Unk_82F339C0 {
    UnkVtbl_82F339C0 *vt;
};

typedef struct Record_82F339C0 Record_82F339C0;

typedef struct RecordVtbl_82F339C0 {
    void *slots[4];
    long (*clear)(Record_82F339C0 *self, void *data);
} RecordVtbl_82F339C0;

struct Record_82F339C0 {
    RecordVtbl_82F339C0 *vt;
};

typedef struct Variant_82F339C0 {
    unsigned int words[4];
} Variant_82F339C0;

typedef struct Array_82F339C0 {
    unsigned short dims;
    unsigned short features;
} Array_82F339C0;

extern void fn_82EE00A8(void *str);
extern long fn_83143A60(Variant_82F339C0 *v);

void fn_82F339C0(Array_82F339C0 *array, void *data, unsigned int size, unsigned short features, unsigned int elemSize)
{
    unsigned int count;

    if (elemSize == 0 || data == 0)
        return;
    count = size / elemSize;
    if (features & 0x100) {
        void **strs = (void **)data;
        unsigned int n;
        for (n = 0; n < count; n++)
            fn_82EE00A8(*strs++);
    } else if (features & 0x200) {
        Unk_82F339C0 **objs = (Unk_82F339C0 **)data;
        unsigned int n;
        for (n = 0; n < count; n++, objs++) {
            if (*objs != 0)
                (*objs)->vt->release(*objs);
        }
    } else if (features & 0x400) {
        Unk_82F339C0 **objs = (Unk_82F339C0 **)data;
        unsigned int n;
        for (n = 0; n < count; n++, objs++) {
            if (*objs != 0)
                (*objs)->vt->release(*objs);
        }
    } else if (features & 0x800) {
        Variant_82F339C0 *vars = (Variant_82F339C0 *)data;
        unsigned int n;
        for (n = 0; n < count; n++, vars++)
            fn_83143A60(vars);
    } else if (features & 0x20) {
        Record_82F339C0 *rec = ((Record_82F339C0 **)array)[-1];
        char *p = (char *)data;
        unsigned int n;
        if (rec != 0) {
            for (n = 0; n < count; n++, p += elemSize)
                rec->vt->clear(rec, p);
        }
    }
}
