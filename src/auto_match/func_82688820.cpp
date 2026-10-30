extern "C" {
int fn_8267C4C8(void *);
int fn_82687270(void *);
int fn_826D9388(void *, void *);
}

class Iface_82688820 {
public:
    virtual void s0();
    virtual void s1();
    virtual void s2(void *arg);
};

struct Inner_82688820 { char pad[0xc]; void *ref; };
struct Param2_82688820 { char pad[8]; Iface_82688820 *iface; char pad2[0x10]; Inner_82688820 *inner; };
struct Param1_82688820 { char pad[0xc]; void *target; };

extern "C" void fn_82688820(Param1_82688820 *param_1, Param2_82688820 *param_2, unsigned char param_3)
{
    void *aiStack_30;
    void *iVar1;
    if (param_1->target != 0 && param_2 != 0) {
        iVar1 = param_2->inner->ref;
        if (iVar1 != 0) {
            fn_8267C4C8(iVar1);
        }
        aiStack_30 = iVar1;
        fn_826D9388(param_1->target, &aiStack_30);
        if (iVar1 != 0) {
            fn_82687270(iVar1);
        }
        if (param_3 != 0 && param_2->iface != 0) {
            param_2->iface->s2(param_2);
        }
    }
}
