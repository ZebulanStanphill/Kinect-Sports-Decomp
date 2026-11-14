/* hkxAttributeGroup::getBoolValue(name, warnIfNotFound, value): returns 0 (HK_SUCCESS) when found. */
typedef struct ErrorVtbl_82E07968 {
    void *slot0;
    void *slot1;
    void *slot2;
    int (*message)(void *self, int type, unsigned int id, const char *text, const char *file, int line);
} ErrorVtbl_82E07968;

typedef struct Error_82E07968 {
    ErrorVtbl_82E07968 *vt;
} Error_82E07968;

typedef struct Ostream_82E07968 {
    unsigned char data[16];
} Ostream_82E07968;

typedef struct Attribute_82E07968 {
    const char *name;
    void *object;
    void *value;
} Attribute_82E07968;

typedef struct AttributeGroup_82E07968 {
    const char *name;
} AttributeGroup_82E07968;

extern Error_82E07968 *lbl_8323B464;
extern char lbl_8323F86C[];
extern char lbl_8323F89C[];
extern char lbl_8323F46C[];
extern char lbl_8323F8CC[];
extern Attribute_82E07968 *fn_82E07840(const AttributeGroup_82E07968 *group, const char *name, const void *klass);
extern void fn_82CEE578(Ostream_82E07968 *os, char *buf, int size);
extern Ostream_82E07968 *fn_82CEDB38(Ostream_82E07968 *os, const char *s);
extern Ostream_82E07968 *fn_82CEE128(Ostream_82E07968 *os, const AttributeGroup_82E07968 *name);
extern void fn_82CED958(Ostream_82E07968 *os);

int fn_82E07968(const AttributeGroup_82E07968 *self, const char *name, unsigned char warnIfNotFound, unsigned char *value)
{
    Attribute_82E07968 *attribute = fn_82E07840(self, name, lbl_8323F86C);

    if (attribute != 0) {
        *value = *(unsigned char *)attribute->value;
        return 0;
    }
    attribute = fn_82E07840(self, name, lbl_8323F89C);
    if (attribute != 0) {
        *value = *(int *)attribute->value != 0;
        return 0;
    }
    if (warnIfNotFound) {
        Ostream_82E07968 os;
        char buf[512];

        fn_82CEE578(&os, buf, 0x200);
        fn_82CEDB38(fn_82CEE128(fn_82CEDB38(fn_82CEDB38(fn_82CEDB38(&os, "Bool attribute "), name),
                                            " not found in "), self),
                    " attribute group");
        lbl_8323B464->vt->message(lbl_8323B464, 1, 0xabbaab81, buf, ".\\Attributes\\hkxAttributeGroup.cpp", 0x32);
        fn_82CED958(&os);
    }
    return 1;
}
