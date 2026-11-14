// Subtracts a convex shape from a convex hull (Havok's hkgpConvexHull code;
// the class and the method name are placeholders). fn_82D0FA60 splits the hull
// against the operand: it returns the part inside the operand through
// `inside` and appends the parts outside it to `pieces`. If nothing is inside,
// the hull is untouched by the operand: the pieces are destroyed and the
// result is false. Otherwise the inside part is thrown away and the pieces
// are what is left of the hull. `thickness` is only passed on.
class Object_82D0FE70 {
public:
    virtual ~Object_82D0FE70();
};

struct ObjectArray_82D0FE70 {
    Object_82D0FE70 **data;
    int size;
    int capacity;
};

class Hull_82D0FE70;
extern "C" void fn_82D0FA60(Hull_82D0FE70 *hull, void *operand, Object_82D0FE70 **inside, ObjectArray_82D0FE70 *pieces,
                            float thickness);

class Hull_82D0FE70 {
public:
    bool subtract(void *operand, ObjectArray_82D0FE70 *pieces, float thickness);
};

bool Hull_82D0FE70::subtract(void *operand, ObjectArray_82D0FE70 *pieces, float thickness)
{
    int i = pieces->size;
    Object_82D0FE70 *inside;

    fn_82D0FA60(this, operand, &inside, pieces, thickness);
    if (inside != 0) {
        delete inside;
        return true;
    }
    for (; i < pieces->size; i++)
        delete pieces->data[i];
    pieces->size = 0;
    return false;
}
