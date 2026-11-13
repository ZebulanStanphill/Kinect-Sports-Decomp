// Havok-style entity removal from its world: queue a type-0x16 operation while critical operations are
// locked, else lock, reset the collision information through the simulation (slot 0x20, mode 7), notify,
// remove from the broadphase unless already done, and unlock (running pending operations). /O2.
struct World_82D8BA38;
struct Entity_82D8BA38;

class Simulation_82D8BA38 {
public:
    virtual void v0();
    virtual void v4();
    virtual void v8();
    virtual void vc();
    virtual void v10();
    virtual void v14(int arg);
    virtual void v18();
    virtual void v1c();
    virtual void v20(Entity_82D8BA38 **entities, int n, World_82D8BA38 *world, int mode);
};

struct World_82D8BA38 {
    char pad0[8];
    Simulation_82D8BA38 *f8;
    char padc[0x50];
    Simulation_82D8BA38 *f5c;
    char pad60[0x2c];
    int f8c;
    int f90;
    int busy;
    int f98;
    unsigned char f9c;
    char pad9d[7];
    int fa4;
    char pada8[0x2e];
    unsigned char fd6;
};

struct Entity_82D8BA38 {
    int f0;
    int f4;
    World_82D8BA38 *world;
    int fc;
    int f10;
    char pad14[0xd4];
    unsigned char fe8;
};

struct Msg_82D8BA38 {
    unsigned char type;
    Entity_82D8BA38 *obj;
};

extern "C" {
void fn_82D80C18(World_82D8BA38 *w);
void fn_82D80C30(World_82D8BA38 *w);
void fn_82D80C48(World_82D8BA38 *w, Msg_82D8BA38 *msg);
unsigned char *fn_82D899A0(unsigned char *out, Entity_82D8BA38 *e);
void fn_82D89BD8(Entity_82D8BA38 *e);
void fn_82DA4850(Entity_82D8BA38 **entities, int n, World_82D8BA38 *w);
void fn_82DAEEF8(World_82D8BA38 *w, Entity_82D8BA38 *e);

void fn_82D8BA38(Entity_82D8BA38 *e)
{
    World_82D8BA38 *w = e->world;
    Msg_82D8BA38 msg;

    if (w != 0) {
        if (w->busy != 0) {
            msg.type = 0x16;
            msg.obj = e;
            fn_82D80C48(w, &msg);
        } else {
            Entity_82D8BA38 *list;
            unsigned char res;
            w->busy = 1;
            list = e;
            w->f8->v20(&list, 1, w, 7);
            if (e->f10 != 0)
                fn_82DA4850(&list, 1, w);
            if (*fn_82D899A0(&res, e) == 0) {
                if (w->fd6 != 0 && e->fe8 != 5)
                    fn_82D89BD8(e);
                fn_82DAEEF8(w, e);
            }
            if (w->f5c != 0)
                w->f5c->v14(0);
            if (--w->busy == 0 && !w->f9c) {
                if (w->f8c != 0)
                    fn_82D80C18(w);
                if (w->fa4 == 1 && w->f90 != 0)
                    fn_82D80C30(w);
            }
        }
    }
}
}
