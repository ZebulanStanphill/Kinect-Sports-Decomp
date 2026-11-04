#include "game/Writer_82E6FC00.h"

struct Self_82E717A8 : Writer_82E6FC00 {
    char pad48[0x72 - 0x48];
    unsigned short id;
};

extern "C" {
int fn_82E71510(Self_82E717A8 *self, void *key);
int fn_82E71308(Self_82E717A8 *self, void *key, int mask, unsigned __int64 *out, int a, int b);

void fn_82E717A8(Self_82E717A8 *self, void *key)
{
unsigned int id; unsigned __int64 v; if (fn_82E71510(self, key) >= 0) { id = self->id; v = 0; if (fn_82E71308(self, key, 0xff, &v, 0, 0) >= 0) self->Put(v, id); }
}
}
