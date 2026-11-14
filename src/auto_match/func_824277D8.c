typedef struct Obj_824277D8 {
    unsigned int count;
} Obj_824277D8;

typedef struct List_824277D8 {
    Obj_824277D8 **begin;
    Obj_824277D8 **end;
} List_824277D8;

extern unsigned int fn_82427540(Obj_824277D8 *obj, unsigned int index);

static __forceinline int NotEnd(Obj_824277D8 **it, Obj_824277D8 **end)
{
    if (it != end)
        return 1;
    return 0;
}

int fn_824277D8(Obj_824277D8 *self, List_824277D8 *others, int wantLast, int wantPrev)
{
    unsigned int n = self->count + 1;
    unsigned int last;
    unsigned int prev;
    int okLast;
    int okPrev;
    Obj_824277D8 **it;
    Obj_824277D8 **end;

    if (n > 2) {
        last = fn_82427540(self, n - 1);
        prev = fn_82427540(self, n - 2);
        okLast = 1;
        okPrev = 1;
        it = others->begin;
        end = others->end;
        while (NotEnd(it, end)) {
            Obj_824277D8 *o = *it;
            okLast = fn_82427540(o, n - 1) <= last ? okLast : 0;
            okPrev = fn_82427540(o, n - 2) <= prev ? okPrev : 0;
            it++;
        }
        if (okLast == wantLast && okPrev == wantPrev)
            return 1;
    }
    return 0;
}
