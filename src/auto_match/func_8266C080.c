extern char lbl_82001D2C[];

typedef struct Value_8266C080 { int v; } Value_8266C080;

typedef struct Obj_8266C080 {
    void *vtable;
    Value_8266C080 value;
} Obj_8266C080;

Obj_8266C080 *fn_8266C080(Obj_8266C080 *self, const Value_8266C080 *value)
{
    self->vtable = lbl_82001D2C;
    self->value = *value;
    return self;
}
