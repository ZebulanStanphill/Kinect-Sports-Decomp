#include "xdk/vectorintrinsics.h"

struct V3_824465C8 {
    float x; /* 0x0 */
    float y; /* 0x4 */
    float z; /* 0x8 */

    V3_824465C8()
    {
    }
};

struct Scale_824465C8 {
    float x;
    float y;
    float z;
};

struct Point_824465C8 {
    __vector4 v;

    Point_824465C8()
    {
    }
};

struct Clip_824465C8 {
    int unk0;
    float speed; /* 0x4 */
};

struct Cursor_824465C8 {
    Clip_824465C8 **clip; /* 0x0 */
    int frame;            /* 0x4 */
    float time;           /* 0x8 */
};

struct Path_824465C8 {
    int unk0;
    int unk4;
    Cursor_824465C8 *cursor; /* 0x8 */
};

extern "C" Point_824465C8 fn_82440B28(Clip_824465C8 **clip, float time, float speed, int inactive);
extern "C" V3_824465C8 fn_82440D08(Clip_824465C8 **clip, float time, int frame, int inactive);
extern "C" void fn_82441D38(Path_824465C8 *path, int b, __vector4 v, V3_824465C8 s);

extern "C" void fn_824465C8(Path_824465C8 *path, int b, __vector4 target, Scale_824465C8 scale)
{
    Cursor_824465C8 *cursor = path->cursor;
    Scale_824465C8 unusedScale = scale;
    Point_824465C8 position = fn_82440B28(
        cursor->clip, cursor->time, (float)(unsigned char)(cursor->frame - 1) * (*cursor->clip)->speed, 0);
    __vector4 v = position.v;

    cursor = path->cursor;
    fn_82441D38(path, b, v, fn_82440D08(cursor->clip, cursor->time, (unsigned char)(cursor->frame - 1), 0));
}
