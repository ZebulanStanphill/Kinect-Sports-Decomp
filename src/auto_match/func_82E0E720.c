typedef struct Entry_82E0E720 { void *key; void *value; } Entry_82E0E720;
typedef struct Obj_82E0E720 Obj_82E0E720;
typedef struct ObjVt_82E0E720 {
    void *slots[4];
    void *(*f10)(Obj_82E0E720 *, const char *);
} ObjVt_82E0E720;
struct Obj_82E0E720 { ObjVt_82E0E720 *vt; };
extern const char *fn_82CEAC20(void *p);

void fn_82E0E720(Entry_82E0E720 *e, int n, Obj_82E0E720 *self)
{
    int i;
    for (i = 0; i < n; i++, e++) {
        if (e->value != 0)
            e->value = self->vt->f10(self, fn_82CEAC20(e->value));
    }
}
