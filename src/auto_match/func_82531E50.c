/* Whether a point lies inside the centred box of the given half extents; below 720 lines one vertical
   bound is pulled in towards 1 by the overscan factor (the upper one unless the mode flag is set). */
typedef struct Point_82531E50 {
    float x; /* 0x0 */
    float y; /* 0x4 */
} Point_82531E50;

typedef struct Display_82531E50 {
    int pad0;
    unsigned int flipped; /* 0x4 */
    int pad8;
    unsigned int height; /* 0xc */
} Display_82531E50;

extern const float lbl_821CA45C[2];
extern float lbl_821916FC;
extern Display_82531E50 *fn_825308E8(void);

int fn_82531E50(Point_82531E50 point, float halfWidth, float halfHeight)
{
    Display_82531E50 *display;
    float bottom;

    display = fn_825308E8();
    if (display->height < 720) {
        if (display->flipped == 0) {
            bottom = halfHeight;
            halfHeight = lbl_821CA45C[1] - (lbl_821CA45C[1] - halfHeight) * lbl_821916FC;
        } else {
            bottom = lbl_821CA45C[1] - (lbl_821CA45C[1] - halfHeight) * lbl_821916FC;
        }
    } else {
        bottom = halfHeight;
    }
    if (point.x >= -halfWidth && point.x < halfWidth && point.y >= -bottom && point.y < halfHeight)
        return 1;
    return 0;
}
