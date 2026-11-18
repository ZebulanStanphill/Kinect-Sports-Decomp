extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);

struct Elem_828B58F0 {
    unsigned short a; /* 0x0 */
    unsigned short b; /* 0x2 */
};

struct Vec_828B58F0 {
    int pad0;
    Elem_828B58F0 *first; /* 0x4 */
    Elem_828B58F0 *last;  /* 0x8 */
    char pad0c[8];
    unsigned short id; /* 0x14 */

    const Elem_828B58F0 &at(unsigned int index) const
    {
        if ((unsigned int)(last - first) <= index) {
            fn_82F622E0("invalid vector<T> subscript");
        }
        return first[index];
    }
};

struct Out_828B58F0 {
    unsigned short id;   /* 0x0 */
    unsigned short a;    /* 0x2 */
    unsigned short b;    /* 0x4 */
    unsigned char tag;   /* 0x6 */
    unsigned char valid; /* 0x7 */

    Out_828B58F0(unsigned short newId, const Elem_828B58F0 &newElem)
        : id(newId), a(newElem.a), b(newElem.b), tag(0xde), valid(1)
    {
    }
};

extern "C" Out_828B58F0 fn_828B58F0(const Vec_828B58F0 *vec, unsigned int index)
{
    return Out_828B58F0(vec->id, vec->at(index));
}
