typedef struct {
    char pad[0x1c];
    int x1c;
    float x20;
} Obj_8303B938;

int fn_8303B938(Obj_8303B938 *o, int **cursor)
{
    int v;
    int w;
    v = **cursor;
    *cursor += 1;
    o->x1c = v;
    w = **cursor;
    *cursor += 1;
    o->x20 = *(float *)&w;
    return 1;
}
