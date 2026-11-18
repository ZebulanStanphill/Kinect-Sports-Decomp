typedef struct Object_82F380A0 Object_82F380A0;

typedef struct Vtable_82F380A0 {
    void *reserved[2];
    void (*release)(Object_82F380A0 *);
    void *reservedC[3];
    int (*remove)(Object_82F380A0 *, const void *, int, int);
} Vtable_82F380A0;

typedef struct List_82F380A0 {
    char elements[0x68];
    unsigned int count; /* 0x68 */
} List_82F380A0;

struct Object_82F380A0 {
    Vtable_82F380A0 *vtable;
    int reserved;
    List_82F380A0 list; /* 0x8 */
};

extern const char lbl_8202E618[16];
extern int memcmp(const void *, const void *, unsigned int);
extern void fn_82F377E8(void *, unsigned int, Object_82F380A0 ***);
extern void fn_82F37588(void *, int);

static __forceinline void ResetList(List_82F380A0 *list)
{
    fn_82F37588(list, 0);
    list->count = 0;
}

int fn_82F380A0(Object_82F380A0 *self, const void *id)
{
    if (memcmp(lbl_8202E618, id, 16) != 0) {
        while (self->vtable->remove(self, id, 0, 0) >= 0) {
        }
    } else {
        unsigned int count = self->list.count;
        unsigned int index;
        Object_82F380A0 **slot;
        for (index = 0; index < count; index++) {
            fn_82F377E8(&self->list, index, &slot);
            {
                Object_82F380A0 *object = *slot;
                if (object != 0) {
                    object->vtable->release(object);
                }
            }
        }
        ResetList(&self->list);
    }
    return 0;
}
