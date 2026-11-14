typedef struct Unit_822E0EB0 {
    char pad0[0x2c];
    int f2c;
    char pad30[0x278];
    float timer;
    int active;
} Unit_822E0EB0;

typedef struct Self_822E0EB0 {
    char pad0[0x10];
    void *world;
    Unit_822E0EB0 *unit;
} Self_822E0EB0;

extern const float lbl_82191100[12];
extern float lbl_831CD598[51];
extern unsigned int fn_823737B8(void *world, int flag);
extern int fn_822CF008(Unit_822E0EB0 *unit, float range);
extern int fn_822CFA38(Unit_822E0EB0 *unit, int kind);

int fn_822E0EB0(Self_822E0EB0 *self)
{
    Unit_822E0EB0 *unit = self->unit;

    if (unit->active != 0 && unit->timer < lbl_82191100[6])
        return 0;
    if (fn_823737B8(self->world, unit->f2c == 0) != 0)
        return 0;
    if (fn_822CF008(unit, lbl_831CD598[49]) == 0)
        return 0;
    return fn_822CFA38(self->unit, 9);
}
