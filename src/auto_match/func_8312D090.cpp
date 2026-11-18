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
extern const char lbl_8200BEF0[];   // the member name "b" (a string symbols.txt has no ??_C@ name for)
extern const char lbl_8200BEFC[];   // the member name "a" (a string symbols.txt has no ??_C@ name for)
extern const char lbl_8201261C[];   // the member name "c" (a string symbols.txt has no ??_C@ name for)
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
    hkUint8 m_type;
    hkUint8 m_subtype;
    short m_cArraySize;
    unsigned short m_flags;
    unsigned short m_offset;
    const void *m_attributes;
};

// hkpCompressedMeshShapeEnums (lbl_821350C0), then the member lists of the nested classes Chunk
// (lbl_821350D8), BigTriangle (lbl_82135198) and ConvexPiece (lbl_82135210), as the game has them: this
// object is the unit's own definition of those 0x1e0 bytes, so it holds their values, not filler
// (scripts/check_addends.py compares them with the image).
static const struct {
    hkInternalClassEnum m_enums[1];
    int m_pad;
    hkInternalClassMember m_chunkMembers[8];
    hkInternalClassMember m_bigTriangleMembers[5];
    hkInternalClassMember m_convexPieceMembers[6];
} lbl_821350C0 = {
    { { "MaterialType", lbl_82135098, 5, 0, 0 } },
    0,
    {
        { "offset", 0, 0, 12, 0, 0, 0x0, 0x0, 0 },
        { "vertices", 0, 0, 22, 6, 0, 0x0, 0x10, 0 },
        { "indices", 0, 0, 22, 6, 0, 0x0, 0x1c, 0 },
        { "stripLengths", 0, 0, 22, 6, 0, 0x0, 0x28, 0 },
        { "weldingInfo", 0, 0, 22, 6, 0, 0x0, 0x34, 0 },
        { "materialInfo", 0, 0, 8, 0, 0, 0x0, 0x40, 0 },
        { "reference", 0, 0, 6, 0, 0, 0x0, 0x44, 0 },
        { "transformIndex", 0, 0, 6, 0, 0, 0x0, 0x46, 0 },
    },
    {
        { lbl_8200BEFC, 0, 0, 6, 0, 0, 0x0, 0x0, 0 },
        { lbl_8200BEF0, 0, 0, 6, 0, 0, 0x0, 0x2, 0 },
        { lbl_8201261C, 0, 0, 6, 0, 0, 0x0, 0x4, 0 },
        { "material", 0, 0, 8, 0, 0, 0x0, 0x8, 0 },
        { "weldingInfo", 0, 0, 6, 0, 0, 0x0, 0xc, 0 },
    },
    {
        { "offset", 0, 0, 12, 0, 0, 0x0, 0x0, 0 },
        { "vertices", 0, 0, 22, 6, 0, 0x0, 0x10, 0 },
        { "faceVertices", 0, 0, 22, 4, 0, 0x0, 0x1c, 0 },
        { "faceOffsets", 0, 0, 22, 6, 0, 0x0, 0x28, 0 },
        { "reference", 0, 0, 6, 0, 0, 0x0, 0x34, 0 },
        { "transformIndex", 0, 0, 6, 0, 0, 0x0, 0x36, 0 },
    }
};

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
