// Looks an object up by id in the manager's map of weak references and returns a strong reference
// to it (empty when the id is unknown or the object is gone): map.count(id) != 0, then
// map.find(id)->second.lock(). The caller passes the manager before the result pointer, so this is
// a free (or static) function, not a member.
#include <map>

struct Object_825138E0;

extern "C" {
bool fn_8223AAC0(void *rep);
void fn_822315A0(void *rep);
}

struct WeakRef_825138E0 {
    Object_825138E0 *object; /* 0x00 */
    void *rep;               /* 0x04 */
};

struct SharedRef_825138E0 {
    Object_825138E0 *object; /* 0x00 */
    void *rep;               /* 0x04 */

    SharedRef_825138E0() : object(0), rep(0)
    {
    }

    // std::tr1::weak_ptr<T>::lock(): takes a reference only while the object is alive.
    explicit SharedRef_825138E0(const WeakRef_825138E0 &weak) : object(0), rep(0)
    {
        void *otherRep = weak.rep;
        Object_825138E0 *otherObject = weak.object;

        if (otherRep != 0 && fn_8223AAC0(otherRep)) {
            if (rep != 0) {
                fn_822315A0(rep);
            }
            rep = otherRep;
            object = otherObject;
        }
    }
};

typedef std::map<unsigned int, WeakRef_825138E0> ObjectMap_825138E0;
typedef ObjectMap_825138E0::_Mybase ObjectTree_825138E0;

extern "C" void fn_82248B90(ObjectTree_825138E0::const_iterator *it);

template <>
__forceinline ObjectTree_825138E0::const_iterator &ObjectTree_825138E0::const_iterator::operator++()
{
    fn_82248B90(this);
    return *this;
}

class Manager_825138E0
{
  public:
    int unknown00;
    ObjectMap_825138E0 objects; /* 0x04 */
};

extern "C" SharedRef_825138E0 fn_825138E0(Manager_825138E0 *self, unsigned int id)
{
    if (self->objects.count(id) != 0) {
        return SharedRef_825138E0(self->objects.find(id)->second);
    }
    return SharedRef_825138E0();
}
