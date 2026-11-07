typedef struct Owner_828505C0 Owner_828505C0;
typedef struct Sub_828505C0 Sub_828505C0;

struct Sub_828505C0 {
    int pad0[7];
    unsigned int type; /* 0x1c */
};

struct Owner_828505C0 {
    int pad0[0x24];
    Sub_828505C0 *sub; /* 0x90 */
};

typedef struct Arg_828505C0 {
    int pad0;
    void *obj; /* 0x4 */
} Arg_828505C0;

extern int fn_828106A0(void *p);
extern int fn_8285C2E8(Sub_828505C0 *p, void *buf);
extern int fn_8285F140(Sub_828505C0 *p, void *buf);

void fn_828505C0(Owner_828505C0 *param_1, Arg_828505C0 *param_2)
{
    if (param_1->sub != 0) {
        switch (param_1->sub->type) {
        case 1: {
            int *p = (int *)param_2->obj;
            int *q = p + 4;
            p[1] = (int)q;
            p[0] = 0;
            fn_8285F140(param_1->sub, q);
            break;
        }
        case 0: {
            char *o = (char *)param_2->obj;
            char *q;
            fn_828106A0(o);
            q = o + 0x20;
            *(int *)(o + 0xc) = 0;
            *(char **)(o + 0x14) = q;
            *(int *)(o + 0x10) = 0;
            fn_8285C2E8(param_1->sub, q);
            break;
        }
        }
    }
}
