typedef struct Obj_828FA828 {
    int pad0;
    int pad4;
    unsigned int *arr;
} Obj_828FA828;

extern int fn_828FA548(Obj_828FA828 *p, int a, int *outIdx);

void fn_828FA828(Obj_828FA828 *p, int a, unsigned int flag)
{
    int idx;
    int i;

    if (fn_828FA548(p, a, &idx) >= 0) {
        i = idx;
        if (flag == 0xff) {
            p->arr[i] &= 0x20;
            p->arr[i] |= 1;
        } else if (flag == 0x10) {
            p->arr[i] |= 0x10;
        } else {
            p->arr[i] &= 0xfffffff0;
            p->arr[i] = (flag & 0xf) | p->arr[i];
        }
    }
}
