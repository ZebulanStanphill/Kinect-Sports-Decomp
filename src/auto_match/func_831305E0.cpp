// fn_831305E0: the dynamic initializer of hkpEntityClass (hkpEntityClass.cpp, Havok's generated reflection
// data): hkClass::hkClass (fn_82CEB3D8, which keeps its fn_ name) on the global hkClass.
//
// The enum list (lbl_8213AEB8) and hkpEntity_Default are static data of that file, 0x300 bytes apart, so the
// compiler addresses the defaults from the enum list's address (addi r5, r9, 0x300). It does that after
// register allocation: with an extern lbl_8213AEB8 + 0x300 (or one object holding both) it combines the
// addresses earlier and allocates other registers. So both are defined here as static objects, laid out as
// in the game. (hkpEntity's member list, lbl_8213AFC0, lies between them but has external linkage, so it
// gets its own address.) The defaults' name starts with LAB_ only so that objdiff's pooled-data guess reads
// lbl_8213AEB8 + 0x300 as lbl_8213AEB8 (as for the original object, where both are external); the code is
// the same under any name.
typedef float hkReal;
typedef unsigned int hkUint32;

extern "C" {
extern const char lbl_8323CF30[];   // hkpEntityClass (the hkClass constructed here)
extern const char lbl_8323E200[];   // hkpWorldObjectClass (the parent)
extern const char lbl_8213AFC0[];   // hkpEntity's 21 members (hkInternalClassMember[])
extern const char lbl_8213AE90[];   // the SpuCollisionCallbackEventFilter enum's 5 items (hkInternalClassEnumItem[])
// what the member lists and the attribute below point to (classes, attribute lists, strings without a ??_C@ name)
extern const char lbl_82012158[];
extern const char lbl_82011754[];
extern const char lbl_8323CEA0[];
extern const char lbl_8323D8D0[];
extern const char lbl_8323CE30[];
extern const char lbl_8323CED0[];
extern const char lbl_8323D0D0[];
extern const char lbl_8213AFB4[];
extern const char lbl_8323A968[];
extern const char lbl_8323CF00[];
extern const char lbl_8213AECC[];
extern const char lbl_8323ADD8[];
extern const char lbl_8213AFA8[];
// hkClass::hkClass(className, parentClass, objectSizeInBytes, implementedInterfaces, numImplementedInterfaces,
//     declaredEnums, numDeclaredEnums, declaredMembers, numDeclaredMembers, defaults, attributes, flags, version)
void fn_82CEB3D8(const void *self, const char *className, const void *parentClass, int objectSizeInBytes,
                 const void *implementedInterfaces, int numImplementedInterfaces, const void *declaredEnums,
                 int numDeclaredEnums, const void *declaredMembers, int numDeclaredMembers, const void *defaults,
                 const void *attributes, unsigned flags, unsigned version);
}

// hkInternalClassEnum (Common/Base/Reflection/hkInternalClassMember.h)
struct hkInternalClassEnum {
    const char *m_name;
    const void *m_items;
    int m_numItems;
    const void *m_attributes;
    unsigned m_flags;
};

// hkInternalClassMember (the same header): one record per reflected member.
struct hkInternalClassMember {
    const char *m_name;
    const void *m_class;
    const void *m_enum;
    unsigned char m_type;
    unsigned char m_subtype;
    short m_cArraySize;
    unsigned short m_flags;
    unsigned short m_offset;
    const void *m_attributes;
};

// hkpEntityEnums (lbl_8213AEB8), then the rest of the file's .rdata up to the defaults, as the game has it:
// the "hk.DataObjectType" attribute's value (lbl_8213AECC), the member lists of the nested classes
// SmallArraySerializeOverrideType (lbl_8213AED0), SpuCollisionCallback (lbl_8213AF18) and ExtendedListeners
// (lbl_8213AF78), that attribute and its list (lbl_8213AFA8, lbl_8213AFB4), and hkpEntity's own 21 members
// (lbl_8213AFC0). This object is the unit's own definition of those 0x300 bytes, so it holds their values,
// not filler (scripts/check_addends.py compares them with the image).
static const struct {
    hkInternalClassEnum m_enums[1];
    const char *m_dataObjectType;
    hkInternalClassMember m_smallArrayMembers[3];
    hkInternalClassMember m_spuCollisionCallbackMembers[4];
    hkInternalClassMember m_extendedListenersMembers[2];
    struct { const char *m_name; const void *m_data; const void *m_klass; } m_attribute;
    struct { const void *m_attributes; int m_numAttributes; int m_pad; } m_attributes;
    hkInternalClassMember m_members[21];
} lbl_8213AEB8 = {
    { { "SpuCollisionCallbackEventFilter", lbl_8213AE90, 5, 0, 0 } },
    "hkpMotion",
    {
        { lbl_82012158, 0, 0, 20, 0, 0, 0x400, 0x0, 0 },
        { lbl_82011754, 0, 0, 6, 0, 0, 0x0, 0x4, 0 },
        { "capacityAndFlags", 0, 0, 6, 0, 0, 0x0, 0x6, 0 },
    },
    {
        { "util", 0, 0, 20, 0, 0, 0x400, 0x0, 0 },
        { "capacity", 0, 0, 6, 0, 0, 0x400, 0x4, 0 },
        { "eventFilter", 0, 0, 4, 0, 0, 0x0, 0x6, 0 },
        { "userFilter", 0, 0, 4, 0, 0, 0x0, 0x7, 0 },
    },
    {
        { "activationListeners", &lbl_8323CEA0, 0, 25, 0, 0, 0x400, 0x0, 0 },
        { "entityListeners", &lbl_8323CEA0, 0, 25, 0, 0, 0x400, 0x8, 0 },
    },
    { "hk.DataObjectType", lbl_8213AECC, lbl_8323ADD8 },
    { lbl_8213AFA8, 1, 0 },
    {
        { "material", &lbl_8323D8D0, 0, 25, 0, 0, 0x0, 0x8c, 0 },
        { "limitContactImpulseUtil", 0, 0, 20, 0, 0, 0x400, 0x98, 0 },
        { "damageMultiplier", 0, 0, 11, 0, 0, 0x0, 0x9c, 0 },
        { "breakableBody", 0, 0, 20, 0, 0, 0x400, 0xa0, 0 },
        { "solverData", 0, 0, 8, 0, 0, 0x400, 0xa4, 0 },
        { "storageIndex", 0, 0, 6, 0, 0, 0x0, 0xa8, 0 },
        { "contactPointCallbackDelay", 0, 0, 6, 0, 0, 0x0, 0xaa, 0 },
        { "constraintsMaster", &lbl_8323CEA0, 0, 25, 0, 0, 0x400, 0xac, 0 },
        { "constraintsSlave", &lbl_8323CE30, 0, 22, 20, 0, 0x600, 0xb4, 0 },
        { "constraintRuntime", 0, 0, 22, 4, 0, 0x400, 0xc0, 0 },
        { "simulationIsland", 0, 0, 20, 0, 0, 0x400, 0xcc, 0 },
        { "autoRemoveLevel", 0, 0, 3, 0, 0, 0x0, 0xd0, 0 },
        { "numShapeKeysInContactPointProperties", 0, 0, 4, 0, 0, 0x0, 0xd1, 0 },
        { "responseModifierFlags", 0, 0, 4, 0, 0, 0x0, 0xd2, 0 },
        { "uid", 0, 0, 8, 0, 0, 0x0, 0xd4, 0 },
        { "spuCollisionCallback", &lbl_8323CED0, 0, 25, 0, 0, 0x0, 0xd8, 0 },
        { "motion", &lbl_8323D0D0, 0, 25, 0, 0, 0x0, 0xe0, &lbl_8213AFB4 },
        { "contactListeners", &lbl_8323CEA0, 0, 25, 0, 0, 0x400, 0x200, 0 },
        { "actions", &lbl_8323CEA0, 0, 25, 0, 0, 0x400, 0x208, 0 },
        { "localFrame", &lbl_8323A968, 0, 20, 25, 0, 0x0, 0x210, 0 },
        { "extendedListeners", &lbl_8323CF00, 0, 20, 25, 0, 0x400, 0x214, 0 },
    }
};

// hkpEntity_Default (+0x300): member 2, m_damageMultiplier, defaults to 1, and member 14, m_uid, to 0xffffffff.
struct hkpEntity_DefaultStruct {
    int s_defaultOffsets[21];
    hkReal m_damageMultiplier;
    hkUint32 m_uid;
};
static const hkpEntity_DefaultStruct LAB_8213B1B8 = {
    { -1, -1, 0x54, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, 0x58, -1, -1, -1, -1, -1, -1 },
    1.0f,
    0xffffffff
};

extern "C" void fn_831305E0()
{
    fn_82CEB3D8(lbl_8323CF30, "hkpEntity", lbl_8323E200, 0x220, 0, 0, lbl_8213AEB8.m_enums, 1, lbl_8213AFC0, 21,
                &LAB_8213B1B8, 0, 0, 2);
}
