typedef struct { int x, y; } P;
extern P lbl_8320A88C;

void fn_82836FF0(int *a, int *b)
{
    P t;

    t.y = lbl_8320A88C.y;
    t.x = lbl_8320A88C.x;
    *a = t.y;
    *b = t.x;
}
