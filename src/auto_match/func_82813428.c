__int64 _InterlockedCompareExchange64(__int64 volatile *dest, __int64 exchange, __int64 comparand);

typedef union {
    __int64 value;
    struct {
        unsigned int ptr;
        unsigned int tag;
    } parts;
} Tagged_82813428;

typedef struct {
    Tagged_82813428 seen;
    unsigned int next;
    __int64 *target;
} Op_82813428;

int fn_82813428(Op_82813428 *op)
{
    Tagged_82813428 n;
    n.parts.ptr = op->next;
    n.parts.tag = op->seen.parts.tag + 1;
    if (_InterlockedCompareExchange64(op->target, n.value, op->seen.value) == op->seen.value) {
        op->seen.value = n.value;
        return 1;
    }
    return 0;
}

