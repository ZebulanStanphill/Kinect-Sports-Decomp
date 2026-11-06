typedef struct Info_82B455F8 {
    int a;
    unsigned int id;
    int rest[2];
} Info_82B455F8;

typedef struct Src_82B455F8 {
    char pad[0x18];
    int handle;
} Src_82B455F8;

typedef struct Self_82B455F8 {
    char pad[0x30];
    unsigned int id;
} Self_82B455F8;

extern int fn_828F0170(int handle, int zero, Info_82B455F8 *info);

int fn_82B455F8(Self_82B455F8 *param_1, Src_82B455F8 *param_2, unsigned int *param_3)
{
    unsigned int id;
    Info_82B455F8 info;

    id = 0;
    if (param_2 != 0) {
        int hr = fn_828F0170(param_2->handle, 0, &info);
        id = info.id;
        if (hr < 0) {
            id = 0xffffffff;
        }
    }
    if (((id & 0xffff0000) == 0 || (id & 0xffff0000) == (param_1->id & 0xffff0000)) &&
        ((id & 0xffff) == 0 || (id & 0xffff) == *(unsigned short *)((char *)param_1 + 0x32))) {
        *param_3 = id;
        return 1;
    }
    return 0;
}
