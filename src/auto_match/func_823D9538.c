typedef __declspec(passinreg) __declspec(align(16)) struct __vector4 {
    float vector4_f32[4];
} __vector4;

__vector4 __vspltisw(int value);
__vector4 __vsubfp(__vector4 a, __vector4 b);
__vector4 __vmulfp(__vector4 a, __vector4 b);
__vector4 __vmaddfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vnmsubfp(__vector4 a, __vector4 c, __vector4 b);
__vector4 __vmsum3fp(__vector4 a, __vector4 b);
__vector4 __vrsqrtefp(__vector4 v);
__vector4 __vcmpeqfp(__vector4 a, __vector4 b);
__vector4 __vsel(__vector4 a, __vector4 b, __vector4 c);
__vector4 __vcfsx(__vector4 v, int shift);

typedef struct Tuning_823D9538 {
    char pad0[0x1a0];
    float blockDistance;            /* 0x1a0 */
} Tuning_823D9538;

typedef struct Map_823D9538 {
    char pad0[0x8];
    unsigned int size;              /* 0x08 */
} Map_823D9538;

typedef struct Team_823D9538 {
    Map_823D9538 **maps;            /* 0x00 */
    char pad4[0xc];
    int current;                    /* 0x10 */
} Team_823D9538;

typedef struct Player_823D9538 {
    char pad0[0x1c];
    Team_823D9538 *team;            /* 0x1c */
    char pad20[0x8];
    int side;                       /* 0x28 */
    int zone;                       /* 0x2c */
    char pad30[0x50];
    __vector4 position;             /* 0x80 */
} Player_823D9538;

extern Tuning_823D9538 lbl_831D18A8;
void fn_823D9318(void *field, int zone, __vector4 *min, __vector4 *max);
Player_823D9538 *fn_822ABA88(Map_823D9538 *map, unsigned int key);

static __forceinline __vector4 Length3(__vector4 v)
{
    __vector4 d, h, rsq, rt, mask, rcp, zero, result;

    h = __vspltisw(1);
    zero = __vspltisw(0);
    d = __vmsum3fp(v, v);
    h = __vcfsx(h, 1);
    rsq = __vrsqrtefp(d);
    mask = __vcmpeqfp(d, zero);
    rt = __vmulfp(d, h);
    rcp = __vmulfp(rsq, rsq);
    h = __vnmsubfp(rt, rcp, h);
    rsq = __vmaddfp(rsq, h, rsq);
    result = __vmulfp(d, rsq);
    return __vsel(result, d, mask);
}

int fn_823D9538(void *field, Player_823D9538 *self)
{
    __vector4 min, max, pos, len;
    Team_823D9538 *team = self->team;
    Map_823D9538 *map;
    unsigned int i;

    fn_823D9318(field, self->zone, &min, &max);
    map = team->maps[team->current];
    for (i = 0; i < map->size; i++) {
        Player_823D9538 *other = fn_822ABA88(map, i);

        if (other->side == self->side)
            continue;
        pos = other->position;
        if (pos.vector4_f32[0] < min.vector4_f32[0] || pos.vector4_f32[0] >= max.vector4_f32[0])
            continue;
        if (pos.vector4_f32[2] < min.vector4_f32[2] || pos.vector4_f32[2] >= max.vector4_f32[2])
            continue;
        len = Length3(__vsubfp(pos, self->position));
        if (len.vector4_f32[0] >= lbl_831D18A8.blockDistance)
            return 1;
    }
    return 0;
}
