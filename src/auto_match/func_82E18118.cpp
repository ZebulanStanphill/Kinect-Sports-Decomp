#include "havok/hkClass.h"

extern "C" int fn_82CEB2D8(const hkClass *parent, int key, void *context);
extern "C" int fn_82E17EE8(const hkClassMember *member);

extern "C" int fn_82E18118(const hkClass *parent, const hkClassMember *member, int key, void *context)
{
    int ok = fn_82CEB2D8(parent, key, context);

    if (member->m_type == hkClassMember::TYPE_STRUCT) {
        const hkClass *klass = member->getClass();
        if (klass != 0) {
            int count = fn_82E17EE8(member);
            int k;
            for (k = 0; k < count; k++) {
                int i;
                for (i = 0; i < klass->getNumMembers(); i++) {
                    const hkClassMember *child = &klass->getMember(i);
                    if (!fn_82E18118(klass, child, i, context))
                        ok = 0;
                }
            }
        }
    }
    return ok;
}
