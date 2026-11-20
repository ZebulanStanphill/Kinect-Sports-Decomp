/* Walks every member of a Havok class over an array of objects: for arrays
 * and simple arrays of structs and for embedded structs it recurses with the
 * member's class; for homogeneous arrays it calls fn_82E0F2A8. Members flagged
 * SERIALIZE_IGNORED are skipped. */
#include "havok/hkClass.h"

typedef struct MemberAccessor {
    void *address;               /* 0x0 */
    const hkClassMember *member; /* 0x4 */
} MemberAccessor;

typedef struct SimpleArray {
    void *data; /* 0x0 */
    int size;   /* 0x4 */
} SimpleArray;

extern "C" {
void fn_82CFFC68(MemberAccessor *acc, void *object, const hkClassMember *member);
void *fn_82CFFD68(MemberAccessor *acc);                   /* asRaw */
SimpleArray *fn_82CFFEB8(MemberAccessor *acc, int index); /* asSimpleArray */
void *fn_82CFFEC8(MemberAccessor *acc, int index);        /* asHomogeneousArray */
void fn_82E0F2A8(void *context, void *array, int arg, int arg2);
}

extern "C" void fn_82E0F620(void *context, void *objects, const hkClass *klass, int arg, int count, int arg2)
{
    int i;
    int n;
    char *object;
    const hkClassMember *member;
    SimpleArray *array;
    int elements;
    void *homogeneous;

    for (i = 0; i < klass->getNumMembers(); i++) {
        member = &klass->getMember(i);
        if ((unsigned char)((member->m_flags >> 10) & 1) != 0) {
            continue;
        }
        switch (member->m_type) {
        case 27: {
            MemberAccessor acc;

            object = (char *)objects;
            for (n = count - 1; n >= 0; n--) {
                fn_82CFFC68(&acc, object, member);
                homogeneous = fn_82CFFEC8(&acc, 0);
                fn_82E0F2A8(context, homogeneous, arg, arg2);
                object += klass->getObjectSize();
            }
            break;
        }
        case 22:
        case 26:
            if (member->m_subtype == 25) {
                MemberAccessor acc;

                object = (char *)objects;
                for (n = count - 1; n >= 0; n--) {
                    fn_82CFFC68(&acc, object, member);
                    array = fn_82CFFEB8(&acc, 0);
                    fn_82E0F620(context, array->data, &member->getStructClass(), arg, array->size, arg2);
                    object += klass->getObjectSize();
                }
            }
            break;
        case 25: {
            MemberAccessor acc;

            if (member->getCstyleArraySize() != 0) {
                elements = member->getCstyleArraySize();
            } else {
                elements = 1;
            }
            object = (char *)objects;
            for (n = count - 1; n >= 0; n--) {
                fn_82CFFC68(&acc, object, member);
                fn_82E0F620(context, fn_82CFFD68(&acc), &member->getStructClass(), arg, elements, arg2);
                object += klass->getObjectSize();
            }
            break;
        }
        }
    }
}
