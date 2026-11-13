typedef struct Entry_82300E58 {
    float cur;
    float prev;
    float pad[2];
} Entry_82300E58;

typedef struct Set_82300E58 {
    Entry_82300E58 single[3];
    Entry_82300E58 pair[5][2];
} Set_82300E58;

typedef struct Src_82300E58 {
    char pad[0x14];
    float f14;
    float f18;
    float f1c;
    float f20;
    float f24;
    float f28;
    float f2c;
    float f30;
} Src_82300E58;

void fn_82300E58(Set_82300E58 *o, const Src_82300E58 *s)
{
    int i;

    for (i = 0; i < 3; i++) {
        o->single[i].prev = o->single[i].cur;
    }
    for (i = 0; i < 5; i++) {
        o->pair[i][0].prev = o->pair[i][0].cur;
        o->pair[i][1].prev = o->pair[i][1].cur;
    }
    o->single[0].cur = s->f1c;
    o->pair[0][0].cur = s->f14;
    o->pair[0][1].cur = s->f14;
    o->pair[1][0].cur = s->f18;
    o->pair[1][1].cur = s->f18;
    o->single[1].cur = s->f20;
    o->single[2].cur = s->f24;
    o->pair[2][0].cur = s->f28;
    o->pair[2][1].cur = s->f28;
    o->pair[3][0].cur = s->f2c;
    o->pair[3][1].cur = s->f2c;
    o->pair[4][0].cur = s->f30;
    o->pair[4][1].cur = s->f30;
}
