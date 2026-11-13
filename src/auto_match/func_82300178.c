typedef struct Cfg_82300178 {
    int pad;
    unsigned char enabled;
} Cfg_82300178;
typedef struct Stats_82300178 {
    char pad0[0xa4];
    float a;
    char pad1[0x274 - 0xa8];
    float b;
    char pad2[0x8bc - 0x278];
    float c;
} Stats_82300178;
typedef struct Owner_82300178 {
    char pad[0x14];
    Stats_82300178 *stats;
} Owner_82300178;
typedef struct Src_82300178 {
    char pad[0x48];
    float value;
} Src_82300178;
typedef struct Obj_82300178 {
    char pad0[0x528];
    Owner_82300178 *owner;
    Src_82300178 *src;
    char pad1[0x540 - 0x530];
    float scaled;
    float product;
} Obj_82300178;

extern Cfg_82300178 *lbl_832975B0;
extern Cfg_82300178 *fn_82250A18(void);
extern const float lbl_821924E8[];
extern const float lbl_821CA45C[2];

void fn_82300178(Obj_82300178 *self)
{
    Cfg_82300178 *c = lbl_832975B0 ? lbl_832975B0 : fn_82250A18();
    float scale;
    Stats_82300178 *s;
    if (c->enabled != 0)
        scale = lbl_821924E8[0x20];
    else
        scale = lbl_821CA45C[1];
    self->scaled = self->src->value * scale;
    s = self->owner->stats;
    self->product = s->c * s->b * s->a;
}
