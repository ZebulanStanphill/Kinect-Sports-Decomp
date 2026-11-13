// Returns a string holding the part of the object's path that fn_8270C6B0
// picks out of it.
#include "game/String_8268C510.h"

struct Info_826D71D0 {
    char pad[0x24];
    String_8268C510 path;
};

struct Owner_826D71D0 {
    char pad[0x10];
    Info_826D71D0 *info;
};

extern "C" const char *fn_8270C6B0(const char *path);

extern "C" String_8268C510 fn_826D71D0(Owner_826D71D0 *self)
{
    return String_8268C510(fn_8270C6B0(self->info->path.Data()->text));
}
