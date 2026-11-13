typedef struct Vec_82F8EE90 { int first_; int *data; } Vec_82F8EE90;
extern unsigned int fn_82F8EE48(Vec_82F8EE90 *self);

int *fn_82F8EE90(Vec_82F8EE90 *self, unsigned int i)
{
    if (!(i < fn_82F8EE48(self))) {
        __debugbreak();
    }
    return self->data + i;
}
