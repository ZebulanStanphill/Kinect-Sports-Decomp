typedef void (*Callback_829DB3A0)(int *state);

extern void *lbl_83217B08[];
extern int lbl_832187B4[];

int fn_829E32C0(void *obj, float x, float y, int *out);

int fn_829DB3A0(float x, float y, int *out)
{
    int hr = fn_829E32C0(lbl_83217B08[12], x, y, out);

    if (hr >= 0 && lbl_83217B08[8] != 0) {
        lbl_832187B4[12] = *out == 0;
        ((Callback_829DB3A0)lbl_83217B08[8])(lbl_832187B4);
    }
    return hr;
}
