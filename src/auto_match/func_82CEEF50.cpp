#include "havok/hkClass.h"

extern "C" void *fn_82CEEB70(void *item, const hkClass *container);
extern "C" void fn_82CEE7F8(void *owner, void *item, const hkClass *container, void *ctx);
extern "C" void fn_82CEEE70(void *owner, const hkClass *container, void **items, int count, void *ctx);
extern "C" void fn_82CEEA70(const hkClassMember *member, void *item, void *ctx);
extern "C" void fn_82CFFA08(void *ctx, void *owner, void **item);

extern "C" void fn_82CEEF50(const hkClassMember *member, void **items, int count, void *ctx)
{
    const hkClass *container;
    void *owner;
    int i;

    if (count <= 0) {
        return;
    }
    switch (member->m_subtype) {
    case 0x14:
        container = &member->getStructClass();
        if (container != 0) {
            for (i = 0; i < count; i++) {
                owner = fn_82CEEB70(items[i], container);
                if (owner == 0) {
                    owner = (void *)member->m_name;
                }
                fn_82CEE7F8(owner, items[i], container, ctx);
            }
        }
        break;
    case 0x19:
        container = &member->getStructClass();
        if (container != 0) {
            fn_82CEEE70((void *)member->m_name, container, items, count, ctx);
        }
        break;
    case 0x1d:
        for (i = 0; i < count; i++) {
            fn_82CEEA70(member, items[i], ctx);
        }
        break;
    case 0x21:
        for (i = 0; i < count; i++) {
            fn_82CFFA08(ctx, (void *)member->m_name, &items[i]);
        }
        break;
    }
}
