typedef struct Sub_830027F0 {
    char pad[0x2c];
    float x;
    float y;
} Sub_830027F0;

typedef struct Obj_830027F0 {
    char pad[0x68];
    Sub_830027F0 *sub;
} Obj_830027F0;

extern void fn_83005838(Obj_830027F0 *p, float a, float b, float c);
extern unsigned char fn_83001FE8(Obj_830027F0 *p);

void fn_830027F0(Obj_830027F0 *p, float a, float b, float c)
{
    fn_83005838(p, a, 0.0f, 0.0f);
    if ((b != 0.0f || c != 0.0f || p->sub != 0) && fn_83001FE8(p) != 0) {
        p->sub->x = b;
        p->sub->y = c;
    }
}
