typedef struct Value_8266FB20 Value_8266FB20;
typedef struct ValueVT_8266FB20 {
    void *pad[7];
    float (*get)(Value_8266FB20 *);
} ValueVT_8266FB20;
struct Value_8266FB20 { ValueVT_8266FB20 *vt; };
typedef struct Source_8266FB20 Source_8266FB20;
typedef struct SourceVT_8266FB20 {
    void *pad0;
    Value_8266FB20 *(*value)(Source_8266FB20 *);
} SourceVT_8266FB20;
struct Source_8266FB20 { SourceVT_8266FB20 *vt; };
typedef struct Obj_8266FB20 {
    char pad0[0x10];
    Source_8266FB20 *source;
    char pad14[0xdc];
    int enabled;
} Obj_8266FB20;

float fn_8266FB20(Obj_8266FB20 *o)
{
    Value_8266FB20 *v;
    if (o->enabled == 0) {
        return 0.0f;
    }
    v = o->source->vt->value(o->source);
    return v->vt->get(v);
}
