/* Forwards its four arguments to fn_829E3850 on the object held in lbl_83217B08[10]. */
extern void *lbl_83217B08[];
extern int fn_829E3850(void *obj, void *a, void *b, void *c, void *d);

int fn_829DB2B8(void *a, void *b, void *c, void *d)
{
    return fn_829E3850(lbl_83217B08[10], a, b, c, d);
}
