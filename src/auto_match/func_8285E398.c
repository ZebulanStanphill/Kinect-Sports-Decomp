typedef struct Rect_8285E398 {
    float x;      /* 0x0 */
    float y;      /* 0x4 */
    float width;  /* 0x8 */
    float height; /* 0xc */
} Rect_8285E398;

typedef struct Point_8285E398 {
    float x;
    float y;
} Point_8285E398;

typedef struct State_8285E398 {
    unsigned char data[0xa8];
} State_8285E398;

extern unsigned char lbl_83211340[];

extern void fn_8285D080(int a, int b, Rect_8285E398 *rect, int e, int d, int f, int g, int h);
extern void fn_8285D200(int a, int b);
extern void fn_82811898(Point_8285E398 *out, float x, float y);
extern void fn_8285DF00(int c, int g, Point_8285E398 *topLeft, Point_8285E398 *bottomRight, int arg5);
extern void fn_8285D258(void *target, void *state);

void fn_8285E398(int a, int b, int c, int d, int e, int f, Rect_8285E398 *rect, int g, int h)
{
    Point_8285E398 topLeft;
    Point_8285E398 bottomRight;
    State_8285E398 saved;

    if (lbl_83211340[0x265] != 0) {
        if (lbl_83211340[0x264] == 0) {
            fn_8285D080(a, b, rect, e, d, f, g, h);
        }
        saved = *(State_8285E398 *)(lbl_83211340 + 0xc8);
        fn_8285D200(a, b);
        fn_82811898(&topLeft, rect->x, rect->y);
        fn_82811898(&bottomRight, rect->width + rect->x, rect->height + rect->y);
        fn_8285DF00(c, g, &topLeft, &bottomRight, 0);
        *(State_8285E398 *)(lbl_83211340 + 0xc8) = saved;
        fn_8285D258(lbl_83211340 + 0x40, lbl_83211340 + 0xc8);
    } else {
        fn_8285D200(a, b);
        fn_8285DF00(c, 0, 0, 0, 0);
    }
}
