typedef struct Out_82DA5410 {
    float f0, f4, f8;
    int fc, f10;
    float f14, f18, f1c, f20, f24;
    char pad28[0x18];
    float f40, f44;
} Out_82DA5410;

typedef struct Src_82DA5410 {
    int pad0;
    float f4, f8;
    char padc[0x48];
    float f54;
    int pad58;
    float f5c;
    char pad60[0xac];
    float f10c, f110;
    int pad114[2];
    float f11c, f120;
} Src_82DA5410;

typedef struct Info_82DA5410 {
    int pad[2];
    int f8, fc;
} Info_82DA5410;

void fn_82DA5410(Out_82DA5410 *out, Src_82DA5410 *s, Info_82DA5410 *info)
{
    out->f0 = s->f10c;
    out->f4 = s->f11c * s->f10c;
    out->f8 = s->f110;
    out->f14 = s->f120;
    out->f18 = s->f120 * s->f11c;
    out->f40 = s->f4;
    out->f44 = s->f8;
    out->f1c = s->f54 * s->f110;
    out->f20 = s->f8;
    out->f24 = s->f5c * s->f110;
    out->fc = info->f8;
    out->f10 = info->fc;
}
