// Game code that loads two packfiles embedded in a resource (the physics data
// and the physics system) through hkIArchive objects over memory, then marks
// the object (state 5) when one of the system's rigid bodies has property
// 0x2001. It needs C++ because hkIArchive's constructor and destructor are
// renamed (??0hkIArchive@@QAA@PBXHVhkBool@@@Z, ??1hkIArchive@@UAA@XZ). The
// packfile is read with an hkBinaryPackfileReader.
#include "havok/hkBase.h"

#include "havok/hkIArchive.h"
#include "havok/hkBinaryPackfileReader.h"
#include "havok/hkpWorldObject.h"

extern "C" {
int *fn_825A2410(int *p);
void fn_82E10A30(hkPackfileReader *reader, unsigned int v);
extern unsigned int lbl_8323FDE4;
}

struct RigidBody {
    char pad[0x78];
    hkSimpleProperty *m_properties;   // +0x78
    int m_numProperties;              // +0x7C

    bool hasProperty(hkUint32 key) const
    {
        for (int i = 0; i < m_numProperties; i++) {
            if (m_properties[i].m_key == key)
                return true;
        }
        return false;
    }
};

struct PhysicsSystem {
    char pad[8];
    RigidBody **m_rigidBodies;   // +0x8
    int m_numRigidBodies;        // +0xC
};

struct Blobs {
    const void *data0;
    unsigned int size0;
    const void *data1;
    unsigned int size1;
};

struct Obj {
    char pad[0xC];
    int state;               // +0xC
    void *physicsData;       // +0x10
    int sub14;               // +0x14
    PhysicsSystem *system;   // +0x18
};

extern "C" Blobs *fn_825A4E80(Obj *o);

extern "C" void fn_826032C8(Obj *o)
{
    Blobs *b = fn_825A4E80(o);
    if (b == 0)
        return;
    if (b->size0 != 0) {
        hkIArchive ar(b->data0, b->size0, false);
        hkBinaryPackfileReader reader;
        reader.loadEntireFile(ar.getStreamReader());
        fn_82E10A30(&reader, lbl_8323FDE4);
        o->physicsData = reader.getContents("hkpPhysicsData");
        hkPackfileData *d = reader.getPackfileData();
        d->addReference();
        d->addReference();
        *fn_825A2410(&o->sub14) = (int)d;
    }
    if (b->size1 != 0) {
        hkIArchive ar(b->data1, b->size1, false);
        hkBinaryPackfileReader reader;
        reader.loadEntireFile(ar.getStreamReader());
        o->system = (PhysicsSystem *)reader.getContents("hkpPhysicsSystem");
        hkPackfileData *d = reader.getPackfileData();
        d->addReference();
        d->addReference();
        *fn_825A2410(&o->sub14) = (int)d;
        if (o->state == 3) {
            PhysicsSystem *s = o->system;
            for (int i = 0; i < s->m_numRigidBodies; i++) {
                if (s->m_rigidBodies[i]->hasProperty(0x2001)) {
                    o->state = 5;
                    break;
                }
            }
        }
    }
}
