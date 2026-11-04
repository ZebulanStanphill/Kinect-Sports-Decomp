#include "game/AnyHolder_823A8AA8.h"

typedef boost::any::holder<NetworkTTBallHitNotif> Holder_823A9DB8;

extern "C" boost::any::placeholder *fn_823A9DB8(const Holder_823A9DB8 *self)
{
    return new Holder_823A9DB8(self->held);
}
