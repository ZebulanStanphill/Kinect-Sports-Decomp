typedef struct {
    unsigned char pad[0x20];
    unsigned int id;
    unsigned char pad2[0xc];
} Info;

typedef struct {
    unsigned char pad[8];
    unsigned int id;
    unsigned char pad2[0x10];
    unsigned int flags;
} Obj;

extern void fn_82A23B20(Obj *o, int a, char *buf, int size);
extern int fn_82A35BD8(char *buf, int a, Info *info);
extern int fn_82A1F470(void);

int fn_82A24520(int param_1, Obj *o)
{
    Info info;
    char buf[256];

    o->flags &= ~0x20;
    if ((o->flags & 0x80) == 0) {
        fn_82A23B20(o, 1, buf, 0x100);
        if ((o->flags & 0x40) != 0) {
            if (fn_82A35BD8(buf, 0, &info) == 0) {
                return fn_82A1F470();
            }
            if (info.id != o->id) {
                return 0x18;
            }
        }
    }
    return 0;
}
