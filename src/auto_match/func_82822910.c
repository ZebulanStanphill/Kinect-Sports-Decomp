extern void *lbl_8320A754;
extern int lbl_8320A758;
extern void *fn_828234D8(int count, int size);

void *fn_82822910(int count, int size, void *file, int line)
{
    lbl_8320A754 = file;
    lbl_8320A758 = line;
    return fn_828234D8(count, size);
}
