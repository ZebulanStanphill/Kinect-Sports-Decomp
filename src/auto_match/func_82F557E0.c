typedef struct Obj_82F557E0 {
    int pad0;
    int active;      /* 0x04 */
    int pad8;
    int state;       /* 0x0C */
    char pad10[0x50 - 0x10];
    int flag50;      /* 0x50 */
    char pad54[0xA0 - 0x54];
    int flagA0;      /* 0xA0 */
    char padA4[0xB4 - 0xA4];
    float valB4;     /* 0xB4 */
} Obj_82F557E0;

typedef struct Target_82F557E0 {
    char pad0[0xB0];
    float valB0;     /* 0xB0 */
    char padB4[0x1A0 - 0xB4];
    float val1A0;    /* 0x1A0 */
    char pad1A4[0x1E0 - 0x1A4];
    float val1E0;    /* 0x1E0 */
} Target_82F557E0;

void fn_82F557E0(Obj_82F557E0 *p, Target_82F557E0 **q)
{
    int v;
    int s;

    if (p->active != 0) {
        s = p->state;
        if (s == 0) {
            if (p->flagA0 != 0 && p->valB4 < 0.1f) {
                v = 1;
            } else {
                if (p->flag50 == 0)
                    return;
                if (!(p->valB4 < 0.1f))
                    return;
                v = 2;
            }
            p->state = v;
            return;
        }
        if (s == 1) {
            if (!((*q)->val1E0 > (*q)->valB0))
                return;
        } else {
            if (s != 2)
                return;
            if (!((*q)->val1A0 < (*q)->valB0))
                return;
        }
    }
    p->state = 0;
}
