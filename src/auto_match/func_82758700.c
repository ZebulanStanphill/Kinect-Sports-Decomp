typedef struct View_82758700 {
    char pad0[0x28];
    unsigned int active;
    char pad2c[0x0c];
} View_82758700;

typedef struct Obj_82758700 {
    int f0;
    int f4;
    char *owner;
    View_82758700 view;
} Obj_82758700;

extern void fn_8275F338(View_82758700 *view, char *a, char *b);

void fn_82758700(Obj_82758700 *self)
{
    View_82758700 *view = &self->view;
    char *owner = self->owner;
    if (view->active != 0)
        fn_8275F338(view, owner + 0x28, owner + 0x34);
}
