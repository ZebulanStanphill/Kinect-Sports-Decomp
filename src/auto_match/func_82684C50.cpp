// The second virtual function of GFxFileOpener: creates the file object for a
// path. The path arrives as a C string, so a temporary string is built for
// the file's constructor and released afterwards.
#include "game/File_82693A48.h"

extern "C" File_82693A48 *fn_82684C50(void *self, const char *path, int flags, int mode)
{
    return new File_82693A48(path, flags, mode);
}
