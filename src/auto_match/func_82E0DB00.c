typedef struct Entry_82E0DB00 { void *key; void *value; } Entry_82E0DB00;
typedef struct Obj_82E0DB00 Obj_82E0DB00;
typedef struct ObjVt_82E0DB00 {
    void *slots[5];
    void (*f14)(Obj_82E0DB00 *, void *, void **);
} ObjVt_82E0DB00;
struct Obj_82E0DB00 { ObjVt_82E0DB00 *vt; };

void fn_82E0DB00(Obj_82E0DB00 *self, Entry_82E0DB00 *e, int n)
{
    int i;
    for (i = 0; i < n; i++, e++) {
        if (e->key != 0 && e->value != 0)
            self->vt->f14(self, e->value, &e->value);
    }
}
