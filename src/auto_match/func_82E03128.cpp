// getVtablehkxMeshUserChannelInfo (HK_REFLECTION_DEFINE_VIRTUAL, static in Havok): builds a finished object in a local buffer and returns its vtable pointer.
// Havok scene data classes (Common/SceneData), with the layouts from the game's
// hkClass reflection data: each class's hkClass constructor call (fn_82CEB3D8,
// in the static initializers around 0x83136000) gives its object size and
// parent, and its hkClassMember array the member names, types and offsets.
// Hierarchies agree with the RTTI.
//
// hkStringPtr is declared here rather than taken from the shared
// havok/hkStringPtr.h (skipped through its include guard), which lacks the
// default constructor: it is out of line, fn_82CED2F8 (it stores a pointer
// read from a global, lbl_8323B430). It keeps its fn_ name (Matching C units
// call it), like the finish constructor fn_82CED308 and the destructor
// fn_82CED5B8.
#define HAVOK_HKSTRINGPTR_H
#include "havok/hkBase.h"

class hkStringPtr;
extern "C" {
void fn_82CED2F8(hkStringPtr *self);                              // hkStringPtr::hkStringPtr()
void fn_82CED308(hkStringPtr *self, hkFinishLoadedObjectFlag f);  // hkStringPtr::hkStringPtr(hkFinishLoadedObjectFlag)
void fn_82CED5B8(hkStringPtr *self);                              // hkStringPtr::~hkStringPtr()
void fn_82CED488(hkStringPtr *self, const char *string);          // hkStringPtr::hkStringPtr(const char *)
}

class hkStringPtr {
public:
    enum { OWNED_FLAG = 0x1 };
    HK_FORCE_INLINE hkStringPtr() { fn_82CED2F8(this); }
    HK_FORCE_INLINE hkStringPtr(const char *string) { fn_82CED488(this, string); }
    HK_FORCE_INLINE hkStringPtr(hkFinishLoadedObjectFlag f) { fn_82CED308(this, f); }
    HK_FORCE_INLINE ~hkStringPtr() { fn_82CED5B8(this); }

    const char *m_stringAndFlag;
};

// hkVector4 holds a VMX register (hkQuadReal is __vector4 on Xbox 360), so
// copies use lvx128/stvx128.
// (The XDK's vectorintrinsics.h type.)
typedef __declspec(passinreg) __declspec(align(16)) union __vector4 {
    float vector4_f32[4];
    unsigned int vector4_u32[4];
} __vector4;
typedef __vector4 hkQuadReal;

class hkVector4 {
public:
    HK_FORCE_INLINE void operator=(const hkVector4 &v) { m_quad = v.m_quad; }
    hkQuadReal m_quad;
};

class hkMatrix3;
extern "C" const hkMatrix3 *fn_82CEBD78(void);   // hkMatrix3::getIdentity() (returns lbl_8323B1D0)

class hkMatrix3 {
public:
    static HK_FORCE_INLINE const hkMatrix3 &HK_CALL getIdentity() { return *fn_82CEBD78(); }
    HK_FORCE_INLINE void setIdentity() { *this = getIdentity(); }
    hkVector4 m_col0, m_col1, m_col2;
};

class hkMatrix4 {
public:
    hkVector4 m_col0, m_col1, m_col2, m_col3;
};

// hkRefVariant (Common/Base/Types/hkRefVariant.h): a reference to any
// hkReferencedObject.
class hkRefVariant : public hkRefPtr<hkReferencedObject> {
public:
    HK_FORCE_INLINE hkRefVariant() {}
    HK_FORCE_INLINE hkRefVariant(hkFinishLoadedObjectFlag f) : hkRefPtr<hkReferencedObject>(f) {}
};

// hkxAttribute (8 bytes)
struct hkxAttribute {
    hkStringPtr m_name;     // +0x0
    hkRefVariant m_value;   // +0x4
};

// hkxAttributeGroup (0x10 bytes). Its destructor (fn_82E02358: m_attributes,
// then m_name) and assignment (fn_82E080B8) are out of line; the members are
// declared without destructors so that the inline wrapper does not destroy
// them a second time. The (inline) copy constructor default-constructs the
// members (hkStringPtr(): fn_82CED2F8), then assigns.
extern "C" {
void fn_82E02358(struct hkxAttributeGroup *self);                                       // hkxAttributeGroup::~hkxAttributeGroup
struct hkxAttributeGroup *fn_82E080B8(struct hkxAttributeGroup *self, const struct hkxAttributeGroup *other);   // hkxAttributeGroup::operator=
}
struct hkxAttributeGroupName {   // hkStringPtr without its destructor
    HK_FORCE_INLINE hkxAttributeGroupName() { fn_82CED2F8(reinterpret_cast<hkStringPtr *>(this)); }
    const char *m_stringAndFlag;
};
struct hkxAttributeGroup {
    HK_FORCE_INLINE hkxAttributeGroup(const hkxAttributeGroup &other) { *this = other; }
    HK_FORCE_INLINE ~hkxAttributeGroup() { fn_82E02358(this); }
    HK_FORCE_INLINE hkxAttributeGroup &operator=(const hkxAttributeGroup &other) { fn_82E080B8(this, &other); return *this; }
    hkxAttributeGroupName m_name;             // +0x0 hkStringPtr
    hkArrayBase<hkxAttribute> m_attributes;   // +0x4 hkArray<hkxAttribute>
};

// hkArray assignment for element types with constructors
// (hkArrayBase::_copyFromArray, inlined): reserve (hkArrayUtil::_reserve,
// fn_82CE6310, keeps its fn_ name), destroy the surplus, assign the common
// part, copy-construct the rest.
extern "C" void fn_82CE6310(hkMemoryAllocator *alloc, void *array, int reqCapacity, int sizeElem);   // hkArrayUtil::_reserve

inline void *operator new(hk_size_t, void *p) { return p; }

struct hkArrayUtilC {
    template <typename T>
    static HK_FORCE_INLINE void HK_CALL destruct(T *t, int n)
    {
        for (int i = 0; i < n; ++i)
            t[i].~T();
    }
    template <typename T>
    static HK_FORCE_INLINE void HK_CALL copy(T *dst, const T *src, int n)
    {
        for (int i = 0; i < n; ++i)
            dst[i] = src[i];
    }
    template <typename T>
    static HK_FORCE_INLINE void HK_CALL constructWithArray(T *t, int n, const T *src)
    {
        for (int i = 0; i < n; ++i)
            new (t + i) T(src[i]);
    }
};

template <typename T>
HK_FORCE_INLINE void hkArrayCopyFrom(hkArray<T> &self, const hkArrayBase<T> &a)
{
    hkMemoryAllocator &alloc = hkContainerHeapAllocator::get(&self);
    int oldSize = self.m_size;
    int newSize = a.m_size;
    int copiedSize = newSize > oldSize ? oldSize : newSize;
    {
        const int capacity = self.getCapacity();
        if (capacity < newSize) {
            int cap2 = 2 * capacity;
            int newCapacity = (newSize < cap2) ? cap2 : newSize;
            fn_82CE6310(&alloc, &self, newCapacity, sizeof(T));
        }
    }
    hkArrayUtilC::destruct(self.m_data + newSize, oldSize - newSize);
    hkArrayUtilC::copy(self.m_data, a.m_data, copiedSize);
    hkArrayUtilC::constructWithArray(self.m_data + copiedSize, newSize - copiedSize, a.m_data + copiedSize);
    self.m_size = newSize;
}

// hkxAttributeHolder (0x14 bytes). Its destructor is user-written (it stores
// the class vtable on entry) and out of line, fn_82E04A30.
class hkxAttributeHolder : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxAttributeHolder(const hkxAttributeHolder &other);   // out of line (fn_82E048D8)
    hkxAttributeHolder(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_attributeGroups(f) {}
    HK_FORCE_INLINE virtual ~hkxAttributeHolder() {}

    hkArray<hkxAttributeGroup> m_attributeGroups;   // +0x8
};

class hkxNode;
class hkxMesh;
class hkxMeshSection;
class hkxTextureFile;
class hkxTextureInplace;
class hkxSkinBinding;
class hkxNodeSelectionSet;
class hkxIndexBuffer;

// Only referenced through hkxScene's arrays here; their members are not needed.
class hkxCamera : public hkReferencedObject {};
class hkxLight : public hkReferencedObject {};

// hkxVertexDescription (0xC bytes, no vtable). Its finish constructor is out
// of line: fn_82E07728 (an empty function).
struct hkxVertexDescription;
extern "C" void fn_82E07728(hkxVertexDescription *self, hkFinishLoadedObjectFlag f);
struct hkxVertexDescription {
    struct ElementDecl {
        hkUint32 m_byteOffset;   // +0x0
        hkUint16 m_type;         // +0x4  hkEnum<DataType, hkUint16>
        hkUint16 m_usage;        // +0x6  hkEnum<DataUsage, hkUint16>
        hkUint32 m_byteStride;   // +0x8
    };
    HK_FORCE_INLINE hkxVertexDescription(hkFinishLoadedObjectFlag f) : m_decls(f) { fn_82E07728(this, f); }
    hkArray<ElementDecl> m_decls;   // +0x0
};

// hkxVertexBuffer (0x68 bytes)
class hkxVertexBuffer : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    struct VertexData {
        VertexData(hkFinishLoadedObjectFlag f)
            : m_vectorData(f), m_floatData(f), m_uint32Data(f), m_uint16Data(f), m_uint8Data(f) {}
        hkArray<hkVector4> m_vectorData;   // +0x0
        hkArray<hkReal> m_floatData;       // +0xC
        hkArray<hkUint32> m_uint32Data;    // +0x18
        hkArray<hkUint16> m_uint16Data;    // +0x24
        hkArray<hkUint8> m_uint8Data;      // +0x30
        hkUint32 m_numVerts;               // +0x3C
        hkUint32 m_vectorStride;           // +0x40
        hkUint32 m_floatStride;            // +0x44
        hkUint32 m_uint32Stride;           // +0x48
        hkUint32 m_uint16Stride;           // +0x4C
        hkUint32 m_uint8Stride;            // +0x50
    };
    hkxVertexBuffer(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_data(f), m_desc(f) {}

    VertexData m_data;               // +0x8
    hkxVertexDescription m_desc;     // +0x5C
};

// hkxMaterial (0x80 bytes)
class hkxMaterial : public hkxAttributeHolder {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    struct TextureStage {
        hkRefVariant m_texture;   // +0x0
        hkInt32 m_usageHint;      // +0x4
        hkInt32 m_tcoordChannel;  // +0x8
    };
    hkxMaterial(hkFinishLoadedObjectFlag f)
        : hkxAttributeHolder(f), m_name(f), m_stages(f), m_subMaterials(f), m_extraData(f) {}

    hkStringPtr m_name;                                   // +0x14
    hkArray<TextureStage> m_stages;                       // +0x18
    hkVector4 m_diffuseColor;                             // +0x30
    hkVector4 m_ambientColor;                             // +0x40
    hkVector4 m_specularColor;                            // +0x50
    hkVector4 m_emissiveColor;                            // +0x60
    hkArray<hkRefPtr<hkxMaterial> > m_subMaterials;  // +0x70
    hkRefVariant m_extraData;                             // +0x7C
};

// hkxMaterialEffect (0x1C bytes)
class hkxMaterialEffect : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxMaterialEffect(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_name(f), m_data(f) {}

    hkStringPtr m_name;        // +0x8
    hkUint8 m_type;            // +0xC  hkEnum<EffectType, hkUint8>
    hkArray<hkUint8> m_data;   // +0x10
};

// hkxMaterialShader (0x28 bytes)
class hkxMaterialShader : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxMaterialShader(hkFinishLoadedObjectFlag f)
        : hkReferencedObject(f), m_name(f), m_vertexEntryName(f), m_geomEntryName(f), m_pixelEntryName(f), m_data(f) {}

    hkStringPtr m_name;              // +0x8
    hkUint8 m_type;                  // +0xC  hkEnum<ShaderType, hkUint8>
    hkStringPtr m_vertexEntryName;   // +0x10
    hkStringPtr m_geomEntryName;     // +0x14
    hkStringPtr m_pixelEntryName;    // +0x18
    hkArray<hkUint8> m_data;         // +0x1C
};

// hkxMaterialShaderSet (0x14 bytes)
class hkxMaterialShaderSet : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxMaterialShaderSet();   // out of line (fn_82E058F0)
    hkxMaterialShaderSet(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_shaders(f) {}

    hkArray<hkRefPtr<hkxMaterialShader> > m_shaders;   // +0x8
};

// hkxMesh (0x20 bytes) and hkxMesh::UserChannelInfo (0x1C bytes)
class hkxMesh : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    class UserChannelInfo : public hkxAttributeHolder {
    public:
        HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
        UserChannelInfo(hkFinishLoadedObjectFlag f) : hkxAttributeHolder(f), m_name(f), m_className(f) {}

        hkStringPtr m_name;        // +0x14
        hkStringPtr m_className;   // +0x18
    };
    hkxMesh(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_sections(f), m_userChannelInfos(f) {}
    virtual ~hkxMesh();   // user-written, out of line (fn_82E05D78)

    hkArray<hkRefPtr<hkxMeshSection> > m_sections;            // +0x8
    hkArray<hkRefPtr<UserChannelInfo> > m_userChannelInfos;   // +0x14
};

// hkxNode (0x48 bytes)
class hkxNode : public hkxAttributeHolder {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    struct AnnotationData {
        hkReal m_time;                // +0x0
        hkStringPtr m_description;    // +0x4
    };
    hkxNode(hkFinishLoadedObjectFlag f)
        : hkxAttributeHolder(f), m_name(f), m_object(f), m_keyFrames(f), m_children(f), m_annotations(f),
          m_userProperties(f) {}

    hkStringPtr m_name;                               // +0x14
    hkRefVariant m_object;                            // +0x18
    hkArray<hkMatrix4> m_keyFrames;                   // +0x1C
    hkArray<hkRefPtr<hkxNode> > m_children;      // +0x28
    hkArray<AnnotationData> m_annotations;            // +0x34
    hkStringPtr m_userProperties;                     // +0x40
    hkBool m_selected;                                // +0x44
};

// hkxNodeSelectionSet (0x24 bytes)
class hkxNodeSelectionSet : public hkxAttributeHolder {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxNodeSelectionSet(hkFinishLoadedObjectFlag f) : hkxAttributeHolder(f), m_selectedNodes(f), m_name(f) {}

    hkArray<hkRefPtr<hkxNode> > m_selectedNodes;   // +0x14
    hkStringPtr m_name;                                 // +0x20
};

// hkxScene (0xB0 bytes)
class hkxScene : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxScene();   // out of line (fn_82E06660)
    hkxScene(hkFinishLoadedObjectFlag f)
        : hkReferencedObject(f), m_modeller(f), m_asset(f), m_rootNode(f), m_selectionSets(f), m_cameras(f),
          m_lights(f), m_meshes(f), m_materials(f), m_inplaceTextures(f), m_externalTextures(f),
          m_skinBindings(f) {}
    virtual ~hkxScene();   // user-written, out of line (fn_82E06758)

    hkStringPtr m_modeller;                                          // +0x8
    hkStringPtr m_asset;                                             // +0xC
    hkReal m_sceneLength;                                            // +0x10
    hkRefPtr<hkxNode> m_rootNode;                               // +0x14
    hkArray<hkRefPtr<hkxNodeSelectionSet> > m_selectionSets;    // +0x18
    hkArray<hkRefPtr<hkxCamera> > m_cameras;                    // +0x24
    hkArray<hkRefPtr<hkxLight> > m_lights;                      // +0x30
    hkArray<hkRefPtr<hkxMesh> > m_meshes;                       // +0x3C
    hkArray<hkRefPtr<hkxMaterial> > m_materials;                // +0x48
    hkArray<hkRefPtr<hkxTextureInplace> > m_inplaceTextures;    // +0x54
    hkArray<hkRefPtr<hkxTextureFile> > m_externalTextures;      // +0x60
    hkArray<hkRefPtr<hkxSkinBinding> > m_skinBindings;          // +0x6C
    hkMatrix3 m_appliedTransform;                                    // +0x80
};

// hkxTextureFile (0x14 bytes)
class hkxTextureFile : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxTextureFile(hkFinishLoadedObjectFlag f)
        : hkReferencedObject(f), m_filename(f), m_name(f), m_originalFilename(f) {}

    hkStringPtr m_filename;          // +0x8
    hkStringPtr m_name;              // +0xC
    hkStringPtr m_originalFilename;  // +0x10
};

// hkxTextureInplace (0x20 bytes)
class hkxTextureInplace : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxTextureInplace(hkFinishLoadedObjectFlag f)
        : hkReferencedObject(f), m_data(f), m_name(f), m_originalFilename(f) {}

    char m_fileType[4];              // +0x8
    hkArray<hkUint8> m_data;         // +0xC
    hkStringPtr m_name;              // +0x18
    hkStringPtr m_originalFilename;  // +0x1C
};

// hkxEnvironment (0x14 bytes)
class hkxEnvironment : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    struct Variable {
        hkStringPtr m_name;    // +0x0
        hkStringPtr m_value;   // +0x4
    };
    hkxEnvironment();   // out of line (fn_82E04F60)
    hkxEnvironment(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_variables(f) {}

    hkArray<Variable> m_variables;   // +0x8
};

// hkxIndexBuffer (0x2C bytes)
class hkxIndexBuffer : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxIndexBuffer(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_indices16(f), m_indices32(f) {}

    hkInt8 m_indexType;              // +0x8  hkEnum<IndexType, hkInt8>
    hkArray<hkUint16> m_indices16;   // +0xC
    hkArray<hkUint32> m_indices32;   // +0x18
    hkUint32 m_vertexBaseOffset;     // +0x24
    hkUint32 m_length;               // +0x28
};

// hkxMeshSection (0x28 bytes)
extern "C" hkxMeshSection *fn_82E08818(hkxMeshSection *self, const hkxMeshSection *other);   // hkxMeshSection::operator=
class hkxMeshSection : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxMeshSection(const hkxMeshSection &other);   // out of line (fn_82E087A8)
    // The assignment operator is out of line (fn_82E08818) and keeps its fn_
    // name; it copies the hkReferencedObject fields too.
    HK_FORCE_INLINE hkxMeshSection &operator=(const hkxMeshSection &other) { return *fn_82E08818(this, &other); }
    hkxMeshSection(hkFinishLoadedObjectFlag f)
        : hkReferencedObject(f), m_vertexBuffer(f), m_indexBuffers(f), m_material(f), m_userChannels(f) {}

    hkRefPtr<hkxVertexBuffer> m_vertexBuffer;               // +0x8
    hkArray<hkRefPtr<hkxIndexBuffer> > m_indexBuffers;      // +0xC
    hkRefPtr<hkxMaterial> m_material;                       // +0x18
    hkArray<hkRefVariant> m_userChannels;                        // +0x1C
};

// hkxSkinBinding (0x70 bytes)
class hkxSkinBinding : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxSkinBinding(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_mesh(f), m_mapping(f), m_bindPose(f) {}

    hkRefPtr<hkxMesh> m_mesh;    // +0x8
    hkArray<hkxNode *> m_mapping;     // +0xC
    hkArray<hkMatrix4> m_bindPose;    // +0x18
    hkMatrix4 m_initSkinTransform;    // +0x30
};

// hkxSparselyAnimatedBool (0x20 bytes)
class hkxSparselyAnimatedBool : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxSparselyAnimatedBool(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_bools(f), m_times(f) {}

    hkArray<hkBool> m_bools;   // +0x8
    hkArray<hkReal> m_times;   // +0x14
};

// hkxSparselyAnimatedString (0x20 bytes)
class hkxSparselyAnimatedString : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxSparselyAnimatedString(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_strings(f), m_times(f) {}

    hkArray<hkStringPtr> m_strings;   // +0x8
    hkArray<hkReal> m_times;          // +0x14
};

// hkxAnimatedFloat (0x18 bytes). Its implicit destructor is shared (identical
// code folding) with hkxEdgeSelectionChannel, hkxTriangleSelectionChannel,
// hkxVertexSelectionChannel, hkxVertexFloatDataChannel and
// hkxVertexIntDataChannel: one hkArray of 4-byte elements at +0x8.
class hkxAnimatedFloat : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkxAnimatedFloat(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_floats(f) {}

    hkArray<hkReal> m_floats;   // +0x8
    hkUint8 m_hint;             // +0x14  hkEnum<Hint, hkUint8>
};

// hkAlignSceneToNodeOptions (0x18 bytes). Both constructors are out of line;
// the default one leaves the flags and the keyframe unset.
class hkAlignSceneToNodeOptions : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_SCENE_DATA);
    hkAlignSceneToNodeOptions();   // fn_82E045E8
    hkAlignSceneToNodeOptions(hkFinishLoadedObjectFlag f) : hkReferencedObject(f), m_nodeName(f) {}   // fn_82E04630

    hkBool m_invert;               // +0x8
    hkBool m_transformPositionX;   // +0x9
    hkBool m_transformPositionY;   // +0xA
    hkBool m_transformPositionZ;   // +0xB
    hkBool m_transformRotation;    // +0xC
    hkBool m_transformScale;       // +0xD
    hkBool m_transformSkew;        // +0xE
    hkInt32 m_keyframe;            // +0x10
    hkStringPtr m_nodeName;        // +0x14
};

// Resources (Common/Serialize/Resource): hkResourceBase, hkResourceHandle and
// hkResourceContainer are interfaces without data (RTTI and hkClass sizes:
// 8 bytes each).
class hkResourceBase : public hkReferencedObject {
public:
    hkResourceBase() {}
    hkResourceBase(hkFinishLoadedObjectFlag f) : hkReferencedObject(f) {}
};

class hkResourceHandle : public hkResourceBase {
public:
    hkResourceHandle() {}
    hkResourceHandle(hkFinishLoadedObjectFlag f) : hkResourceBase(f) {}
};

class hkResourceContainer : public hkResourceBase {
public:
    hkResourceContainer() {}
    hkResourceContainer(hkFinishLoadedObjectFlag f) : hkResourceBase(f) {}
};

// hkMemoryResourceHandle (0x1C bytes)
class hkMemoryResourceHandle : public hkResourceHandle {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    struct ExternalLink {
        hkStringPtr m_memberName;   // +0x0
        hkStringPtr m_externalId;   // +0x4
    };
    hkMemoryResourceHandle();                                // fn_82E15528
    hkMemoryResourceHandle(hkFinishLoadedObjectFlag f)       // fn_82E15590
        : hkResourceHandle(f), m_variant(f), m_name(f), m_references(f) {}
    virtual ~hkMemoryResourceHandle();                       // fn_82E155D0

    hkRefVariant m_variant;                // +0x8
    hkStringPtr m_name;                    // +0xC
    hkArray<ExternalLink> m_references;    // +0x10
};

// hkMemoryResourceContainer (0x28 bytes)
class hkMemoryResourceContainer : public hkResourceContainer {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_BASE);
    hkMemoryResourceContainer(const char *name);             // fn_82E15738
    hkMemoryResourceContainer(hkFinishLoadedObjectFlag f)
        : hkResourceContainer(f), m_name(f), m_resourceHandles(f), m_children(f) {}
    virtual ~hkMemoryResourceContainer();                    // fn_82E15830

    hkStringPtr m_name;                                                   // +0x8
    hkMemoryResourceContainer *m_parent;                                  // +0xC (not owned)
    hkArray<hkRefPtr<hkMemoryResourceHandle> > m_resourceHandles;         // +0x10
    hkArray<hkRefPtr<hkMemoryResourceContainer> > m_children;             // +0x1C
};

const void *HK_CALL getVtablehkxMeshUserChannelInfo()
{
    union {
        __declspec(align(16)) void *ptr;   // HK_ALIGN16
        char buf[sizeof(hkxMesh::UserChannelInfo)];
    } u;
    hkFinishLoadedObjectFlag f;
    new (u.buf) hkxMesh::UserChannelInfo(f);
    return u.ptr;
}
