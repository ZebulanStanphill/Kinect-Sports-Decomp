typedef struct Vec3_82267E00 {
    float x;
    float y;
    float z;
} Vec3_82267E00;

typedef struct Node_82267E00 {
    struct Node_82267E00 *next;
    struct Node_82267E00 *prev;
    char *value;
} Node_82267E00;

typedef struct List_82267E00 {
    Node_82267E00 *head;
} List_82267E00;

extern float lbl_821CC160;
extern void fn_8252A1B0(void *p, Vec3_82267E00 *v, int flag);

static __forceinline char *Find_82267E00(List_82267E00 *list, unsigned int id)
{
    Node_82267E00 *n;

    for (n = list->head->next; n != list->head; n = n->next) {
        if (*(unsigned int *)(n->value + 0x40) == id) {
            return n->value;
        }
    }
    return 0;
}

static __forceinline Vec3_82267E00 MakeVec3_82267E00(float x, float y, float z)
{
    Vec3_82267E00 v;

    v.x = x;
    v.y = y;
    v.z = z;
    return v;
}

void fn_82267E00(List_82267E00 *list, unsigned int id, float f)
{
    char *obj = Find_82267E00(list, id);
    void *target;
    Vec3_82267E00 v;

    if (obj != 0) {
        target = *(void **)(obj + 0xdc);
        if (target != 0 && (*(int *)(obj + 0x52c) == 3 || *(int *)(obj + 0x52c) == 4)) {
            v = MakeVec3_82267E00(lbl_821CC160, f, lbl_821CC160);
            fn_8252A1B0(target, &v, 0);
        }
    }
}
