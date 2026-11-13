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
extern "C" void fn_82D0FA60(Hull_82D0FE70 *hull, void *input, Object_82D0FE70 **error, ObjectArray_82D0FE70 *out);

class Hull_82D0FE70 {
public:
    int hasErrors(void *input, ObjectArray_82D0FE70 *out);
};

int Hull_82D0FE70::hasErrors(void *input, ObjectArray_82D0FE70 *out)
{
    int i = out->size;
    Object_82D0FE70 *error;

    fn_82D0FA60(this, input, &error, out);
    if (error != 0) {
        delete error;
        return 1;
    }
    for (; i < out->size; i++)
        delete out->data[i];
    out->size = 0;
    return 0;
}
