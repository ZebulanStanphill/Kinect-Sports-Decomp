typedef struct hkReferencedObject hkReferencedObject;

typedef struct Array_82D8EBD0 {
    hkReferencedObject **data;
    int size;
    int capacity;
} Array_82D8EBD0;

typedef struct Owner_82D8EBD0 {
    char pad0[0x20];
    hkReferencedObject *object;
    int pad24;
    Array_82D8EBD0 first;
    Array_82D8EBD0 second;
} Owner_82D8EBD0;

extern void fn_82DAF688(hkReferencedObject *object);

void fn_82D8EBD0(Owner_82D8EBD0 *self)
{
    Owner_82D8EBD0 *owner = self;
    int i;
    int j;
    for (i = owner->first.size - 1; i >= 0; i--) {
        fn_82DAF688(owner->first.data[i]);
    }
    j = owner->second.size - 1;
    if (j >= 0) {
        do {
            fn_82DAF688(owner->second.data[j]);
            j--;
        } while (j >= 0);
    }
    fn_82DAF688(owner->object);
}
