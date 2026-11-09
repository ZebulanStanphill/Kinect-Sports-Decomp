// Allocates a 0x870-byte object with the global operator new (fn_8265C9E0) and
// constructs it with fn_8224C588, returning 0 when the allocation fails.
extern void *fn_8265C9E0(unsigned int size);
extern void *fn_8224C588(void *self, int param_1, int param_2, int param_3);

void *fn_82246230(int param_1, int param_2, int param_3)
{
    void *mem = fn_8265C9E0(0x870);
    if (mem != 0) {
        return fn_8224C588(mem, param_1, param_2, param_3);
    }
    return 0;
}
