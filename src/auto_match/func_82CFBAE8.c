typedef struct Obj_82CFBAE8 {
    void *handle;
} Obj_82CFBAE8;

extern int fn_82A2A618(void *handle, void *arg, int flag);

int fn_82CFBAE8(Obj_82CFBAE8 *self, void *arg)
{
    return fn_82A2A618(self->handle, arg, 0);
}
