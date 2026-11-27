/* hkxAttributeGroup::getMatrixValue(name, warnIfNotFound, value): returns 0 (HK_SUCCESS) when found. */
#include "havok/hkOstream.h"
#include "xdk/vectorintrinsics.h"

extern "C" {

typedef struct Matrix4_82E07FB0 {
    __vector4 col[4];
} Matrix4_82E07FB0;

typedef struct ErrorVtbl_82E07FB0 {
    void *slot0;
    void *slot1;
    void *slot2;
    int (*message)(void *self, int type, unsigned int id, const char *text, const char *file, int line);
} ErrorVtbl_82E07FB0;

typedef struct Error_82E07FB0 {
    ErrorVtbl_82E07FB0 *vt;
} Error_82E07FB0;

typedef struct Ostream_82E07FB0 {
    unsigned char data[16];
} Ostream_82E07FB0;

typedef struct Attribute_82E07FB0 {
    const char *name;
    void *object;
    Matrix4_82E07FB0 *value;
} Attribute_82E07FB0;

typedef struct AttributeGroup_82E07FB0 {
    const char *name;
} AttributeGroup_82E07FB0;

extern Error_82E07FB0 *lbl_8323B464;
extern char lbl_8323F2EC[];
extern Attribute_82E07FB0 *fn_82E07840(const AttributeGroup_82E07FB0 *group, const char *name, const void *klass);
extern void fn_82CEE578(Ostream_82E07FB0 *os, char *buf, int size);
extern Ostream_82E07FB0 *fn_82CEE128(Ostream_82E07FB0 *os, const AttributeGroup_82E07FB0 *name);

int fn_82E07FB0(const AttributeGroup_82E07FB0 *self, const char *name, unsigned char warnIfNotFound, Matrix4_82E07FB0 *value)
{
    Attribute_82E07FB0 *attribute = fn_82E07840(self, name, lbl_8323F2EC);

    if (attribute != 0) {
        const Matrix4_82E07FB0 *src = attribute->value;
        value->col[0] = src->col[0];
        value->col[1] = src->col[1];
        value->col[2] = src->col[2];
        value->col[3] = src->col[3];
        return 0;
    }
    if (warnIfNotFound) {
        Ostream_82E07FB0 os;
        char buf[512];

        fn_82CEE578(&os, buf, 0x200);
        *(hkOstream *)(fn_82CEE128((Ostream_82E07FB0 *)&(*(hkOstream *)&os << "Matrix attribute " << name << " not found in "), self)) << " attribute group";
        lbl_8323B464->vt->message(lbl_8323B464, 1, 0xabbaab81, buf, ".\\Attributes\\hkxAttributeGroup.cpp", 0xc4);
        ((hkOstream *)&os)->hkOstream::~hkOstream();
    }
    return 1;
}

}
