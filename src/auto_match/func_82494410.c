typedef struct Listener_82494410 Listener_82494410;
typedef struct ListenerVtbl_82494410 {
    void *slots[2];
    void (*notify)(Listener_82494410 *self, int a, int b, float x, float y, int c, int d, float z);
} ListenerVtbl_82494410;
struct Listener_82494410 { ListenerVtbl_82494410 *vt; };

typedef struct Set_82494410 {
    int pad0;
    Listener_82494410 **begin;
    Listener_82494410 **end;
} Set_82494410;

void fn_82494410(Set_82494410 *self, int a, int b, float x, float y, int c, int d, float z)
{
    Listener_82494410 **it = self->begin;
    Listener_82494410 **end = self->end;

    for (; it != end; it++) {
        (*it)->vt->notify(*it, a, b, x, y, c, d, z);
    }
}
