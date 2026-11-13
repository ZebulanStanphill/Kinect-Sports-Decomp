typedef struct Entry_83014548 { int a; int b; int c; } Entry_83014548;
typedef struct Obj_83014548 {
    char pad0[0x60];
    Entry_83014548 prev;
    Entry_83014548 cur;
} Obj_83014548;
extern int fn_83014400(Obj_83014548 *self, int *a, int *b);

int fn_83014548(Obj_83014548 *self, int *a, int *b)
{
    self->prev = self->cur; return fn_83014400(self, a, b);
}
