typedef struct ObjVtbl_82FF3080 {
    void (*Destroy)(struct Obj_82FF3080 *self, int flags);
} ObjVtbl_82FF3080;

typedef struct Obj_82FF3080 {
    ObjVtbl_82FF3080 *vt;   /* 0x00 */
    char pad04[0x58];
    int refCount;           /* 0x5c */
} Obj_82FF3080;

typedef struct Node_82FF3080 {
    char pad00[0x10];
    struct Node_82FF3080 *next;   /* 0x10 */
    char pad14[0x5c];
    Obj_82FF3080 *owner;          /* 0x70 */
    char pad74[0xcc];
    float value;                  /* 0x140 */
} Node_82FF3080;

extern Obj_82FF3080 *fn_8301A7B8(int ctx, int key);
extern void fn_82FA5190(int heap, void *p);
extern int lbl_831BC768;
extern int lbl_832642EC;
extern Node_82FF3080 *lbl_83264574;

float fn_82FF3080(int key)
{
    float result = -1.0f;
    Obj_82FF3080 *obj;
    Node_82FF3080 *n;

    obj = fn_8301A7B8(lbl_832642EC, key);
    if (obj != 0) {
        for (n = lbl_83264574; n != 0; n = n->next) {
            if (n->owner == obj && result <= n->value) {
                result = n->value;
            }
        }
        if (--obj->refCount <= 0) {
            int heap = lbl_831BC768;
            obj->vt->Destroy(obj, 0);
            fn_82FA5190(heap, obj);
        }
    }
    return result;
}
