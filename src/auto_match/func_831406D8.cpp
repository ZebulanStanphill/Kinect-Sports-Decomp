namespace std {
extern "C" __declspec(noreturn) void fn_82F622A8(const char *message);
extern "C" __declspec(noreturn) void fn_82F622E0(const char *message);
}
#define _Xlength_error fn_82F622A8
#define _Xout_of_range fn_82F622E0
#include <set>
#undef _Xlength_error
#undef _Xout_of_range

struct __declspec(align(8)) Element_8287EFA0 {
    unsigned key;
    int data[59];
};

inline bool operator<(const Element_8287EFA0 &a, const Element_8287EFA0 &b)
{
    return a.key < b.key;
}

typedef std::set<Element_8287EFA0> Set;
typedef Set::_Mybase Tree;

struct Glob_831406D8 {
    char pad[0xf0];
    Tree tree;
};

extern "C" {
extern Glob_831406D8 lbl_832118A0;
int fn_8265CA20(void *);
void fn_8287E918(void *);
}

extern "C" void fn_831406D8(void)
{
    lbl_832118A0.tree.erase(lbl_832118A0.tree.begin(), lbl_832118A0.tree.end());
    fn_8265CA20(*(void **)((char *)&lbl_832118A0 + 0xf4));
    fn_8287E918(&lbl_832118A0);
}
