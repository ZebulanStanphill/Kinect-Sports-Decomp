// fn_8312D090: the dynamic initializer of hkpCompressedMeshShapeClass (hkpCompressedMeshShapeClass.cpp, Havok's
// generated reflection data): hkClass::hkClass (fn_82CEB3D8, which keeps its fn_ name) on the global hkClass.
//
// The enum list (lbl_821350C0) and hkpCompressedMeshShape_Default are static data of that file, with the nested
// classes' member lists between them, so the compiler addresses the defaults from the enum list's address
// (addi r5, r9, 0x1e0). It does that after register allocation: with an extern lbl_821350C0 + 0x1e0 (or one
// object holding both) it combines the addresses earlier and allocates other registers. So both are defined
// here as static objects, laid out as in the game. The defaults' name starts with LAB_ only so that objdiff's
// pooled-data guess reads lbl_821350C0 + 0x1e0 as lbl_821350C0 (as for the original object, where both are
// external); the code is the same under any name.
typedef unsigned char hkUint8;

extern "C" {
extern const char lbl_8323B834[];   // hkpCompressedMeshShapeClass (the hkClass constructed here)
extern const char lbl_8323C614[];   // hkpShapeCollectionClass (the parent)
extern const char lbl_83180778[];   // hkpCompressedMeshShape's 21 members (hkInternalClassMember[])
extern const char lbl_82135098[];   // the MaterialType enum's 5 items (hkInternalClassEnumItem[])
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

// hkpCompressedMeshShapeEnums (lbl_821350C0), then the member lists of the nested classes (Chunk, BigTriangle,
// ConvexPiece; not needed here).
static const struct {
    hkInternalClassEnum m_enums[1];
    char m_nestedMembers[0x1cc];
} lbl_821350C0 = { { { "MaterialType", lbl_82135098, 5, 0, 0 } } };

// hkpCompressedMeshShape_Default (+0x1e0): member 5, m_weldingType, defaults to WELDING_TYPE_NONE.
struct hkpCompressedMeshShape_DefaultStruct {
    int s_defaultOffsets[21];
    hkUint8 m_weldingType;
};
static const hkpCompressedMeshShape_DefaultStruct LAB_821352A0 = {
    { -1, -1, -1, -1, -1, 0x54, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1, -1 },
    6
};

extern "C" void fn_8312D090()
{
    fn_82CEB3D8(lbl_8323B834, "hkpCompressedMeshShape", lbl_8323C614, 0xe0, 0, 0, lbl_821350C0.m_enums, 1,
                lbl_83180778, 21, &LAB_821352A0, 0, 0, 8);
}
