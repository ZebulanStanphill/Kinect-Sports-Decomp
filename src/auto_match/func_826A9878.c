typedef struct Value_826A9878 { int v[4]; } Value_826A9878;

typedef struct VM_826A9878 {
    char pad00[0x28];
    Value_826A9878 nil;
    char pad38[0x68 - 0x38];
    Value_826A9878 *stack;
    unsigned int count;
} VM_826A9878;

extern void fn_826A9168(VM_826A9878 *vm, const char *fmt, ...);

Value_826A9878 *fn_826A9878(VM_826A9878 *vm, unsigned int reg)
{
    if (reg >= vm->count) {
        fn_826A9168(vm, "Invalid local register %d, stack only has %d entries\n", reg, vm->count);
        return &vm->nil;
    }
    return &vm->stack[vm->count - reg - 1];
}
