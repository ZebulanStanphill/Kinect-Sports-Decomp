#include "havok/hkBase.h"
#include "havok/hkAabb.h"
#include "havok/hkpBroadPhaseBorder.h"
#include "havok/hkpBreakOffPartsUtil.h"

// hkpWorldCinfo (0xE0), kept local: havok/hkpWorldCinfo.h includes havok/hkpCollisionFilter.h, which this unit
// cannot use (below). Only the members used here and the three hkRefPtrs its destructor releases are named. The
// constructor is out of line; the destructor is inline but not forced, as in the header, so this /O1 unit calls
// the copy emitted in game code (8253C630). (With a forced inline destructor the frame is 0x10 bytes larger.)
class __declspec(align(16)) hkpWorldCinfo : public hkReferencedObject {
public:
    hkpWorldCinfo();
    virtual ~hkpWorldCinfo() {}
    hkUint8 m_pad8[0x28];
    hkAabb m_broadPhaseWorldAabb;                     // +0x30
    hkUint8 m_pad50[0x8];
    hkRefPtr<hkReferencedObject> m_collisionFilter;    // +0x58
    hkRefPtr<hkReferencedObject> m_convexListFilter;   // +0x5C
    hkUint8 m_pad60[0xc];
    hkRefPtr<hkReferencedObject> m_memoryWatchDog;     // +0x6C
    hkUint8 m_pad70[0x70];
};

// Kept local: with havok/hkpCollisionFilter.h the four filter interfaces are base classes, and storing the game's
// interface vtables through them is scheduled differently (m_type's store moves after the +0x14 vtable store).
class hkpCollisionFilter : public hkReferencedObject {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_COLLIDE);
    hkpCollisionFilter();
    void *m_interfaceVtables[4];   // +0x8
    hkUint32 m_prepad[2];          // +0x18
    hkUint32 m_type;               // +0x20
    hkUint32 m_postpad[3];         // +0x24
};

// The game's group filter (0x100, like hkpGroupFilter): vtables are game lbl_ symbols.
class GameGroupFilter : public hkpCollisionFilter {
public:
    int m_nextFreeSystemGroup;              // +0x30
    hkUint32 m_collisionLookupTable[32];    // +0x34
    hkUint8 m_pad[0x100 - 0xb4];
};

extern "C" {
void fn_825A3100(hkpWorldCinfo *info, hkVector4 *gravity, void *out);
void fn_82D404C8(void *p);
void fn_82D80BA0(hkpWorld *world, void *ext);
void *fn_8265C9E0(unsigned int size);    // operator new
void fn_825A4488(void *self, int n);
void fn_8258F940(void *filter);
void fn_825269D0(int id, void *settings);
void fn_82D88E60(hkpWorld *world, hkpCollisionFilter *filter, hkBool checkBroadPhase, int updateMode, int collectionMode);
void XMemCpy(void *dst, const void *src, int n);
extern void *lbl_821C7F98[];
extern void *lbl_821C40C4[], *lbl_821C40D8[], *lbl_821C40E4[], *lbl_821C40F0[];
extern void *lbl_821C7FC0[];
extern void *lbl_821C6594[], *lbl_821C65A4[], *lbl_821C65AC[], *lbl_821C65BC[], *lbl_821C65C4[];
extern void *lbl_821C7FE0[], *lbl_821C7FEC[];
extern unsigned int lbl_8327F680[];
}

struct WorldAabbSettings {
    hkUint8 m_pad0[0x11];
    hkBool m_useAabb;      // +0x11
    hkUint8 m_pad12[0xae];
    hkAabb m_aabb;         // +0xc0
};

struct GravitySettings {
    hkUint8 m_pad0[0x10];
    hkVector4 m_gravity;        // +0x10
    hkVector4 m_scaledGravity;  // +0x20
    hkReal m_scale;             // +0x30
};

struct Settings {
    hkUint8 m_pad0[0xc0];
    WorldAabbSettings m_world;       // +0xc0
    hkUint8 m_pad1a0[0x10];
    GravitySettings m_gravity;       // +0x1b0
};

struct hkpSimulationPart { hkUint8 m_pad0[0x48]; hkReferencedObject *m_48; };
struct hkpWorldImpl { hkUint8 m_pad0[8]; hkpSimulationPart *m_8; hkUint8 m_padc[0x74]; void *m_80; };

struct Physics {
    hkUint8 m_pad0[8];
    hkpWorld *m_world;                  // +0x8
    hkUint8 m_padc[8];
    hkpBreakOffPartsUtil *m_breakOff;   // +0x14
    void *m_listener;                   // +0x18
    hkpCollisionFilter *m_filter;       // +0x1c
    void *m_extension;                  // +0x20
    const void *m_listenerData;         // +0x24
    hkUint8 m_pad28[0x14];
    void *m_collisionListener;          // +0x3c
    hkUint8 m_pad40[4];
    int m_44;                           // +0x44
    hkUint8 m_pad48[0xa8];
    int m_f0;                           // +0xf0
    int m_f4;                           // +0xf4
};

struct RefObj { void **m_vtable; hkUint16 m_memSizeAndFlags; hkInt16 m_referenceCount; };
struct Array { void *m_data; int m_size; int m_capacityAndFlags; };
struct Obj0C : RefObj { int m_8; };
struct Ext5C : RefObj { void *m_vtables[3]; hkUint8 m_pad14[0x30]; Array m_a; Array m_b; };
struct Listener28 { void **m_vtable; Array m_a; hkUint8 m_member[0xc]; Array m_b; };

// The game's collision listener (0x54): its two vtables are game lbl_ symbols.
class __declspec(novtable) GameCollisionListener : public hkReferencedObject, public hkpCollisionListener {
public:
    HK_DECLARE_CLASS_ALLOCATOR(HK_MEMORY_CLASS_USER);
    HK_FORCE_INLINE GameCollisionListener(const void *data)
    {
        *(void ***)this = lbl_821C7FE0;
        *(void ***)static_cast<hkpCollisionListener *>(this) = lbl_821C7FEC;
        XMemCpy(m_data, data, 0x48);
    }
    hkUint8 m_data[0x48];
};

static HK_FORCE_INLINE void *blockAlloc(int n)
{
    RefObj *p = (RefObj *)hkMemoryRouter::getInstance().heap().blockAlloc(n);
    p->m_memSizeAndFlags = (hkUint16)n;
    return p;
}

static HK_FORCE_INLINE void initArray(Array &a) { a.m_data = 0; a.m_size = 0; a.m_capacityAndFlags = 0x80000000; }

static HK_FORCE_INLINE Listener28 *constructListener(Listener28 *p)
{
    p->m_vtable = lbl_821C7FC0;
    initArray(p->m_a);
    fn_825A4488(p->m_member, 0);
    initArray(p->m_b);
    return p;
}

extern "C" void fn_8253CC70(Physics *self, Settings *settings)
{
    hkpWorldCinfo info;
    WorldAabbSettings &ws = settings->m_world;
    if (ws.m_useAabb)
    {
        info.m_broadPhaseWorldAabb.m_min = ws.m_aabb.m_min;
        info.m_broadPhaseWorldAabb.m_max = ws.m_aabb.m_max;
    }
    hkVector4 gravity;
    fn_825A3100(&info, &gravity, &self->m_f4);
    GravitySettings &gs = settings->m_gravity;
    gs.m_scaledGravity.setMul4(gs.m_scale, gravity);
    gs.m_gravity = gravity;
    self->m_f4 = 0;

    self->m_world = new hkpWorld(info, 70000);
    hkpSimulationPart *sim = ((hkpWorldImpl *)self->m_world)->m_8;
    hkReferencedObject *old = sim->m_48;
    Obj0C *o = (Obj0C *)blockAlloc(0xc);
    o->m_referenceCount = 1;
    o->m_vtable = lbl_821C7F98;
    o->m_8 = 0x20000;
    sim->m_48 = (hkReferencedObject *)o;
    old->removeReference();

    fn_82D404C8(((hkpWorldImpl *)self->m_world)->m_80);

    Ext5C *ext = (Ext5C *)blockAlloc(0x5c);
    new (ext) hkpBroadPhaseBorder(self->m_world, 0, false);
    ext->m_vtable = lbl_821C40C4;
    ext->m_vtables[0] = lbl_821C40D8;
    ext->m_vtables[1] = lbl_821C40E4;
    ext->m_vtables[2] = lbl_821C40F0;
    initArray(ext->m_a);
    initArray(ext->m_b);
    self->m_extension = ext;
    fn_82D80BA0(self->m_world, ext);

    void *mem = fn_8265C9E0(0x28);
    self->m_listener = mem ? constructListener((Listener28 *)mem) : 0;

    self->m_breakOff = new hkpBreakOffPartsUtil(self->m_world, (hkpBreakOffPartsListener *)self->m_listener);

    GameGroupFilter *filter = (GameGroupFilter *)blockAlloc(0x100);
    new (filter) hkpCollisionFilter();
    *(void ***)filter = lbl_821C6594;
    filter->m_interfaceVtables[0] = lbl_821C65A4;
    filter->m_interfaceVtables[1] = lbl_821C65AC;
    filter->m_interfaceVtables[2] = lbl_821C65BC;
    filter->m_interfaceVtables[3] = lbl_821C65C4;
    filter->m_type = 2;
    for (int i = 0; i < 32; i++)
        filter->m_collisionLookupTable[i] = 0xffffffff;
    filter->m_nextFreeSystemGroup = 0;
    self->m_filter = filter;
    fn_8258F940(filter);

    if (lbl_8327F680[0x14c / 4])
        fn_825269D0(0x53, settings);
    fn_82D88E60(self->m_world, self->m_filter, true, 0, 1);

    if (self->m_listenerData) {
        GameCollisionListener *l = new GameCollisionListener(self->m_listenerData);
        self->m_collisionListener = l;
        self->m_world->addContactListener(l);
    }
    self->m_f0 = 1;
    self->m_44 = 1;
}
