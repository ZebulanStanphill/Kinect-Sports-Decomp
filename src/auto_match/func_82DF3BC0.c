/* Havok: m_objects[index]->removeReference(); m_objects.removeAt(index);
 * hkArray::removeAt copies the last element with hkMemUtil::memCpyOneAligned,
 * a word loop (here one word). */
typedef struct hkReferencedObject hkReferencedObject;
extern void fn_82CE4118(hkReferencedObject *obj); /* removeReference */

typedef struct {
    hkReferencedObject **m_data;
    int m_size;
    int m_capacityAndFlags;
} ObjArray;

typedef struct {
    char pad[0x44];
    ObjArray objects;
} Owner;

static void memCpyOneAligned(void *dst, const void *src)
{
    unsigned int k;
    for (k = 0; k < 1; k++)
        ((unsigned int *)dst)[k] = ((const unsigned int *)src)[k];
}

void fn_82DF3BC0(Owner *self, int index)
{
    fn_82CE4118(self->objects.m_data[index]);
    self->objects.m_size--;
    if (self->objects.m_size != index)
        memCpyOneAligned(self->objects.m_data + index, self->objects.m_data + self->objects.m_size);
}
