extern float lbl_8200DFF4;

typedef struct Inner {
    char pad0[0x20];
    unsigned int rate;
} Inner;

typedef struct Info {
    char pad0[0x6c];
    Inner *inner;
    char pad70[0xd4 - 0x70];
    unsigned short count;
} Info;

typedef struct Obj {
    char pad0[8];
    Info *info;
    char padc[0x20 - 0xc];
    unsigned int start;
    unsigned int end;
    char pad28[0x34 - 0x28];
    unsigned int offset;
} Obj;

float fn_83049158(Obj *o)
{
    unsigned short n = o->info->count;
    if (n != 0) {
        return ((float)(o->end - o->start + 1) * (float)(n - 1) + (float)o->offset) * lbl_8200DFF4
            / (float)o->info->inner->rate;
    }
    return 0.0f;
}
