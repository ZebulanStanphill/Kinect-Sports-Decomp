#include <string.h>

extern void XamLoaderLaunchTitle(const char *name, unsigned int flags);
extern char lbl_82089368[]; /* "XLNI_DET_MEDIA" */
extern char lbl_82089354[]; /* "XLNI_DASH_ARCADE" */
extern char lbl_82089340[]; /* "XLNI_DASH_NUIHUB" */

void fn_82A2B830(const char *name, unsigned int flags)
{
    if (name != 0) {
        if (strcmp(name, lbl_82089368) == 0) {
            flags |= 0x2;
            name = 0;
        } else if (strcmp(name, lbl_82089354) == 0) {
            flags |= 0x100;
            name = 0;
        } else if (strcmp(name, lbl_82089340) == 0) {
            flags |= 0x40000;
            name = 0;
        }
    }
    XamLoaderLaunchTitle(name, flags);
}
