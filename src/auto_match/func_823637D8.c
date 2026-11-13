/* Builds a std::tr1::function on the stack around a bound functor {vtable lbl_821B2C74,
   id, &value, &extra} (small-object storage: the manager pointer at +0x10 points back to
   the functor) and passes it to fn_823599A8; fn_82359C18 destroys it. */
typedef struct Functor_823637D8 {
    const void *vt;
    int id;
    float *value;
    int *extra;
} Functor_823637D8;

typedef struct Function_823637D8 {
    Functor_823637D8 impl;
    Functor_823637D8 *mgr;
} Function_823637D8;

extern const void *lbl_821B2C74[];
extern void fn_823599A8(int id, Function_823637D8 *fn);
extern void fn_82359C18(Function_823637D8 *fn);

void fn_823637D8(int id, float value, int extra)
{
    Function_823637D8 fn;

    fn.impl.vt = lbl_821B2C74;
    fn.impl.id = id;
    fn.impl.value = &value;
    fn.impl.extra = &extra;
    fn.mgr = &fn.impl;
    fn_823599A8(id, &fn);
    fn_82359C18(&fn);
}
