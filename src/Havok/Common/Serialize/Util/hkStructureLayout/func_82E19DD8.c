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

typedef struct LayoutRules_82E19DD8 {
    unsigned char bytesInPointer; /* 0x0 */
} LayoutRules_82E19DD8;

typedef struct Error_82E19DD8 Error_82E19DD8;

struct Error_82E19DD8 {
    struct {
        void *slots[3];
        int (*message)(Error_82E19DD8 *e, int kind, unsigned int id, const char *text, const char *file,
                       int line);
    } *vt;
};

typedef struct Stream_82E19DD8 {
    unsigned char d[16];
} Stream_82E19DD8;

extern Error_82E19DD8 *lbl_8323B464;
extern void fn_82CEE578(Stream_82E19DD8 *s, char *buf, int size);
extern Stream_82E19DD8 *fn_82CEDB38(Stream_82E19DD8 *s, const char *text);
extern void fn_82CED958(Stream_82E19DD8 *s);
extern void __debugbreak(void);

int fn_82CEB1A8(const hkClass *klass);                   /* hkClass::getObjectSize */
const hkClass *fn_82CFD5A8(const hkClassMember *member); /* hkClassMember::getClass */
int fn_82CFD5C0(const hkClassMember *member);            /* hkClassMember::getCstyleArraySize */
int fn_82CFD5F0(const hkClassMember *member);            /* hkClassMember::getSizeInBytes */

int fn_82E19DD8(const hkClassMember *member, const LayoutRules_82E19DD8 *rules, unsigned int type)
{
    int size = 0;

    switch (type) {
    case 1:
    case 2:
    case 3:
    case 4:
    case 5:
    case 6:
    case 7:
    case 8:
    case 9:
    case 10:
    case 11:
    case 12:
    case 13:
    case 14:
    case 15:
    case 16:
    case 17:
    case 18:
    case 24:
    case 31:
    case 32:
        size = fn_82CFD5F0(member);
        break;
    case 20:
    case 21:
    case 29:
    case 30:
    case 33:
        size = rules->bytesInPointer;
        size = (fn_82CFD5C0(member) ? fn_82CFD5C0(member) : 1) * size;
        break;
    case 28:
        size = rules->bytesInPointer * 2;
        break;
    case 22:
        size = 4;
    case 26:
        size = rules->bytesInPointer + size + 4;
        break;
    case 23:
        break;
    case 25:
        size = fn_82CEB1A8(fn_82CFD5A8(member));
        size = (fn_82CFD5C0(member) ? fn_82CFD5C0(member) : 1) * size;
        break;
    case 19:
        size = fn_82E19DD8(member, rules, member->subtype);
        break;
    case 27:
        size = (rules->bytesInPointer + 2) * 2;
        break;
    default: {
        Stream_82E19DD8 s;
        char buf[0x200];

        fn_82CEE578(&s, buf, 0x200);
        fn_82CEDB38(&s, "Unknown class member type in structureLayout::getMemberSize().");
        if (lbl_8323B464->vt->message(lbl_8323B464, 3, 0x50a18b58, buf, ".\\Util\\hkStructureLayout.cpp",
                                      0xc5) != 0) {
            __debugbreak();
        }
        fn_82CED958(&s);
    }
    }
    return size;
}
