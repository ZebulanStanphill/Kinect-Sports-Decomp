typedef struct List_823A3110 { int *items; int pad[3]; int index; } List_823A3110;
typedef struct Item_823A3110 { char pad[0x20]; float value; } Item_823A3110;
typedef struct Info_823A3110 { char pad[0x40]; unsigned int state; } Info_823A3110;
typedef struct Obj_823A3110 Obj_823A3110;
typedef struct VT_823A3110 {
    int pad[29];
    int (*f74)(Obj_823A3110 *, int, int);
} VT_823A3110;
struct Obj_823A3110 { VT_823A3110 *vt; };
typedef struct Ctx_823A3110 {
    char pad0[8];
    List_823A3110 ***pairs;
    char padc[0x94];
    Info_823A3110 *info;

    char pada4[0x23c];
    Obj_823A3110 *obj;
} Ctx_823A3110;
typedef struct Self_823A3110 { int pad[2]; Ctx_823A3110 *ctx; } Self_823A3110;

#define VAL(l) ((int)((Item_823A3110 *)(l)->items[(l)->index])->value)

int fn_823A3110(Self_823A3110 *self)
{
    int info = (int)self->ctx->info;
    List_823A3110 **pair = *self->ctx->pairs;
    int a = VAL(pair[0]);
    int b = VAL(pair[1]);
    if ((info == 0 || ((Info_823A3110 *)info)->state != 1) &&
        self->ctx->obj->vt->f74(self->ctx->obj, a, b) != 0) {
        return 1;
    }
    return 0;
}
