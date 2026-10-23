// hkpPhysicsSystemWithContacts::hkpPhysicsSystemWithContacts() (Physics/Utilities/Serialize/
// hkpPhysicsSystemWithContacts.h): the hkpPhysicsSystem default constructor, the class vtable, then an empty
// m_contacts array. It keeps its fn_ name (func_82DF3308, a `new hkpPhysicsSystemWithContacts` site that a
// C unit could match, calls it), so the constructor is called explicitly. hkpPhysicsSystem's default
// constructor is out of line as fn_82D94B58 (kept: a Matching unit calls it) and stores its own vtable, so
// the stand-in base below declares no vtable store of its own (novtable) and opaque members.
#include "havok/hkBase.h"

class hkpPhysicsSystem;
extern "C" hkpPhysicsSystem *fn_82D94B58(hkpPhysicsSystem *self);   // hkpPhysicsSystem::hkpPhysicsSystem()

class __declspec(novtable) hkpPhysicsSystem {
public:
    HK_FORCE_INLINE hkpPhysicsSystem() { fn_82D94B58(this); }
    virtual ~hkpPhysicsSystem();

    char m_data[0x44 - 0x4];   // hkReferencedObject part, the four arrays, m_name, m_userData, m_active
};

struct hkpSerializedAgentNnEntry;

class hkpPhysicsSystemWithContacts : public hkpPhysicsSystem {
public:
    hkpPhysicsSystemWithContacts() {}
    virtual ~hkpPhysicsSystemWithContacts();

    hkArray<hkpSerializedAgentNnEntry *> m_contacts;   // +0x44
};

extern "C" hkpPhysicsSystemWithContacts *fn_82DF3B68(hkpPhysicsSystemWithContacts *self)
{
    self->hkpPhysicsSystemWithContacts::hkpPhysicsSystemWithContacts();
    return self;
}
