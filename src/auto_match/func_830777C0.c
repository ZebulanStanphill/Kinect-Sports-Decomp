typedef struct Obj_830777C0 {
    char pad0[0x18];
    float x0;
    float y0;
    float a;
    float b;
    float c;
    char pad2c[0x38 - 0x2c];
    int counters[12];
    float curX0;
    float curY0;
    float curA0;
    float curA1;
    float curB0;
    float curB1;
    float curC;
    int frames;
    float s0;
    float s1;
    float s2;
} Obj_830777C0;
void fn_830777C0(Obj_830777C0 *o)
{
    o->counters[0] = 0;
    o->counters[1] = 0;
    o->counters[2] = 0;
    o->counters[3] = 0;
    o->counters[4] = 0;
    o->counters[5] = 0;
    o->counters[6] = 0;
    o->counters[7] = 0;
    o->counters[8] = 0;
    o->counters[9] = 0;
    o->counters[10] = 0;
    o->counters[11] = 0;
    o->curX0 = o->x0;
    o->curY0 = o->y0;
    o->curA0 = o->a;
    o->curA1 = o->a;
    o->curB0 = o->b;
    o->curB1 = o->b;
    o->curC = o->c;
    o->frames = 30;
    o->s1 = 1.0f;
    o->s2 = 1.0f;
    o->s0 = 1.0f;
}
