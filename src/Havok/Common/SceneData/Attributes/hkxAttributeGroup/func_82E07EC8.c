/* hkxAttributeGroup::getQuaternionValue(name, warnIfNotFound, value): returns 0 (HK_SUCCESS) when found. */
typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

typedef struct ErrorVtbl_82E07EC8 {
    void *slot0;
    void *slot1;
    void *slot2;
    int (*message)(void *self, int type, unsigned int id, const char *text, const char *file, int line);
} ErrorVtbl_82E07EC8;

typedef struct Error_82E07EC8 {
    ErrorVtbl_82E07EC8 *vt;
} Error_82E07EC8;

typedef struct Ostream_82E07EC8 {
    unsigned char data[16];
} Ostream_82E07EC8;

typedef struct Attribute_82E07EC8 {
    const char *name;
    void *object;
    __vector4 *value;
} Attribute_82E07EC8;

typedef struct AttributeGroup_82E07EC8 {
    const char *name;
} AttributeGroup_82E07EC8;

extern Error_82E07EC8 *lbl_8323B464;
extern char lbl_8323F31C[];
extern Attribute_82E07EC8 *fn_82E07840(const AttributeGroup_82E07EC8 *group, const char *name, const void *klass);
extern void fn_82CEE578(Ostream_82E07EC8 *os, char *buf, int size);
extern Ostream_82E07EC8 *fn_82CEDB38(Ostream_82E07EC8 *os, const char *s);
extern Ostream_82E07EC8 *fn_82CEE128(Ostream_82E07EC8 *os, const AttributeGroup_82E07EC8 *name);
extern void fn_82CED958(Ostream_82E07EC8 *os);

int fn_82E07EC8(const AttributeGroup_82E07EC8 *self, const char *name, unsigned char warnIfNotFound, __vector4 *value)
{
    Attribute_82E07EC8 *attribute = fn_82E07840(self, name, lbl_8323F31C);

    if (attribute != 0) {
        *value = *attribute->value;
        return 0;
    }
    if (warnIfNotFound) {
        Ostream_82E07EC8 os;
        char buf[512];

        fn_82CEE578(&os, buf, 0x200);
        fn_82CEDB38(fn_82CEE128(fn_82CEDB38(fn_82CEDB38(fn_82CEDB38(&os, "Quaternion attribute "), name),
                                            " not found in "), self),
                    " attribute group");
        lbl_8323B464->vt->message(lbl_8323B464, 1, 0xabbaab81, buf, ".\\Attributes\\hkxAttributeGroup.cpp", 0xb3);
        fn_82CED958(&os);
    }
    return 1;
}
