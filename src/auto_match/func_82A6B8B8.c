#include <string.h>

typedef struct Entry_82A6B8B8 {
    unsigned int words[7];
} Entry_82A6B8B8;

typedef struct Owner_82A6B8B8 {
    char pad[0x3c];
    int mode;
    char pad40[0xb4];
    int count;
    char padf8[0x64];
    Entry_82A6B8B8 ***entries;
} Owner_82A6B8B8;

extern void *fn_82C2B580(unsigned int size);

int fn_82A6B8B8(Owner_82A6B8B8 *self)
{
    int result = 0;
    int row;
    int column;
    if (self->mode > 2) {
        self->entries = (Entry_82A6B8B8 ***)fn_82C2B580(self->count * 4);
        if (self->entries == 0) {
            goto failed;
        }
        memset(self->entries, 0, self->count * 4);
        for (row = 0; row < self->count; ++row) {
            self->entries[row] = (Entry_82A6B8B8 **)fn_82C2B580(self->count * 4);
            if (self->entries[row] == 0) {
                goto failed;
            }
            memset(self->entries[row], 0, self->count * 4);
            for (column = 0; column < self->count; ++column) {
                self->entries[row][column] = (Entry_82A6B8B8 *)fn_82C2B580(0x1c);
                if (self->entries[row][column] == 0) {
                    goto failed;
                }
                memset(self->entries[row][column], 0, 0x1c);
            }
        }
    }
    goto done;
failed:
    result = 0x8007000e;
done:
    return result;
}
