#include "havok/hkArray.h"

struct Updater_82E108D0 {
    const char *fromVersion;                                            // 0x00
    const char *toVersion;                                              // 0x04
    void *desc;                                                         // 0x08
    int(HK_CALL *optionalCustomFunction)(void *objects, void *tracker); // 0x0c
};

extern "C" {
int fn_82E132A0(void *registry, const char *fromVersion, const char *toVersion,
                hkArray<const Updater_82E108D0 *, hkContainerTempAllocator> &path);
void *fn_82E14238(void *registry, const char *version);
int fn_82E0FCA0(void *objects, void *tracker, void *desc, void *classRegistry);
}

extern "C" int fn_82E108D0(void *objects, void *tracker, void *registry, const char *fromVersion,
                           const char *toVersion)
{
    toVersion = toVersion ? toVersion : "Havok-7.0.0-r1";
    hkArray<const Updater_82E108D0 *, hkContainerTempAllocator> path;
    if (fn_82E132A0(registry, fromVersion, toVersion, path) == 0) {
        int result = 0;
        for (int i = 0; result == 0 && i < path.getSize(); ++i) {
            if (path[i]->optionalCustomFunction) {
                result = path[i]->optionalCustomFunction(objects, tracker);
            } else {
                result =
                    fn_82E0FCA0(objects, tracker, path[i]->desc, fn_82E14238(registry, path[i]->toVersion));
            }
        }
        return result;
    }
    return 1;
}
