#include "havok/hkBase.h"

extern "C" {
extern char lbl_8323E324[];
extern char lbl_8323AB38[];
extern char lbl_821428D8[];
void fn_82CEB3D8(void *, const char *, const void *, int, const void *, int, const void *, int, const void *, int, const void *, const void *, unsigned int, int);
}

// Register the reflected class, including its member table and member count.
extern "C" void fn_83133A30()
{
    fn_82CEB3D8(lbl_8323E324, "hkpConvexPieceStreamData", lbl_8323AB38, 0x2c, 0, 0, 0, 0, lbl_821428D8, 3, 0, 0, 0, 0);
}
