typedef struct Info_82D07E60 {
    unsigned char type;
    unsigned char pad1[7];
    int f8;
    int fC;
    int f10;
    unsigned char kind;
    unsigned char pad15[3];
    int f18;
    int f1C;
} Info_82D07E60;

extern void fn_82D07B30(int type, int a, int b, int ctx);
extern void fn_82D07CB0(int type, int a, int b, int c, int ctx);

void fn_82D07E60(Info_82D07E60 *info, int ctx)
{
    switch (info->kind) {
    case 0:
        fn_82D07B30(info->type, info->f8, info->fC, ctx);
        break;
    case 1: {
        int type = info->type;
        if (type >= 3 && type <= 4) {
            fn_82D07CB0(type, info->f18, info->f8, 0, ctx);
        }
        break;
    }
    }
}
