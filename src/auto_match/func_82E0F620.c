/* Walks every member of a Havok class over an array of objects: for arrays
 * and simple arrays of structs and for embedded structs it recurses with the
 * member's class; for homogeneous arrays it calls fn_82E0F2A8. Members flagged
 * SERIALIZE_IGNORED are skipped. */
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
void *fn_82CFFEC8(MemberAccessor *acc, int index);        /* asHomogeneousArray */
void fn_82E0F2A8(void *context, void *array, int arg, int arg2);

void fn_82E0F620(void *context, void *objects, const hkClass *klass, int arg, int count, int arg2)
{
    int i;
    int n;
    char *object;
    const hkClassMember *member;
    SimpleArray *array;
    int elements;
    void *homogeneous;

    for (i = 0; i < fn_82CEAE80(klass); i++) {
        member = fn_82CEAEA8(klass, i);
        if ((unsigned char)((member->flags >> 10) & 1) != 0) {
            continue;
        }
        switch (member->type) {
        case 27: {
            MemberAccessor acc;

            object = (char *)objects;
            for (n = count - 1; n >= 0; n--) {
                fn_82CFFC68(&acc, object, member);
                homogeneous = fn_82CFFEC8(&acc, 0);
                fn_82E0F2A8(context, homogeneous, arg, arg2);
                object += fn_82CEB1A8(klass);
            }
            break;
        }
        case 22:
        case 26:
            if (member->subtype == 25) {
                MemberAccessor acc;

                object = (char *)objects;
                for (n = count - 1; n >= 0; n--) {
                    fn_82CFFC68(&acc, object, member);
                    array = fn_82CFFEB8(&acc, 0);
                    fn_82E0F620(context, array->data, fn_82CFD5A8(member), arg, array->size, arg2);
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
                fn_82E0F620(context, fn_82CFFD68(&acc), fn_82CFD5A8(member), arg, elements, arg2);
                object += fn_82CEB1A8(klass);
            }
            break;
        }
        }
    }
}
