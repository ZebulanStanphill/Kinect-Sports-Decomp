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

// hkpEntityEnums (lbl_8213AEB8), then the rest of the file's .rdata up to the defaults (the nested classes'
// member lists and attributes, and hkpEntity's member list; not needed here).
static const struct {
    hkInternalClassEnum m_enums[1];
    char m_rest[0x2ec];
} lbl_8213AEB8 = { { { "SpuCollisionCallbackEventFilter", lbl_8213AE90, 5, 0, 0 } } };

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
