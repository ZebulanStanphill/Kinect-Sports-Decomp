typedef struct Obj_8268E308 {
    int pad[3];
    void *head;
} Obj_8268E308;

extern void fn_8268E298(Obj_8268E308 *self, void *node, int a, int b);

void fn_8268E308(Obj_8268E308 *self, int a, int b)
{
    fn_8268E298(self, self->head, a, b);
}
