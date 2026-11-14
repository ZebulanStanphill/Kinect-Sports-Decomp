typedef struct Info_823813F8 {
    int a;
    int b;
    int enabled;        /* 0x08 */
    int c;
} Info_823813F8;

typedef struct Self_823813F8 {
    int pad0;
    void *world;        /* 0x04 */
} Self_823813F8;

extern Info_823813F8 lbl_831CB180[];
extern unsigned int fn_823737B8(void *world, int id);
extern int fn_823814C0(Self_823813F8 *self, int id);
extern void fn_823815D0(Self_823813F8 *self, int id, int value, int mode);

void fn_823813F8(Self_823813F8 *self, int type, int value, int id, int value2, int force)
{
    int isZero = id == 0;
    unsigned int exists = fn_823737B8(self->world, id);

    if (force != 0)
        fn_823815D0(self, id, value2, 5);
    else if (exists == 0)
        fn_823815D0(self, id, value2, 4);
    if (type != 0xc) {
        if (lbl_831CB180[fn_823814C0(self, id)].enabled != 0)
            fn_823815D0(self, isZero, value, 0x10);
        else
            fn_823815D0(self, isZero, value, 0xf);
    } else {
        fn_823815D0(self, isZero, -1, 2);
    }
}
