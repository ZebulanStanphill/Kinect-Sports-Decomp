extern float lbl_821CC160;

typedef struct {
    int a, b;
    int c;  /* 0x8 */
    int d;  /* 0xc */
    int e;
    float f; /* 0x14 */
} S;

void fn_824E0E60(S *s)
{
    s->d = 0;
    s->c = 0;
    s->f = lbl_821CC160;
}
