extern "C" {
__int64 fn_828865B0(void *);
__int64 fn_828865C0(void *);
int fn_82886608(void *);
void fn_8287FF40(void *, void *);
}
class Ev_828804C0 {
public:
    virtual ~Ev_828804C0();
    virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4(); virtual void v5();
    virtual void v6(); virtual void v7(); virtual void v8(); virtual void v9(); virtual void v10();
    virtual void v11(); virtual void v12();
    virtual void v13(__int64 t);
    virtual void v14();
    virtual int v15();
    char pad[0x28 - 4];
    int f2c;
    Ev_828804C0 *next;
    Ev_828804C0 *prev;
    char pad2[0x10];
    __int64 time;
};
struct List_828804C0 { Ev_828804C0 *head; Ev_828804C0 *tail; int count; };
struct Mgr_828804C0 { char pad[0x70]; char sub[0xc]; List_828804C0 list; };
extern "C" void fn_828804C0(Mgr_828804C0 *param_1, __int64 param_2)
{
    List_828804C0 *l = &param_1->list;
    Ev_828804C0 *e = l->head;
    while (e != 0) {
        Ev_828804C0 *nx = e->next;
        if (param_2 < fn_828865B0(e)) break;
        if (e->next != 0) e->next->prev = e->prev;
        if (e->prev != 0) e->prev->next = e->next;
        if (l->head == e) l->head = e->next;
        if (l->tail == e) l->tail = e->prev;
        e->next = 0;
        e->prev = 0;
        l->count--;
        e->f2c = 0;
        if (fn_828865C0(e) < 0 || fn_828865C0(e) > param_2 || e->v15() == 0) {
            if (fn_82886608(e) == 0) e->time = param_2;
            e->v13(param_2);
            fn_8287FF40(param_1->sub, e);
        } else {
            delete e;
        }
        e = nx;
    }
}
