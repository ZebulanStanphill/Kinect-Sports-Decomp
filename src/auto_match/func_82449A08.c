typedef struct Obj_82449A08 Obj_82449A08;
typedef struct {
    void *slots[15];
    unsigned char (*Accept)(Obj_82449A08 *self, void *item);
} ObjVt_82449A08;
typedef struct {
    char pad[0x40];
    float value;
} State_82449A08;
struct Obj_82449A08 {
    ObjVt_82449A08 *vt;
    char pad4[0x3c];
    int *source;
    State_82449A08 *state;
};
extern void *fn_8242C1B8(int id);

unsigned char fn_82449A08(Obj_82449A08 *o)
{
    if (o->state->value <= 0.0f) {
        void *item = fn_8242C1B8(*o->source);
        if (o->vt->Accept(o, item) == 0) {
            return 0;
        }
    }
    return 1;
}
