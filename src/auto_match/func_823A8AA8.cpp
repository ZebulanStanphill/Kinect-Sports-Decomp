#include "game/AnyHolder_823A8AA8.h"

struct Target_823A8AA8 {
    virtual void v0(); virtual void v1(); virtual void v2(); virtual void v3(); virtual void v4();
    virtual void Set(int key, NetworkTTBallHitNotif *v);
};

extern "C" void fn_823A8AA8(Target_823A8AA8 *t, int key, boost::any *a)
{
    NetworkTTBallHitNotif *h = boost::any_cast<NetworkTTBallHitNotif>(a);
    if (h != 0) {
        t->Set(key, h);
    } else {
        NetworkTTBallHitNotif tmp;
        t->Set(key, &tmp);
        boost::any::placeholder *nh = new boost::any::holder<NetworkTTBallHitNotif>(tmp);
        boost::any::placeholder *old = a->content;
        a->content = nh;
        delete old;
    }
}
