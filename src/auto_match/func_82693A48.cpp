// Constructor of the file object that GFxFileOpener creates
// (game/File_82693A48.h): one reference, no file yet, then fn_82693880 opens
// the path with the given flags and mode.
#include "game/File_82693A48.h"

extern "C" {
extern char lbl_82006020[]; // the class's vtable
void fn_82693880(File_82693A48 *self, const String_8268C510 &path, int flags, int mode);
}

File_82693A48::File_82693A48(const String_8268C510 &path, int flags, int mode)
{
    vtbl = lbl_82006020;
    fn_82693880(this, path, flags, mode);
}
