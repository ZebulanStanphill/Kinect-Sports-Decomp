// XLip (Visual C++ 2010's standard library built without inlining): look the
// key up in a map of vector pointers, create the vector on a miss, then append
// an (id, text) record. Every library member is an out-of-line call that keeps
// its fn_ name; the classes are placeholders named after this function.
struct String_8265F0B0 {
    char storage[28];

    String_8265F0B0(const String_8265F0B0 &other);
    String_8265F0B0 &operator=(const String_8265F0B0 &other);
    ~String_8265F0B0();
};

struct Record_8265F0B0 {
    unsigned int id;      /* 0x0 */
    String_8265F0B0 text; /* 0x4 */

    Record_8265F0B0();
    ~Record_8265F0B0();
};

struct ConstIter_8265F0B0 {
    void *node;
};

struct Iter_8265F0B0 : ConstIter_8265F0B0 {
    Iter_8265F0B0()
    {
    }
};

struct Vector_8265F0B0 {
    char storage[16];

    Vector_8265F0B0();
};

struct Pair_8265F0B0 {
    unsigned int key;         /* 0x0 */
    Vector_8265F0B0 *records; /* 0x4 */
};

struct Tree_8265F0B0 {
    Iter_8265F0B0 find(const unsigned int *key);
    Iter_8265F0B0 end();
};

extern "C" unsigned char fn_8265FA90(ConstIter_8265F0B0 *, const Iter_8265F0B0 &);
extern "C" Pair_8265F0B0 *fn_826666A0(ConstIter_8265F0B0 *);
extern "C" Vector_8265F0B0 **fn_8265F798(Tree_8265F0B0 *, const unsigned int *);
extern "C" void fn_8265FB98(Vector_8265F0B0 *, const Record_8265F0B0 *);

extern "C" void fn_8265F0B0(Tree_8265F0B0 *self, unsigned int key, unsigned int id, String_8265F0B0 text)
{
    ConstIter_8265F0B0 it = self->find(&key);
    Vector_8265F0B0 *records;

    if (fn_8265FA90(&it, self->end())) {
        records = fn_826666A0(&it)->records;
    } else {
        records = new Vector_8265F0B0;
        *fn_8265F798(self, &key) = records;
    }
    {
        // The record lives in its own block: without optimisation that puts
        // its stack slot above the two locals, as in the original.
        Record_8265F0B0 record;

        record.id = id;
        record.text = text;
        fn_8265FB98(records, &record);
    }
}
