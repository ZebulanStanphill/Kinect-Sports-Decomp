typedef struct Value_8266FAC8 Value_8266FAC8;
typedef struct ValueVT_8266FAC8 {
    void *pad[6];
    float (*get)(Value_8266FAC8 *);
} ValueVT_8266FAC8;
struct Value_8266FAC8 { ValueVT_8266FAC8 *vt; };
typedef struct Source_8266FAC8 Source_8266FAC8;
typedef struct SourceVT_8266FAC8 {
    void *pad0;
    Value_8266FAC8 *(*value)(Source_8266FAC8 *);
} SourceVT_8266FAC8;
struct Source_8266FAC8 { SourceVT_8266FAC8 *vt; };
typedef struct Obj_8266FAC8 {
    char pad0[0x10];
    Source_8266FAC8 *source;
    char pad14[0xdc];
    int enabled;
} Obj_8266FAC8;

float fn_8266FAC8(Obj_8266FAC8 *o)
{
    Value_8266FAC8 *v;
    if (o->enabled == 0) {
        return 0.0f;
    }
    v = o->source->vt->value(o->source);
    return v->vt->get(v);
}
