typedef struct {
    int pad[5];
    void *handle;
} Obj_82BF2AF0;

extern int recv(void *handle, int a, int b, int c);

int fn_82BF2AF0(Obj_82BF2AF0 *o, int a, int b)
{
    int r = recv(o->handle, a, b, 0);
    if (r == -1) {
        return -1;
    }
    return r;
}
