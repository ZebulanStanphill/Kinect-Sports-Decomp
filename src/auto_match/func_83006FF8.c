typedef int (*Method_83006FF8)();
typedef struct Callback_83006FF8 {
    int *object;
    unsigned int context;
    unsigned char flag : 1;
    unsigned char other : 7;
    unsigned char pad[3];
} Callback_83006FF8;
extern unsigned char fn_830069B8(int *);
extern unsigned int fn_83008158(unsigned int, unsigned int, Callback_83006FF8);

unsigned int fn_83006FF8(int *self, unsigned int target)
{
    Callback_83006FF8 callback;
    unsigned int result;

    (*(Method_83006FF8 *)(*self + 0xd8))(self);
    result = 2;
    callback.flag = 1;
    if (fn_830069B8(self) && fn_83008158(self[8] + 0x24, target, callback)) {
        result = 1;
    }
    (*(Method_83006FF8 *)(*self + 0xdc))(self);
    return result;
}
