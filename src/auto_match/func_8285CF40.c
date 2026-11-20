typedef struct Point_8285D578 {
    float x; /* 0x0 */
    float y; /* 0x4 */
} Point_8285D578;

typedef struct Rect_8285CF40 {
    float x;      /* 0x0 */
    float y;      /* 0x4 */
    float width;  /* 0x8 */
    float height; /* 0xc */
} Rect_8285CF40;

typedef struct Globals_8285CF40 {
    char pad0[0x266];
    unsigned char noHalfPixelOffset; /* 0x266 */
} Globals_8285CF40;

extern Globals_8285CF40 lbl_83211340;

extern void fn_82811898(Point_8285D578 *point, float x, float y);
extern float fn_8280A5D8(float value);

void fn_8285CF40(const Rect_8285CF40 *rect, const float *in, Point_8285D578 *halfSize, Point_8285D578 *centre,
                 float *out)
{
    float halfWidth = rect->width * 0.5f;
    float halfHeight = rect->height * 0.5f;
    float scaleY;
    float scaleX;

    fn_82811898(halfSize, halfWidth, -halfHeight);
    if (lbl_83211340.noHalfPixelOffset == 0) {
        fn_82811898(centre, rect->x + halfWidth + 0.5f, rect->y + halfHeight + 0.5f);
    } else {
        fn_82811898(centre, rect->x + halfWidth, rect->y + halfHeight);
    }
    scaleY = fn_8280A5D8(halfHeight);
    scaleX = fn_8280A5D8(halfWidth);
    out[0] = in[0] * scaleY;
    out[1] = in[1] * scaleY;
    out[2] = in[2] * scaleX;
    out[3] = in[3] * scaleX;
}
