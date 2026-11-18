/* Walks every member of a Havok class over an array of objects: pointer arrays and
 * pointer members go to fn_82E0E720, arrays of structs and embedded structs recurse
 * with the member's class. Members flagged SERIALIZE_IGNORED are skipped. */
typedef struct hkClass hkClass;

typedef struct hkClassMember {
    const char *name;       /* 0x00 */
    const hkClass *klass;   /* 0x04 */
    const void *enumClass;  /* 0x08 */
    unsigned char type;     /* 0x0C */
    unsigned char subtype;  /* 0x0D */
    short cArraySize;       /* 0x0E */
    unsigned short flags;   /* 0x10 */
    unsigned short offset;  /* 0x12 */
    const void *attributes; /* 0x14 */
} hkClassMember;

typedef struct MemberAccessor {
    void *address;               /* 0x0 */
    const hkClassMember *member; /* 0x4 */
} MemberAccessor;

typedef struct SimpleArray {
    void *data; /* 0x0 */
    int size;   /* 0x4 */
} SimpleArray;

int fn_82CEAE80(const hkClass *klass);                         /* hkClass::getNumMembers */
const hkClassMember *fn_82CEAEA8(const hkClass *klass, int i); /* hkClass::getMember */
int fn_82CEB1A8(const hkClass *klass);                         /* hkClass::getObjectSize */
const hkClass *fn_82CFD5A8(const hkClassMember *member);       /* hkClassMember::getClass */
int fn_82CFD5C0(const hkClassMember *member);                  /* hkClassMember::getCstyleArraySize */
void fn_82CFFC68(MemberAccessor *acc, void *object, const hkClassMember *member);
void *fn_82CFFD68(MemberAccessor *acc);                   /* asRaw */
SimpleArray *fn_82CFFEB8(MemberAccessor *acc, int index); /* asSimpleArray */
void fn_82E0E720(void *entries, int count, void *context);

void fn_82E0EE90(void *objects, const hkClass *klass, void *context, int count)
{
    int i;
    int n;
    char *object;
    const hkClassMember *member;
    SimpleArray *array;
    int elements;

    for (i = 0; i < fn_82CEAE80(klass); i++) {
        member = fn_82CEAEA8(klass, i);
        if ((unsigned char)((member->flags >> 10) & 1) != 0) {
            continue;
        }
        switch (member->type) {
        case 28: {
            MemberAccessor acc;

            if (fn_82CFD5C0(member) != 0) {
                elements = fn_82CFD5C0(member);
            } else {
                elements = 1;
            }
            object = (char *)objects;
            for (n = count - 1; n >= 0; n--) {
                fn_82CFFC68(&acc, object, member);
                fn_82E0E720(fn_82CFFD68(&acc), elements, context);
                object += fn_82CEB1A8(klass);
            }
            break;
        }
        case 22:
        case 26:
            if (member->subtype == 28) {
                MemberAccessor acc;

                object = (char *)objects;
                for (n = count - 1; n >= 0; n--) {
                    fn_82CFFC68(&acc, object, member);
                    array = fn_82CFFEB8(&acc, 0);
                    fn_82E0E720(array->data, array->size, context);
                    object += fn_82CEB1A8(klass);
                }
            } else if (member->subtype == 25) {
                MemberAccessor acc;

                object = (char *)objects;
                for (n = count - 1; n >= 0; n--) {
                    fn_82CFFC68(&acc, object, member);
                    array = fn_82CFFEB8(&acc, 0);
                    fn_82E0EE90(array->data, fn_82CFD5A8(member), context, array->size);
                    object += fn_82CEB1A8(klass);
                }
            }
            break;
        case 25: {
            MemberAccessor acc;

            if (fn_82CFD5C0(member) != 0) {
                elements = fn_82CFD5C0(member);
            } else {
                elements = 1;
            }
            object = (char *)objects;
            for (n = count - 1; n >= 0; n--) {
                fn_82CFFC68(&acc, object, member);
                fn_82E0EE90(fn_82CFFD68(&acc), fn_82CFD5A8(member), context, elements);
                object += fn_82CEB1A8(klass);
            }
            break;
        }
        }
    }
}
