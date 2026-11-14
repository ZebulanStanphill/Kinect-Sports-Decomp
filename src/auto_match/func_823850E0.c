typedef struct Rect_823850E0 {
    float left;
    float top;
    float right;
    float bottom;
} Rect_823850E0;

typedef struct View_823850E0 {
    char pad0[0xec];
    Rect_823850E0 *rect;
} View_823850E0;

extern View_823850E0 *fn_8249ABC0(void);
extern void fn_8249CED0(Rect_823850E0 *out, Rect_823850E0 *rect);

float fn_823850E0(float scale, int raw)
{
    if (raw != 0) {
        Rect_823850E0 rect = *fn_8249ABC0()->rect;
        return (rect.right - rect.left) * scale;
    } else {
        Rect_823850E0 rect;
        View_823850E0 *view = fn_8249ABC0();
        fn_8249CED0(&rect, view->rect);
        return (rect.right - rect.left) * scale;
    }
}
