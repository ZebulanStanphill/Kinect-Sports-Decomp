typedef struct String {
    char buf[16];
    unsigned int size;
    unsigned int res;
} String;

typedef struct Inner {
    unsigned char pad[0xc0];
    void *target;
} Inner;

typedef struct State {
    unsigned char pad0[0x114];
    Inner *inner;
    unsigned char pad118[0xdc];
    float value;
} State;

typedef struct Obj {
    unsigned char pad[0xc];
    State *state;
} Obj;

extern float lbl_821CA45C[];
extern void fn_82230110(String *s, const char *text);
extern void fn_822FB198(void *target, String *s);
extern void fn_82230300(String *s, unsigned char built, unsigned int newsize);

void fn_82314B08(Obj *o)
{
    String s;
    fn_82230110(&s, "idleset_default");
    fn_822FB198(o->state->inner->target, &s);
    fn_82230300(&s, 1, 0);
    o->state->value = lbl_821CA45C[1];
}
