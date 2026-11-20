/* Walks every member of a Havok class over an array of objects: pointer arrays and
 * pointer members go to fn_82E0E720, arrays of structs and embedded structs recurse
 * with the member's class. Members flagged SERIALIZE_IGNORED are skipped. */
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
void fn_82E0E720(void *entries, int count, void *context);
}

extern "C" void fn_82E0EE90(void *objects, const hkClass *klass, void *context, int count)
{
    int i;
    int n;
    char *object;
    const hkClassMember *member;
    SimpleArray *array;
    int elements;

    for (i = 0; i < klass->getNumMembers(); i++) {
        member = &klass->getMember(i);
        if ((unsigned char)((member->m_flags >> 10) & 1) != 0) {
            continue;
        }
        switch (member->m_type) {
        case 28: {
            MemberAccessor acc;

            if (member->getCstyleArraySize() != 0) {
                elements = member->getCstyleArraySize();
            } else {
                elements = 1;
            }
            object = (char *)objects;
            for (n = count - 1; n >= 0; n--) {
                fn_82CFFC68(&acc, object, member);
                fn_82E0E720(fn_82CFFD68(&acc), elements, context);
                object += klass->getObjectSize();
            }
            break;
        }
        case 22:
        case 26:
            if (member->m_subtype == 28) {
                MemberAccessor acc;

                object = (char *)objects;
                for (n = count - 1; n >= 0; n--) {
                    fn_82CFFC68(&acc, object, member);
                    array = fn_82CFFEB8(&acc, 0);
                    fn_82E0E720(array->data, array->size, context);
                    object += klass->getObjectSize();
                }
            } else if (member->m_subtype == 25) {
                MemberAccessor acc;

                object = (char *)objects;
                for (n = count - 1; n >= 0; n--) {
                    fn_82CFFC68(&acc, object, member);
                    array = fn_82CFFEB8(&acc, 0);
                    fn_82E0EE90(array->data, &member->getStructClass(), context, array->size);
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
                fn_82E0EE90(fn_82CFFD68(&acc), &member->getStructClass(), context, elements);
                object += klass->getObjectSize();
            }
            break;
        }
        }
    }
}
