#include "havok/hkBase.h"
extern "C" {
int fn_82CEA280(void *, void *, int);
void fn_82CEA160(void *, hkMemoryAllocator *, void *, int);
const char *fn_82CEAC20(void *);
int fn_82CFBBF0(const char *, const char *);
char *fn_82CEAF20(void *, int);
void *fn_82CEAEA8(void *, int);
extern char lbl_8323AEF8[];
}
extern "C" void fn_83082BF0(void *object, void *map)
{
    int flags = fn_82CEA280(map, object, 0);
    if ((flags & 4) == 0) {
        fn_82CEA160(map, &hkMemoryRouter::getInstance().heap(), object, flags | 4);
        if (fn_82CFBBF0(fn_82CEAC20(object), "hkpConstraintInstance") == 0) {
            char *data = fn_82CEAF20(object, 2);
            void *member = fn_82CEAEA8(lbl_8323AEF8, 4);
            data[*(unsigned short *)((char *)member + 0x12)] = 0x19;
        }
    }
}
