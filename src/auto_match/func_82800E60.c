typedef struct Obj_82800E60 {
    float base;
    float unk4;
    float unk8;
    float scale;
} Obj_82800E60;

extern void fn_82800C70(Obj_82800E60 *o, float t);

void fn_82800E60(Obj_82800E60 *o, float t)
{
    fn_82800C70(o, o->scale * t + o->base);
}
