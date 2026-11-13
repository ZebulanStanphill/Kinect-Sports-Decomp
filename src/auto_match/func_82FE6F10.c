extern void *lbl_83264308;
extern int fn_83013F90(void *self, int id, unsigned int *out);

int fn_82FE6F10(int id, unsigned int *out)
{
    if (out == 0) {
        return 0x1f;
    }
    return fn_83013F90(lbl_83264308, id, out);
}
