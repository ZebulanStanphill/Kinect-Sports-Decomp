typedef struct {
    int pad[4];
    float x;
    float y;
    float z;
} Item;

typedef struct {
    int a;
    int b;
    Item *items[3];
} Obj;

int fn_82D1F788(Obj *o, float *v)
{
    int i;

    for (i = 0; i < 3; i++) {
        Item *it = o->items[i];
        if (it->x == v[0] && it->y == v[1] && it->z == v[2]) {
            return 1;
        }
    }
    return 0;
}
