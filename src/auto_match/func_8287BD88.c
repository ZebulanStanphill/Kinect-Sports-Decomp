typedef struct Listener Listener;
typedef struct {
    void (*f0)(Listener *l, void *owner);
} ListenerVtbl;
struct Listener {
    ListenerVtbl *vtbl;
};

typedef struct {
    int pad0;
    Listener **begin;
    Listener **end;
} Owner;

int fn_8287BD88(Owner *param_1)
{
    Listener **it;

    for (it = param_1->begin; it != param_1->end; it++) {
        (*it)->vtbl->f0(*it, param_1);
    }
    return 0;
}
