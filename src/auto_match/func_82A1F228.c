extern void MmSetAddressProtect(void *base, unsigned int size, unsigned int protect);

void fn_82A1F228(void *base, unsigned int size, unsigned int protect)
{
    if (size != 0) {
        MmSetAddressProtect(base, size, protect);
    }
}
