// hkpSaveContactPointsUtil (Physics/Utilities/Collide/ContactModifiers/SaveContactPoints/hkpSaveContactPointsUtil.h,
// the path is Havok's): the utility that saves the contact points of a world into a physics system and loads them
// back. It has no data of its own; only its nested types are declared.
//  - EntitySelector: an interface with no base (RTTI), so its deleting destructor (82DF6BA8) frees through the
//    global operator delete, fn_8265CA20. Its vtable (??_7EntitySelector@hkpSaveContactPointsUtil@@6B@) is the
//    deleting destructor and one pure function; the anonymous hkEntitySelectorListed (82DF8680) derives from it.
//    The name and parameters of isEntityOk follow Havok's header.
//  - LoadPointsInput: 0xC bytes, the options of the load function (fn_82DF8520, which keeps its fn_ name). Its
//    inline constructor (in hkpPhysicsData::createWorld, 82DF3068) stores false, false, 0, true, true, false at
//    +0x0, +0x1, +0x4, +0x8, +0x9, +0xA. What each option means is not known; the members are named by offset.
#ifndef HAVOK_HKPSAVECONTACTPOINTSUTIL_H
#define HAVOK_HKPSAVECONTACTPOINTSUTIL_H

#include "havok/hkBase.h"

class hkpEntity;

extern "C" void fn_8265CA20(void *p);   // global operator delete

class hkpSaveContactPointsUtil {
public:
    class EntitySelector {
    public:
        static void operator delete(void *p) { fn_8265CA20(p); }
        virtual ~EntitySelector() {}
        virtual hkBool32 isEntityOk(const hkpEntity *entity) = 0;   // +0x4
    };

    struct LoadPointsInput {
        HK_FORCE_INLINE LoadPointsInput()
            : m_option0(false), m_option1(false), m_option4(0), m_option8(true), m_option9(true), m_optionA(false)
        {
        }

        hkBool m_option0;   // +0x0
        hkBool m_option1;   // +0x1
        int m_option4;      // +0x4
        hkBool m_option8;   // +0x8
        hkBool m_option9;   // +0x9
        hkBool m_optionA;   // +0xA
    };
};

#endif
