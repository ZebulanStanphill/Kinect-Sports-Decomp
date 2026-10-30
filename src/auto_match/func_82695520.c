typedef struct Src_82695520 {
    char pad[0x80];
    int *ref;
} Src_82695520;
typedef struct Dst_82695520 {
    unsigned char kind;
    int *ref;
} Dst_82695520;
extern int *fn_8269F500(Src_82695520 *s);

Dst_82695520 *fn_82695520(Dst_82695520 *param_1, Src_82695520 *param_2)
{
    int v;

    param_1->kind = 7;
    if (param_2 == 0) {
        param_1->ref = 0;
    } else {
        if ((int)param_2->ref == 0) {
            v = (int)fn_8269F500(param_2);
        } else {
            v = (int)param_2->ref;
        }
        param_1->ref = (int *)v;
        if ((int *)v != 0) {
            (*(int *)v)++;
        }
    }
    return param_1;
}
