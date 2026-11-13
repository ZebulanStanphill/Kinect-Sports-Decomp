typedef struct Obj_8238E168 {
    int pad0[2];
    char *owner;
    float value;
    int state;
} Obj_8238E168;

extern float lbl_831CA1A4;
extern int fn_82278B40(void *);

int fn_8238E168(Obj_8238E168 *o)
{
    o->value = lbl_831CA1A4;
    o->state = 0;
    return fn_82278B40(o->owner + 0x9a0);
}
