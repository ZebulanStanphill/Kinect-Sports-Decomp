#include "havok/hkBase.h"

struct SingletonNode_82CE7C00 {
    int reserved[2];
    SingletonNode_82CE7C00 *next; /* 0x8 */
    hkReferencedObject **value;   /* 0xc */
};

extern "C" SingletonNode_82CE7C00 *lbl_8323B468;

extern "C" void fn_82CE7C00(void)
{
    hkInplaceArray<SingletonNode_82CE7C00 *, 128> nodes;

    for (SingletonNode_82CE7C00 *node = lbl_8323B468; node != HK_NULL; node = node->next) {
        nodes.pushBack(node);
    }
    for (int i = nodes.getSize() - 1; i >= 0; --i) {
        hkReferencedObject *object = *nodes[i]->value;

        if (object != HK_NULL) {
            object->removeReferenceLockUnchecked();
            *nodes[i]->value = HK_NULL;
        }
    }
}
