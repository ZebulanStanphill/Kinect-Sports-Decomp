typedef struct {
    char pad0[0x2c];
    int inverted;
} Obj_824066B8;
typedef struct {
    char pad0[0xc];
    unsigned int type;
} Info_824066B8;

extern void fn_824063F8(Obj_824066B8 *self, int on);

void fn_824066B8(Obj_824066B8 *self, Info_824066B8 *info)
{
    if (self->inverted != 0) {
        int flag;
        flag = info->type >= 3 && info->type != 6;
        if (!flag)
            fn_824063F8(self, 0);
        else
            fn_824063F8(self, 1);
    } else {
        if (info->type < 3 || (info->type >= 6 && info->type == 6))
            fn_824063F8(self, 1);
        else
            fn_824063F8(self, 0);
    }
}
