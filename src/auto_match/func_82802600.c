#include <string.h>
typedef struct Obj_82802600 {
    void *unk0;
    unsigned int count;
} Obj_82802600;

void fn_82802600(Obj_82802600 *self, int *dst)
{
    unsigned int n = self->count * sizeof(int); if (n != 0) memset(dst, 0, n);
}
