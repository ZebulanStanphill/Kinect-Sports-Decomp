extern char lbl_820145C0[];

typedef struct {
    void *vt;
    unsigned short a;
    int pad8;
    int c;
    unsigned short d;
    float e;
} S;

void fn_82759550(S *p)
{
    p->a = 0;
    p->e = 1.0f;
    p->vt = lbl_820145C0;
    p->c = 0;
    p->d = 0;
}
