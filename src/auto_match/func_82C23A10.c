extern int fn_82C10B28(void *ctx, int kind, void *p);

typedef struct Sub {
    int pad0;
    void *p;
} Sub;

typedef struct Obj {
    int pad0;
    int type;
    char *data;
    char pad0c[0x10];
    Sub *sub;
} Obj;

int fn_82C23A10(void *param_1, Obj *param_2, void *param_3, char *param_4)
{
    char *p;

    if (param_2->type == 1 && param_2->data != 0) {
        p = param_2->data + 0x14;
    } else {
        if (param_2->type != 2 || param_2->data == 0) goto skip;
        p = param_2->data + 0x34;
    }
    fn_82C10B28(*(void **)(param_4 + 0xe0), 0xb, p);
    fn_82C10B28(*(void **)(param_4 + 0xe0), 0xb, &param_2->data);
skip:
    if (param_2->sub != 0) {
        if (param_2->sub->p != 0) {
            fn_82C10B28(*(void **)(param_4 + 0xe0), 0xb, &param_2->sub->p);
        }
        fn_82C10B28(*(void **)(param_4 + 0xe0), 0xb, &param_2->sub);
    }
    return 0;
}
