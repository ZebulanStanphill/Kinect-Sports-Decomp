extern void *lbl_8320A754;
extern int lbl_8320A758;
extern void *fn_8281C160(void *heap, int count, int size);

void *fn_82822940(void *heap, int count, int size, void *file, int line)
{
    lbl_8320A754 = file;
    lbl_8320A758 = line;
    return fn_8281C160(heap, count, size);
}
