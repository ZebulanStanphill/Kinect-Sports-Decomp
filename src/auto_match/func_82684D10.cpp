// The third virtual function of GFxFileOpener: returns the first 64-bit field
// of the file information for a path, or -1 when fn_826E9E48 cannot get it.
#include "game/String_8268C510.h"

struct FileInfo_82684D10 {
    __int64 time;
    __int64 unk8;
    __int64 unk10;
};

extern "C" unsigned char fn_826E9E48(FileInfo_82684D10 *out, const String_8268C510 &path);

extern "C" __int64 fn_82684D10(void *self, const char *path)
{
    FileInfo_82684D10 info;

    if (fn_826E9E48(&info, path)) {
        return info.time;
    }
    return -1;
}
