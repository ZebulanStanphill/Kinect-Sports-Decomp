/* hkxAttributeGroup::getVectorValue(name, warnIfNotFound, value): returns 0 (HK_SUCCESS) when found; the original message text says "Float attribute". */
#include "havok/hkOstream.h"
#include "xdk/vectorintrinsics.h"

extern "C" {

typedef struct ErrorVtbl_82E07DE0 {
    void *slot0;
    void *slot1;
    void *slot2;
    int (*message)(void *self, int type, unsigned int id, const char *text, const char *file, int line);
} ErrorVtbl_82E07DE0;

typedef struct Error_82E07DE0 {
    ErrorVtbl_82E07DE0 *vt;
} Error_82E07DE0;

typedef struct Ostream_82E07DE0 {
    unsigned char data[16];
} Ostream_82E07DE0;

typedef struct Attribute_82E07DE0 {
    const char *name;
    void *object;
    __vector4 *value;
} Attribute_82E07DE0;

typedef struct AttributeGroup_82E07DE0 {
    const char *name;
} AttributeGroup_82E07DE0;

extern Error_82E07DE0 *lbl_8323B464;
extern char lbl_8323F34C[];
extern Attribute_82E07DE0 *fn_82E07840(const AttributeGroup_82E07DE0 *group, const char *name, const void *klass);
extern void fn_82CEE578(Ostream_82E07DE0 *os, char *buf, int size);
extern Ostream_82E07DE0 *fn_82CEE128(Ostream_82E07DE0 *os, const AttributeGroup_82E07DE0 *name);

int fn_82E07DE0(const AttributeGroup_82E07DE0 *self, const char *name, unsigned char warnIfNotFound, __vector4 *value)
{
    Attribute_82E07DE0 *attribute = fn_82E07840(self, name, lbl_8323F34C);

    if (attribute != 0) {
        *value = *attribute->value;
        return 0;
    }
    if (warnIfNotFound) {
        Ostream_82E07DE0 os;
        char buf[512];

        fn_82CEE578(&os, buf, 0x200);
        *(hkOstream *)(fn_82CEE128((Ostream_82E07DE0 *)&(*(hkOstream *)&os << "Float attribute " << name << " not found in "), self)) << " attribute group";
        lbl_8323B464->vt->message(lbl_8323B464, 1, 0xabbaab81, buf, ".\\Attributes\\hkxAttributeGroup.cpp", 0xa2);
        ((hkOstream *)&os)->hkOstream::~hkOstream();
    }
    return 1;
}

}
